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

// Function: sub_00322D68
// Address: 0x322d68 - 0x322e58
void sub_00322D68_0x322d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322D68_0x322d68");
#endif

    switch (ctx->pc) {
        case 0x322dbcu: goto label_322dbc;
        case 0x322dd8u: goto label_322dd8;
        case 0x322de8u: goto label_322de8;
        case 0x322e14u: goto label_322e14;
        default: break;
    }

    ctx->pc = 0x322d68u;

    // 0x322d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322d6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x322d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322d70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x322d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x322d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322d78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x322d78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322d80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x322d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x322d84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x322d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x322d88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x322d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x322d8c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x322d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x322d90: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x322d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x322d94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322d98: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x322d98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
    // 0x322d9c: 0x8ea50038  lw          $a1, 0x38($s5)
    ctx->pc = 0x322d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x322da0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x322da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x322da4: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x322da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x322da8: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x322da8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x322dac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x322DACu;
    {
        const bool branch_taken_0x322dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DACu;
        // 0x322db0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dac) {
            ctx->pc = 0x322DC4u;
            goto label_322dc4;
        }
    }
    ctx->pc = 0x322DB4u;
    // 0x322db4: 0xc0c8a96  jal         func_322A58
    ctx->pc = 0x322DB4u;
    SET_GPR_U32(ctx, 31, 0x322DBCu);
    ctx->pc = 0x322A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A58u, 0x322DB4u, 0x322DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322DBCu;
label_322dbc:
    // 0x322dbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x322DBCu;
    {
        const bool branch_taken_0x322dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DBCu;
        // 0x322dc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dbc) {
            ctx->pc = 0x322E30u;
            goto label_322e30;
        }
    }
    ctx->pc = 0x322DC4u;
label_322dc4:
    // 0x322dc4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x322dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322dc8: 0x2457d768  addiu       $s7, $v0, -0x2898
    ctx->pc = 0x322dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956904));
    // 0x322dcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x322dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322dd0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x322dd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322dd4: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x322dd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_322dd8:
    // 0x322dd8: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x322dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ddc: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x322ddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x322de0: 0x568004  sllv        $s0, $s6, $v0
    ctx->pc = 0x322de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 2) & 0x1F));
    // 0x322de4: 0x0  nop
    ctx->pc = 0x322de4u;
    // NOP
label_322de8:
    // 0x322de8: 0x2901024  and         $v0, $s4, $s0
    ctx->pc = 0x322de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
    // 0x322dec: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x322DECu;
    {
        const bool branch_taken_0x322dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322dec) {
            ctx->pc = 0x322DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322DECu;
            // 0x322df0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322E18u;
            goto label_322e18;
        }
    }
    ctx->pc = 0x322DF4u;
    // 0x322df4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x322df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x322df8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x322df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x322dfc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x322DFCu;
    {
        const bool branch_taken_0x322dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322dfc) {
            ctx->pc = 0x322E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322DFCu;
            // 0x322e00: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322E18u;
            goto label_322e18;
        }
    }
    ctx->pc = 0x322E04u;
    // 0x322e04: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x322e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x322e08: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x322e08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x322e0c: 0xc0c8a96  jal         func_322A58
    ctx->pc = 0x322E0Cu;
    SET_GPR_U32(ctx, 31, 0x322E14u);
    ctx->pc = 0x322E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E0Cu;
    // 0x322e10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A58u, 0x322E0Cu, 0x322E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E14u;
label_322e14:
    // 0x322e14: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x322e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_322e18:
    // 0x322e18: 0x661fff3  bgez        $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x322E18u;
    {
        const bool branch_taken_0x322e18 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x322E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E18u;
        // 0x322e1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e18) {
            ctx->pc = 0x322DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322de8;
        }
    }
    ctx->pc = 0x322E20u;
    // 0x322e20: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x322e20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x322e24: 0x5640ffec  bnel        $s2, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x322E24u;
    {
        const bool branch_taken_0x322e24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x322e24) {
            ctx->pc = 0x322E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322E24u;
            // 0x322e28: 0x9642000c  lhu         $v0, 0xC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322dd8;
        }
    }
    ctx->pc = 0x322E2Cu;
    // 0x322e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322e30:
    // 0x322e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322e34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322e38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x322e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x322e3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x322e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322e40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x322e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x322e44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x322e44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322e48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x322e48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x322e4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x322e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322e50: 0x3e00008  jr          $ra
    ctx->pc = 0x322E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E50u;
        // 0x322e54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322E58u;
}
