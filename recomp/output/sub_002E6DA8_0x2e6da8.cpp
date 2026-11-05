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

// Function: sub_002E6DA8
// Address: 0x2e6da8 - 0x2e6e80
void sub_002E6DA8_0x2e6da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6DA8_0x2e6da8");
#endif

    switch (ctx->pc) {
        case 0x2e6de0u: goto label_2e6de0;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e14u: goto label_2e6e14;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e4cu: goto label_2e6e4c;
        default: break;
    }

    ctx->pc = 0x2e6da8u;

    // 0x2e6da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e6dac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e6dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e6db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e6db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e6db4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e6db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6db8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e6dbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e6dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e6dc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e6dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e6dc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e6dc8: 0x8e821348  lw          $v0, 0x1348($s4)
    ctx->pc = 0x2e6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4936)));
    // 0x2e6dcc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6DCCu;
    {
        const bool branch_taken_0x2e6dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6dcc) {
            ctx->pc = 0x2E6E0Cu;
            goto label_2e6e0c;
        }
    }
    ctx->pc = 0x2E6DD4u;
    // 0x2e6dd4: 0x90520022  lbu         $s2, 0x22($v0)
    ctx->pc = 0x2e6dd4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2e6dd8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6DD8u;
    {
        const bool branch_taken_0x2e6dd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD8u;
        // 0x2e6ddc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dd8) {
            ctx->pc = 0x2E6E0Cu;
            goto label_2e6e0c;
        }
    }
    ctx->pc = 0x2E6DE0u;
label_2e6de0:
    // 0x2e6de0: 0x8e841348  lw          $a0, 0x1348($s4)
    ctx->pc = 0x2e6de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4936)));
    // 0x2e6de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e6de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6de8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x2E6DE8u;
    SET_GPR_U32(ctx, 31, 0x2E6DF0u);
    ctx->pc = 0x2E6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DE8u;
    // 0x2e6dec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x2E6DE8u, 0x2E6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DF0u;
label_2e6df0:
    // 0x2e6df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6df4: 0xc04113c  jal         func_1044F0
    ctx->pc = 0x2E6DF4u;
    SET_GPR_U32(ctx, 31, 0x2E6DFCu);
    ctx->pc = 0x2E6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DF4u;
    // 0x2e6df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F0u, 0x2E6DF4u, 0x2E6DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DFCu;
label_2e6dfc:
    // 0x2e6dfc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2e6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e6e00: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x2e6e00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2e6e04: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E6E04u;
    {
        const bool branch_taken_0x2e6e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E04u;
        // 0x2e6e08: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e04) {
            ctx->pc = 0x2E6DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6de0;
        }
    }
    ctx->pc = 0x2E6E0Cu;
label_2e6e0c:
    // 0x2e6e0c: 0xc095368  jal         func_254DA0
    ctx->pc = 0x2E6E0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6E14u);
    ctx->pc = 0x2E6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E0Cu;
    // 0x2e6e10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x2E6E0Cu, 0x2E6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E14u;
label_2e6e14:
    // 0x2e6e14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e6e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e18: 0x52400011  beql        $s2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E6E18u;
    {
        const bool branch_taken_0x2e6e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e18) {
            ctx->pc = 0x2E6E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E18u;
            // 0x2e6e1c: 0xae921348  sw          $s2, 0x1348($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4936), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E60u;
            goto label_2e6e60;
        }
    }
    ctx->pc = 0x2E6E20u;
    // 0x2e6e20: 0x92530022  lbu         $s3, 0x22($s2)
    ctx->pc = 0x2e6e20u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x2e6e24: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2E6E24u;
    {
        const bool branch_taken_0x2e6e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E24u;
        // 0x2e6e28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e24) {
            ctx->pc = 0x2E6E5Cu;
            goto label_2e6e5c;
        }
    }
    ctx->pc = 0x2E6E2Cu;
    // 0x2e6e2c: 0x0  nop
    ctx->pc = 0x2e6e2cu;
    // NOP
label_2e6e30:
    // 0x2e6e30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e6e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e34: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x2E6E34u;
    SET_GPR_U32(ctx, 31, 0x2E6E3Cu);
    ctx->pc = 0x2E6E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E34u;
    // 0x2e6e38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x2E6E34u, 0x2E6E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E3Cu;
label_2e6e3c:
    // 0x2e6e3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e6e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e6e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e44: 0xc04113c  jal         func_1044F0
    ctx->pc = 0x2E6E44u;
    SET_GPR_U32(ctx, 31, 0x2E6E4Cu);
    ctx->pc = 0x2E6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E44u;
    // 0x2e6e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F0u, 0x2E6E44u, 0x2E6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E4Cu;
label_2e6e4c:
    // 0x2e6e4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e6e50: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x2e6e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e6e54: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E6E54u;
    {
        const bool branch_taken_0x2e6e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E54u;
        // 0x2e6e58: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e54) {
            ctx->pc = 0x2E6E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6e30;
        }
    }
    ctx->pc = 0x2E6E5Cu;
label_2e6e5c:
    // 0x2e6e5c: 0xae921348  sw          $s2, 0x1348($s4)
    ctx->pc = 0x2e6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4936), GPR_U32(ctx, 18));
label_2e6e60:
    // 0x2e6e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e6e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6e64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e6e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e6e68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e6e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6e6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e6e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e6e70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e6e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6e74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e6e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E78u;
        // 0x2e6e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6E80u;
}
