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

// Function: sub_00120D40
// Address: 0x120d40 - 0x120e90
void sub_00120D40_0x120d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120D40_0x120d40");
#endif

    switch (ctx->pc) {
        case 0x120d98u: goto label_120d98;
        case 0x120db0u: goto label_120db0;
        case 0x120db8u: goto label_120db8;
        case 0x120e2cu: goto label_120e2c;
        case 0x120e3cu: goto label_120e3c;
        case 0x120e5cu: goto label_120e5c;
        case 0x120e6cu: goto label_120e6c;
        default: break;
    }

    ctx->pc = 0x120d40u;

    // 0x120d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120d4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x120d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x120d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x120d54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x120d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120d5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x120d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x120d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x120d64: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x120D64u;
    {
        const bool branch_taken_0x120d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D64u;
        // 0x120d68: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d64) {
            ctx->pc = 0x120DB8u;
            goto label_120db8;
        }
    }
    ctx->pc = 0x120D6Cu;
    // 0x120d6c: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x120d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120d70: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x120D70u;
    {
        const bool branch_taken_0x120d70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D70u;
        // 0x120d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d70) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120D78u;
    // 0x120d78: 0x5220003e  beql        $s1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x120D78u;
    {
        const bool branch_taken_0x120d78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d78) {
            ctx->pc = 0x120D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120D78u;
            // 0x120d7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120E74u;
            goto label_120e74;
        }
    }
    ctx->pc = 0x120D80u;
    // 0x120d80: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x120d80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x120d84: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x120D84u;
    {
        const bool branch_taken_0x120d84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D84u;
        // 0x120d88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d84) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120D8Cu;
    // 0x120d8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d90: 0xc04823e  jal         func_1208F8
    ctx->pc = 0x120D90u;
    SET_GPR_U32(ctx, 31, 0x120D98u);
    ctx->pc = 0x120D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D90u;
    // 0x120d94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1208F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1208F8u, 0x120D90u, 0x120D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D98u;
label_120d98:
    // 0x120d98: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x120D98u;
    {
        const bool branch_taken_0x120d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D98u;
        // 0x120d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d98) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120DA0u;
    // 0x120da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120da4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x120da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120da8: 0xc0482f2  jal         func_120BC8
    ctx->pc = 0x120DA8u;
    SET_GPR_U32(ctx, 31, 0x120DB0u);
    ctx->pc = 0x120DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DA8u;
    // 0x120dac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120BC8u, 0x120DA8u, 0x120DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DB0u;
label_120db0:
    // 0x120db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120DB0u;
    {
        const bool branch_taken_0x120db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DB0u;
        // 0x120db4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120db0) {
            ctx->pc = 0x120DC0u;
            goto label_120dc0;
        }
    }
    ctx->pc = 0x120DB8u;
label_120db8:
    // 0x120db8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x120DB8u;
    {
        const bool branch_taken_0x120db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DB8u;
        // 0x120dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120db8) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120DC0u;
label_120dc0:
    // 0x120dc0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x120dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x120dc4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x120dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x120dc8: 0x24440108  addiu       $a0, $v0, 0x108
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x120dcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x120dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x120dd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x120dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120dd4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x120DD4u;
    {
        const bool branch_taken_0x120dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD4u;
        // 0x120dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dd4) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120DDCu;
    // 0x120ddc: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x120ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x120de0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x120de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x120de4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x120de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x120de8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x120de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120dec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120df0: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x120df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x120df4: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x120DF4u;
    {
        const bool branch_taken_0x120df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DF4u;
        // 0x120df8: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120df4) {
            ctx->pc = 0x120DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120db8;
        }
    }
    ctx->pc = 0x120DFCu;
    // 0x120dfc: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x120dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x120e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120e04: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x120e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x120e08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120E08u;
    {
        const bool branch_taken_0x120e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E08u;
        // 0x120e0c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e08) {
            ctx->pc = 0x120E18u;
            goto label_120e18;
        }
    }
    ctx->pc = 0x120E10u;
    // 0x120e10: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x120E10u;
    {
        const bool branch_taken_0x120e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E10u;
        // 0x120e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e10) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120E18u;
label_120e18:
    // 0x120e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x120e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x120e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e24: 0xc0481fa  jal         func_1207E8
    ctx->pc = 0x120E24u;
    SET_GPR_U32(ctx, 31, 0x120E2Cu);
    ctx->pc = 0x120E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E24u;
    // 0x120e28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1207E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1207E8u, 0x120E24u, 0x120E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E2Cu;
label_120e2c:
    // 0x120e2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x120e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x120e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e34: 0xc0481c6  jal         func_120718
    ctx->pc = 0x120E34u;
    SET_GPR_U32(ctx, 31, 0x120E3Cu);
    ctx->pc = 0x120E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E34u;
    // 0x120e38: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120718u, 0x120E34u, 0x120E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E3Cu;
label_120e3c:
    // 0x120e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x120e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x120e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120e44: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120E44u;
    {
        const bool branch_taken_0x120e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x120E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E44u;
        // 0x120e48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e44) {
            ctx->pc = 0x120E64u;
            goto label_120e64;
        }
    }
    ctx->pc = 0x120E4Cu;
    // 0x120e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x120e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e50: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x120e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e54: 0xc0481fa  jal         func_1207E8
    ctx->pc = 0x120E54u;
    SET_GPR_U32(ctx, 31, 0x120E5Cu);
    ctx->pc = 0x120E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E54u;
    // 0x120e58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1207E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1207E8u, 0x120E54u, 0x120E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E5Cu;
label_120e5c:
    // 0x120e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x120E5Cu;
    {
        const bool branch_taken_0x120e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E5Cu;
        // 0x120e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e5c) {
            ctx->pc = 0x120E70u;
            goto label_120e70;
        }
    }
    ctx->pc = 0x120E64u;
label_120e64:
    // 0x120e64: 0xc0481e2  jal         func_120788
    ctx->pc = 0x120E64u;
    SET_GPR_U32(ctx, 31, 0x120E6Cu);
    ctx->pc = 0x120E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120E64u;
    // 0x120e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120788u, 0x120E64u, 0x120E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E6Cu;
label_120e6c:
    // 0x120e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120e70:
    // 0x120e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120e74:
    // 0x120e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x120e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x120e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120e80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x120e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120e84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x120e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120e88: 0x3e00008  jr          $ra
    ctx->pc = 0x120E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E88u;
        // 0x120e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120E90u;
}
