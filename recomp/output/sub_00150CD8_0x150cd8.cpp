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

// Function: sub_00150CD8
// Address: 0x150cd8 - 0x150ee0
void sub_00150CD8_0x150cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150CD8_0x150cd8");
#endif

    switch (ctx->pc) {
        case 0x150d10u: goto label_150d10;
        case 0x150d94u: goto label_150d94;
        case 0x150db0u: goto label_150db0;
        case 0x150dc4u: goto label_150dc4;
        case 0x150e00u: goto label_150e00;
        case 0x150e14u: goto label_150e14;
        case 0x150e24u: goto label_150e24;
        case 0x150ea4u: goto label_150ea4;
        case 0x150eacu: goto label_150eac;
        case 0x150ebcu: goto label_150ebc;
        default: break;
    }

    ctx->pc = 0x150cd8u;

    // 0x150cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x150cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150ce0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ce8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x150ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150cec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x150cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x150cf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x150cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x150cf4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x150cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x150cf8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150cf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150cfc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150d00: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150d08: 0xc053b06  jal         func_14EC18
    ctx->pc = 0x150D08u;
    SET_GPR_U32(ctx, 31, 0x150D10u);
    ctx->pc = 0x150D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D08u;
    // 0x150d0c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x150D08u, 0x150D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D10u;
label_150d10:
    // 0x150d10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x150d10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d14: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x150d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x150d18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x150D18u;
    {
        const bool branch_taken_0x150d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D18u;
        // 0x150d1c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d18) {
            ctx->pc = 0x150D34u;
            goto label_150d34;
        }
    }
    ctx->pc = 0x150D20u;
    // 0x150d20: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x150d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x150d24: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x150D24u;
    {
        const bool branch_taken_0x150d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D24u;
        // 0x150d28: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d24) {
            ctx->pc = 0x150E0Cu;
            goto label_150e0c;
        }
    }
    ctx->pc = 0x150D2Cu;
    // 0x150d2c: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x150D2Cu;
    {
        const bool branch_taken_0x150d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D2Cu;
        // 0x150d30: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d2c) {
            ctx->pc = 0x150E0Cu;
            goto label_150e0c;
        }
    }
    ctx->pc = 0x150D34u;
label_150d34:
    // 0x150d34: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x150d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x150d38: 0x24449a08  addiu       $a0, $v0, -0x65F8
    ctx->pc = 0x150d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150d3c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x150d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x150d44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x150d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d48: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x150d4c: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x150d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x150d50: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x150D50u;
    {
        const bool branch_taken_0x150d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150d50) {
            ctx->pc = 0x150E0Cu;
            goto label_150e0c;
        }
    }
    ctx->pc = 0x150D58u;
    // 0x150d58: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x150d5c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x150D5Cu;
    {
        const bool branch_taken_0x150d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150d5c) {
            ctx->pc = 0x150E0Cu;
            goto label_150e0c;
        }
    }
    ctx->pc = 0x150D64u;
    // 0x150d64: 0x8e420284  lw          $v0, 0x284($s2)
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 644)));
    // 0x150d68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150D68u;
    {
        const bool branch_taken_0x150d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D68u;
        // 0x150d6c: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d68) {
            ctx->pc = 0x150D88u;
            goto label_150d88;
        }
    }
    ctx->pc = 0x150D70u;
    // 0x150d70: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x150d74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x150D74u;
    {
        const bool branch_taken_0x150d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d74) {
            ctx->pc = 0x150D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150D74u;
            // 0x150d78: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150D8Cu;
            goto label_150d8c;
        }
    }
    ctx->pc = 0x150D7Cu;
    // 0x150d7c: 0x8c42107c  lw          $v0, 0x107C($v0)
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4220)));
    // 0x150d80: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x150D80u;
    {
        const bool branch_taken_0x150d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150d80) {
            ctx->pc = 0x150E0Cu;
            goto label_150e0c;
        }
    }
    ctx->pc = 0x150D88u;
