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

// Function: sub_00179D80
// Address: 0x179d80 - 0x179e88
void sub_00179D80_0x179d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179D80_0x179d80");
#endif

    switch (ctx->pc) {
        case 0x179da8u: goto label_179da8;
        case 0x179de8u: goto label_179de8;
        case 0x179e38u: goto label_179e38;
        case 0x179e48u: goto label_179e48;
        default: break;
    }

    ctx->pc = 0x179d80u;

    // 0x179d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179d94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x179d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x179d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x179d9c: 0x26240534  addiu       $a0, $s1, 0x534
    ctx->pc = 0x179d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1332));
    // 0x179da0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179da4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_179da8:
    // 0x179da8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x179da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179dac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x179dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179db0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x179db4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x179db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179db8: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x179db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x179DBCu;
    {
        const bool branch_taken_0x179dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DBCu;
        // 0x179dc0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dbc) {
            ctx->pc = 0x179DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179da8;
        }
    }
    ctx->pc = 0x179DC4u;
    // 0x179dc4: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x179dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x179dc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x179dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dcc: 0xa2200584  sb          $zero, 0x584($s1)
    ctx->pc = 0x179dccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1412), (uint8_t)GPR_U32(ctx, 0));
    // 0x179dd0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x179DD0u;
    {
        const bool branch_taken_0x179dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD0u;
        // 0x179dd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dd0) {
            ctx->pc = 0x179E68u;
            goto label_179e68;
        }
    }
    ctx->pc = 0x179DD8u;
    // 0x179dd8: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x179dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x179ddc: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179de0: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x179de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179de4: 0x0  nop
    ctx->pc = 0x179de4u;
    // NOP
label_179de8:
    // 0x179de8: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x179dec: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x179decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x179df0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x179df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179df4: 0x10730014  beq         $v1, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x179DF4u;
    {
        const bool branch_taken_0x179df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x179DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DF4u;
        // 0x179df8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179df4) {
            ctx->pc = 0x179E48u;
            goto label_179e48;
        }
    }
    ctx->pc = 0x179DFCu;
    // 0x179dfc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x179dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x179e00: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x179e04: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x179E04u;
    {
        const bool branch_taken_0x179e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x179E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E04u;
        // 0x179e08: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e04) {
            ctx->pc = 0x179E48u;
            goto label_179e48;
        }
    }
    ctx->pc = 0x179E0Cu;
    // 0x179e0c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x179e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x179e10: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x179E10u;
    {
        const bool branch_taken_0x179e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x179E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E10u;
        // 0x179e14: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e10) {
            ctx->pc = 0x179E4Cu;
            goto label_179e4c;
        }
    }
    ctx->pc = 0x179E18u;
    // 0x179e18: 0x90a2001f  lbu         $v0, 0x1F($a1)
    ctx->pc = 0x179e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
    // 0x179e1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179E1Cu;
    {
        const bool branch_taken_0x179e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e1c) {
            ctx->pc = 0x179E4Cu;
            goto label_179e4c;
        }
    }
    ctx->pc = 0x179E24u;
    // 0x179e24: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x179e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x179e28: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x179E28u;
    {
        const bool branch_taken_0x179e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E28u;
        // 0x179e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e28) {
            ctx->pc = 0x179E40u;
            goto label_179e40;
        }
    }
    ctx->pc = 0x179E30u;
    // 0x179e30: 0xc05e3f6  jal         func_178FD8
    ctx->pc = 0x179E30u;
    SET_GPR_U32(ctx, 31, 0x179E38u);
    ctx->pc = 0x179E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E30u;
    // 0x179e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178FD8u, 0x179E30u, 0x179E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E38u;
label_179e38:
    // 0x179e38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179E38u;
    {
        const bool branch_taken_0x179e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E38u;
        // 0x179e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e38) {
            ctx->pc = 0x179E48u;
            goto label_179e48;
        }
    }
    ctx->pc = 0x179E40u;
label_179e40:
    // 0x179e40: 0xc05ed90  jal         func_17B640
    ctx->pc = 0x179E40u;
    SET_GPR_U32(ctx, 31, 0x179E48u);
    ctx->pc = 0x179E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E40u;
    // 0x179e44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B640u, 0x179E40u, 0x179E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E48u;
label_179e48:
    // 0x179e48: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x179e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_179e4c:
    // 0x179e4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x179e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179e50: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x179e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179e54: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x179E54u;
    {
        const bool branch_taken_0x179e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e54) {
            ctx->pc = 0x179E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E54u;
            // 0x179e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E6Cu;
            goto label_179e6c;
        }
    }
    ctx->pc = 0x179E5Cu;
    // 0x179e5c: 0x92220530  lbu         $v0, 0x530($s1)
    ctx->pc = 0x179e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x179e60: 0x1642ffe1  bne         $s2, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x179E60u;
    {
        const bool branch_taken_0x179e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x179E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E60u;
        // 0x179e64: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e60) {
            ctx->pc = 0x179DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179de8;
        }
    }
    ctx->pc = 0x179E68u;
label_179e68:
    // 0x179e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179e6c:
    // 0x179e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x179e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x179e70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x179e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179e74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x179e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179e78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x179e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x179e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179e80: 0x3e00008  jr          $ra
    ctx->pc = 0x179E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E80u;
        // 0x179e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E88u;
}