label_150d88:
    // 0x150d88: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150d88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_150d8c:
    // 0x150d8c: 0xc053b06  jal         func_14EC18
    ctx->pc = 0x150D8Cu;
    SET_GPR_U32(ctx, 31, 0x150D94u);
    ctx->pc = 0x150D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D8Cu;
    // 0x150d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x150D8Cu, 0x150D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D94u;
label_150d94:
    // 0x150d94: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x150d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x150d98: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x150d98u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x150d9c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x150D9Cu;
    {
        const bool branch_taken_0x150d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D9Cu;
        // 0x150da0: 0x26829a08  addiu       $v0, $s4, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d9c) {
            ctx->pc = 0x150DD0u;
            goto label_150dd0;
        }
    }
    ctx->pc = 0x150DA4u;
    // 0x150da4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150da4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150da8: 0xc053b06  jal         func_14EC18
    ctx->pc = 0x150DA8u;
    SET_GPR_U32(ctx, 31, 0x150DB0u);
    ctx->pc = 0x150DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DA8u;
    // 0x150dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x150DA8u, 0x150DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DB0u;
label_150db0:
    // 0x150db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150db4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150DB4u;
    {
        const bool branch_taken_0x150db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x150db4) {
            ctx->pc = 0x150DC8u;
            goto label_150dc8;
        }
    }
    ctx->pc = 0x150DBCu;
    // 0x150dbc: 0xc044310  jal         func_110C40
    ctx->pc = 0x150DBCu;
    SET_GPR_U32(ctx, 31, 0x150DC4u);
    ctx->pc = 0x150DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DBCu;
    // 0x150dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C40u, 0x150DBCu, 0x150DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DC4u;
label_150dc4:
    // 0x150dc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150dc8:
    // 0x150dc8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x150DC8u;
    {
        const bool branch_taken_0x150dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DC8u;
        // 0x150dcc: 0x26829a08  addiu       $v0, $s4, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dc8) {
            ctx->pc = 0x150DF4u;
            goto label_150df4;
        }
    }
    ctx->pc = 0x150DD0u;
label_150dd0:
    // 0x150dd0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x150dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x150dd4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x150dd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150DD8u;
    {
        const bool branch_taken_0x150dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DD8u;
        // 0x150ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dd8) {
            ctx->pc = 0x150DF8u;
            goto label_150df8;
        }
    }
    ctx->pc = 0x150DE0u;
    // 0x150de0: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x150de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x150de4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150de8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x150de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x150dec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150DECu;
    {
        const bool branch_taken_0x150dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150dec) {
            ctx->pc = 0x150E0Cu;
            goto label_150e0c;
        }
    }
    ctx->pc = 0x150DF4u;
label_150df4:
    // 0x150df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150df8:
    // 0x150df8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x150DF8u;
    SET_GPR_U32(ctx, 31, 0x150E00u);
    ctx->pc = 0x150DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DF8u;
    // 0x150dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x150DF8u, 0x150E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E00u;
label_150e00:
    // 0x150e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e04: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x150E04u;
    {
        const bool branch_taken_0x150e04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e04) {
            ctx->pc = 0x150E1Cu;
            goto label_150e1c;
        }
    }
    ctx->pc = 0x150E0Cu;
label_150e0c:
    // 0x150e0c: 0xc05446c  jal         func_1511B0
    ctx->pc = 0x150E0Cu;
    SET_GPR_U32(ctx, 31, 0x150E14u);
    ctx->pc = 0x150E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E0Cu;
    // 0x150e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511B0u, 0x150E0Cu, 0x150E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E14u;
label_150e14:
    // 0x150e14: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x150E14u;
    {
        const bool branch_taken_0x150e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E14u;
        // 0x150e18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e14) {
            ctx->pc = 0x150EC0u;
            goto label_150ec0;
        }
    }
    ctx->pc = 0x150E1Cu;
label_150e1c:
    // 0x150e1c: 0xc04631a  jal         func_118C68
    ctx->pc = 0x150E1Cu;
    SET_GPR_U32(ctx, 31, 0x150E24u);
    ctx->pc = 0x150E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E1Cu;
    // 0x150e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C68u, 0x150E1Cu, 0x150E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E24u;
label_150e24:
    // 0x150e24: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x150e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x150e28: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x150e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x150e2c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x150e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x150e30: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x150e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x150e34: 0x68460017  ldl         $a2, 0x17($v0)
    ctx->pc = 0x150e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x150e38: 0x6c460010  ldr         $a2, 0x10($v0)
    ctx->pc = 0x150e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x150e3c: 0x6847001f  ldl         $a3, 0x1F($v0)
    ctx->pc = 0x150e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x150e40: 0x6c470018  ldr         $a3, 0x18($v0)
    ctx->pc = 0x150e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x150e44: 0xb20408e3  sdl         $a0, 0x8E3($s0)
    ctx->pc = 0x150e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e48: 0xb60408dc  sdr         $a0, 0x8DC($s0)
    ctx->pc = 0x150e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e4c: 0xb20508eb  sdl         $a1, 0x8EB($s0)
    ctx->pc = 0x150e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e50: 0xb60508e4  sdr         $a1, 0x8E4($s0)
    ctx->pc = 0x150e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e54: 0xb20608f3  sdl         $a2, 0x8F3($s0)
    ctx->pc = 0x150e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e58: 0xb60608ec  sdr         $a2, 0x8EC($s0)
    ctx->pc = 0x150e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e5c: 0xb20708fb  sdl         $a3, 0x8FB($s0)
    ctx->pc = 0x150e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e60: 0xb60708f4  sdr         $a3, 0x8F4($s0)
    ctx->pc = 0x150e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e64: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x150e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x150e68: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x150e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x150e6c: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x150e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x150e70: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x150e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x150e74: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x150e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x150e78: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x150e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x150e7c: 0xb2040903  sdl         $a0, 0x903($s0)
    ctx->pc = 0x150e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e80: 0xb60408fc  sdr         $a0, 0x8FC($s0)
    ctx->pc = 0x150e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e84: 0xb205090b  sdl         $a1, 0x90B($s0)
    ctx->pc = 0x150e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2315); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e88: 0xb6050904  sdr         $a1, 0x904($s0)
    ctx->pc = 0x150e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e8c: 0xb2060913  sdl         $a2, 0x913($s0)
    ctx->pc = 0x150e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2323); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e90: 0xb606090c  sdr         $a2, 0x90C($s0)
    ctx->pc = 0x150e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x150e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e9c: 0xc0543b8  jal         func_150EE0
    ctx->pc = 0x150E9Cu;
    SET_GPR_U32(ctx, 31, 0x150EA4u);
    ctx->pc = 0x150EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E9Cu;
    // 0x150ea0: 0xae030914  sw          $v1, 0x914($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150EE0u, 0x150E9Cu, 0x150EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EA4u;
label_150ea4:
    // 0x150ea4: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x150EA4u;
    SET_GPR_U32(ctx, 31, 0x150EACu);
    ctx->pc = 0x150EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EA4u;
    // 0x150ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x150EA4u, 0x150EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EACu;
label_150eac:
    // 0x150eac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x150eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x150eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150eb4: 0xc042136  jal         func_1084D8
    ctx->pc = 0x150EB4u;
    SET_GPR_U32(ctx, 31, 0x150EBCu);
    ctx->pc = 0x150EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150EB4u;
    // 0x150eb8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x150EB4u, 0x150EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EBCu;
label_150ebc:
    // 0x150ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150ec0:
    // 0x150ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x150ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x150ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150ec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x150ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150ecc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x150eccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150ed0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x150ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x150ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x150ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150ED4u;
        // 0x150ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150EDCu;
    // 0x150edc: 0x0  nop
    ctx->pc = 0x150edcu;
    // NOP
    ctx->pc = 0x150ee0u;
}
