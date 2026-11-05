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

// Function: sub_00308F68
// Address: 0x308f68 - 0x309378
void sub_00308F68_0x308f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308F68_0x308f68");
#endif

    switch (ctx->pc) {
        case 0x308fc4u: goto label_308fc4;
        case 0x309028u: goto label_309028;
        case 0x309060u: goto label_309060;
        case 0x309098u: goto label_309098;
        case 0x3090c4u: goto label_3090c4;
        case 0x309110u: goto label_309110;
        case 0x309134u: goto label_309134;
        case 0x30915cu: goto label_30915c;
        case 0x309164u: goto label_309164;
        case 0x30916cu: goto label_30916c;
        case 0x309178u: goto label_309178;
        case 0x309180u: goto label_309180;
        case 0x309190u: goto label_309190;
        case 0x3091c8u: goto label_3091c8;
        case 0x3091d4u: goto label_3091d4;
        case 0x3091e8u: goto label_3091e8;
        case 0x3091fcu: goto label_3091fc;
        case 0x309248u: goto label_309248;
        case 0x30925cu: goto label_30925c;
        case 0x309264u: goto label_309264;
        case 0x309274u: goto label_309274;
        case 0x3092a0u: goto label_3092a0;
        case 0x3092b0u: goto label_3092b0;
        case 0x3092bcu: goto label_3092bc;
        case 0x3092d4u: goto label_3092d4;
        case 0x3092e4u: goto label_3092e4;
        case 0x3092f8u: goto label_3092f8;
        case 0x309300u: goto label_309300;
        case 0x309308u: goto label_309308;
        case 0x309314u: goto label_309314;
        case 0x309324u: goto label_309324;
        case 0x309344u: goto label_309344;
        default: break;
    }

    ctx->pc = 0x308f68u;

    // 0x308f68: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x308f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x308f6c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x308f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x308f70: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x308f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x308f74: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x308f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x308f78: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x308f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x308f7c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x308f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x308f80: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x308f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x308f84: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x308f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x308f88: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x308f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x308f8c: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x308f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x308f90: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x308f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x308f94: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x308f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x308f98: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x308f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x308f9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x308f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x308fa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x308fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x308fa4: 0x144000e8  bnez        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x308FA4u;
    {
        const bool branch_taken_0x308fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FA4u;
        // 0x308fa8: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fa4) {
            ctx->pc = 0x309348u;
            goto label_309348;
        }
    }
    ctx->pc = 0x308FACu;
    // 0x308fac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x308facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x308fb0: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x308FB0u;
    {
        const bool branch_taken_0x308fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FB0u;
        // 0x308fb4: 0xdfb10108  ld          $s1, 0x108($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fb0) {
            ctx->pc = 0x30934Cu;
            goto label_30934c;
        }
    }
    ctx->pc = 0x308FB8u;
    // 0x308fb8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x308fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308fbc: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x308FBCu;
    SET_GPR_U32(ctx, 31, 0x308FC4u);
    ctx->pc = 0x308FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FBCu;
    // 0x308fc0: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x308FBCu, 0x308FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FC4u;
label_308fc4:
    // 0x308fc4: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x308fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x308fc8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x308fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x308fcc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x308fccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x308fd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x308fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x308fd4: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x308FD4u;
    {
        const bool branch_taken_0x308fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FD4u;
        // 0x308fd8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fd4) {
            ctx->pc = 0x309250u;
            goto label_309250;
        }
    }
    ctx->pc = 0x308FDCu;
    // 0x308fdc: 0x9043bba0  lbu         $v1, -0x4460($v0)
    ctx->pc = 0x308fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949792)));
    // 0x308fe0: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x308FE0u;
    {
        const bool branch_taken_0x308fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FE0u;
        // 0x308fe4: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fe0) {
            ctx->pc = 0x3090D4u;
            goto label_3090d4;
        }
    }
    ctx->pc = 0x308FE8u;
    // 0x308fe8: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x308fe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x308fec: 0x8c51f4b8  lw          $s1, -0xB48($v0)
    ctx->pc = 0x308fecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964408)));
    // 0x308ff0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x308ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x308ff4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x308ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x308ff8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x308ff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ffc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x308ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x309000: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x309000u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309004: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x309004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x309008: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x309008u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30900c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x30900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x309010: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x309010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x309014: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x309014u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x309018: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x309018u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30901c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x30901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x309020: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309020u;
    {
        const bool branch_taken_0x309020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309020u;
        // 0x309024: 0xafa200f8  sw          $v0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309020) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x309028u;
label_309028:
    // 0x309028: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30902c: 0x0  nop
    ctx->pc = 0x30902cu;
    // NOP
    // 0x309030: 0x0  nop
    ctx->pc = 0x309030u;
    // NOP
    // 0x309034: 0x0  nop
    ctx->pc = 0x309034u;
    // NOP
    // 0x309038: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x309038u;
    {
        const bool branch_taken_0x309038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309038u;
        // 0x30903c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309038) {
            ctx->pc = 0x309028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309028;
        }
    }
    ctx->pc = 0x309040u;
label_309040:
    // 0x309040: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x309040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x309044: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x309044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309048: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x309048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x30904c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30904cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x309050: 0x9230005c  lbu         $s0, 0x5C($s1)
    ctx->pc = 0x309050u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x309054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309054u;
    {
        const bool branch_taken_0x309054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309054u;
        // 0x309058: 0x8e250064  lw          $a1, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309054) {
            ctx->pc = 0x309078u;
            goto label_309078;
        }
    }
    ctx->pc = 0x30905Cu;
    // 0x30905c: 0x0  nop
    ctx->pc = 0x30905cu;
    // NOP
label_309060:
    // 0x309060: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x309060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x309064: 0x0  nop
    ctx->pc = 0x309064u;
    // NOP
    // 0x309068: 0x0  nop
    ctx->pc = 0x309068u;
    // NOP
    // 0x30906c: 0x0  nop
    ctx->pc = 0x30906cu;
    // NOP
    // 0x309070: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x309070u;
    {
        const bool branch_taken_0x309070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309070u;
        // 0x309074: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309070) {
            ctx->pc = 0x309060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309060;
        }
    }
    ctx->pc = 0x309078u;
label_309078:
    // 0x309078: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x309078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x30907c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x30907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x309080: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x309080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309088: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x309088u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x30908c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30908cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309090: 0xc0dd4e8  jal         func_3753A0
    ctx->pc = 0x309090u;
    SET_GPR_U32(ctx, 31, 0x309098u);
    ctx->pc = 0x309094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309090u;
    // 0x309094: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3753A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3753A0u, 0x309090u, 0x309098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309098u;
label_309098:
    // 0x309098: 0x9222005d  lbu         $v0, 0x5D($s1)
    ctx->pc = 0x309098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 93)));
    // 0x30909c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090a0: 0x8e2b0060  lw          $t3, 0x60($s1)
    ctx->pc = 0x3090a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3090a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3090a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3090a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3090ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3090acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3090b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3090b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090bc: 0xc0dd2de  jal         func_374B78
    ctx->pc = 0x3090BCu;
    SET_GPR_U32(ctx, 31, 0x3090C4u);
    ctx->pc = 0x3090C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3090BCu;
    // 0x3090c0: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B78u, 0x3090BCu, 0x3090C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3090C4u;
label_3090c4:
    // 0x3090c4: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x3090c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3090c8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3090c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3090cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3090CCu;
    {
        const bool branch_taken_0x3090cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090CCu;
        // 0x3090d0: 0xafa300e8  sw          $v1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090cc) {
            ctx->pc = 0x3090F8u;
            goto label_3090f8;
        }
    }
    ctx->pc = 0x3090D4u;
label_3090d4:
    // 0x3090d4: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x3090d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3090d8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3090d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3090dc: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x3090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3090e0: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x3090e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3090e4: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3090e8: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x3090e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3090ec: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x3090ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x3090f0: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x3090f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x3090f4: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x3090f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_3090f8:
    // 0x3090f8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3090f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3090fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3090fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309100: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x309100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309104: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x309104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x309108: 0xc0c49c6  jal         func_312718
    ctx->pc = 0x309108u;
    SET_GPR_U32(ctx, 31, 0x309110u);
    ctx->pc = 0x30910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309108u;
    // 0x30910c: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312718u, 0x309108u, 0x309110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309110u;
label_309110:
    // 0x309110: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x309110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x309114: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x309114u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309118: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x309118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x30911c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x30911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x309120: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x309120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x309124: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x309124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x309128: 0x2464f910  addiu       $a0, $v1, -0x6F0
    ctx->pc = 0x309128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x30912c: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x30912Cu;
    SET_GPR_U32(ctx, 31, 0x309134u);
    ctx->pc = 0x309130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30912Cu;
    // 0x309130: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x30912Cu, 0x309134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309134u;
label_309134:
    // 0x309134: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x309134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x309138: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x309138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30913c: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x30913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309140: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x309140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309144: 0xc6620038  lwc1        $f2, 0x38($s3)
    ctx->pc = 0x309144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309148: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x309148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30914c: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x30914cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x309150: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x309150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x309154: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x309154u;
    SET_GPR_U32(ctx, 31, 0x30915Cu);
    ctx->pc = 0x309158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309154u;
    // 0x309158: 0xe6e20004  swc1        $f2, 0x4($s7) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x309154u, 0x30915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30915Cu;
label_30915c:
    // 0x30915c: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x30915Cu;
    SET_GPR_U32(ctx, 31, 0x309164u);
    ctx->pc = 0x309160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30915Cu;
    // 0x309160: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x30915Cu, 0x309164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309164u;
label_309164:
    // 0x309164: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x309164u;
    SET_GPR_U32(ctx, 31, 0x30916Cu);
    ctx->pc = 0x309168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309164u;
    // 0x309168: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x309164u, 0x30916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30916Cu;
label_30916c:
    // 0x30916c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309170: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x309170u;
    SET_GPR_U32(ctx, 31, 0x309178u);
    ctx->pc = 0x309174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309170u;
    // 0x309174: 0x8ed00004  lw          $s0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x309170u, 0x309178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309178u;
label_309178:
    // 0x309178: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x309178u;
    SET_GPR_U32(ctx, 31, 0x309180u);
    ctx->pc = 0x30917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309178u;
    // 0x30917c: 0x8fa400f4  lw          $a0, 0xF4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x309178u, 0x309180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309180u;
label_309180:
    // 0x309180: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x309180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309184: 0xc66d002c  lwc1        $f13, 0x2C($s3)
    ctx->pc = 0x309184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x309188: 0xc0ddd54  jal         func_377550
    ctx->pc = 0x309188u;
    SET_GPR_U32(ctx, 31, 0x309190u);
    ctx->pc = 0x30918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309188u;
    // 0x30918c: 0xc66e0030  lwc1        $f14, 0x30($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x377550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377550u, 0x309188u, 0x309190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309190u;
label_309190:
    // 0x309190: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x309190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309194: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x309194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x309198: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x309198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x30919c: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x30919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3091a0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x3091a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3091a4: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x3091a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3091a8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x3091a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3091ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3091acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3091b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3091B0u;
    {
        const bool branch_taken_0x3091b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091B0u;
        // 0x3091b4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091b0) {
            ctx->pc = 0x30922Cu;
            goto label_30922c;
        }
    }
    ctx->pc = 0x3091B8u;
    // 0x3091b8: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x3091b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3091bc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3091bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091c0: 0x8fb000f0  lw          $s0, 0xF0($sp)
    ctx->pc = 0x3091c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3091c4: 0x0  nop
    ctx->pc = 0x3091c4u;
    // NOP
label_3091c8:
    // 0x3091c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3091c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3091cc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3091CCu;
    SET_GPR_U32(ctx, 31, 0x3091D4u);
    ctx->pc = 0x3091D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3091CCu;
    // 0x3091d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3091CCu, 0x3091D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091D4u;
label_3091d4:
    // 0x3091d4: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x3091d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3091d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3091dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091e0: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x3091E0u;
    SET_GPR_U32(ctx, 31, 0x3091E8u);
    ctx->pc = 0x3091E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3091E0u;
    // 0x3091e4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x3091E0u, 0x3091E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091E8u;
label_3091e8:
    // 0x3091e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3091e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3091ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3091f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091f4: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x3091F4u;
    SET_GPR_U32(ctx, 31, 0x3091FCu);
    ctx->pc = 0x3091F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3091F4u;
    // 0x3091f8: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x3091F4u, 0x3091FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091FCu;
label_3091fc:
    // 0x3091fc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3091fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x309200: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x309200u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x309204: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x309204u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x309208: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x309208u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x30920c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x30920cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x309210: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x309210u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x309214: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x309214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x309218: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x309218u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x30921c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x30921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x309220: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x309220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x309224: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x309224u;
    {
        const bool branch_taken_0x309224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309224u;
        // 0x309228: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309224) {
            ctx->pc = 0x3091C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3091c8;
        }
    }
    ctx->pc = 0x30922Cu;
label_30922c:
    // 0x30922c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x309230: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x309230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x309234: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x309238: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x309238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x30923c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x30923cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x309240: 0xc0df124  jal         func_37C490
    ctx->pc = 0x309240u;
    SET_GPR_U32(ctx, 31, 0x309248u);
    ctx->pc = 0x309244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309240u;
    // 0x309244: 0x9067bb68  lbu         $a3, -0x4498($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294949736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C490u, 0x309240u, 0x309248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309248u;
label_309248:
    // 0x309248: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x309248u;
    {
        const bool branch_taken_0x309248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309248) {
            ctx->pc = 0x3092F0u;
            goto label_3092f0;
        }
    }
    ctx->pc = 0x309250u;
label_309250:
    // 0x309250: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x309250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309254: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x309254u;
    SET_GPR_U32(ctx, 31, 0x30925Cu);
    ctx->pc = 0x309258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309254u;
    // 0x309258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x309254u, 0x30925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30925Cu;
label_30925c:
    // 0x30925c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30925Cu;
    SET_GPR_U32(ctx, 31, 0x309264u);
    ctx->pc = 0x309260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30925Cu;
    // 0x309260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30925Cu, 0x309264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309264u;
label_309264:
    // 0x309264: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x309264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309268: 0xc66d002c  lwc1        $f13, 0x2C($s3)
    ctx->pc = 0x309268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30926c: 0xc0ddd54  jal         func_377550
    ctx->pc = 0x30926Cu;
    SET_GPR_U32(ctx, 31, 0x309274u);
    ctx->pc = 0x309270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30926Cu;
    // 0x309270: 0xc66e0030  lwc1        $f14, 0x30($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x377550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377550u, 0x30926Cu, 0x309274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309274u;
label_309274:
    // 0x309274: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x309274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x309278: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x309278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30927c: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x30927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309280: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x309280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x309284: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x309284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x309288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x309288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30928c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x30928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309290: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x309290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x309294: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x309294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309298: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x309298u;
    SET_GPR_U32(ctx, 31, 0x3092A0u);
    ctx->pc = 0x30929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309298u;
    // 0x30929c: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x309298u, 0x3092A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092A0u;
label_3092a0:
    // 0x3092a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3092A0u;
    {
        const bool branch_taken_0x3092a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3092a0) {
            ctx->pc = 0x3092A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3092A0u;
            // 0x3092a4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3092B4u;
            goto label_3092b4;
        }
    }
    ctx->pc = 0x3092A8u;
    // 0x3092a8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3092A8u;
    SET_GPR_U32(ctx, 31, 0x3092B0u);
    ctx->pc = 0x3092ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092A8u;
    // 0x3092ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3092A8u, 0x3092B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092B0u;
label_3092b0:
    // 0x3092b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3092b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3092b4:
    // 0x3092b4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3092B4u;
    SET_GPR_U32(ctx, 31, 0x3092BCu);
    ctx->pc = 0x3092B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092B4u;
    // 0x3092b8: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3092B4u, 0x3092BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092BCu;
label_3092bc:
    // 0x3092bc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3092bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3092c0: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x3092c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x3092c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3092c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3092c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092cc: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x3092CCu;
    SET_GPR_U32(ctx, 31, 0x3092D4u);
    ctx->pc = 0x3092D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092CCu;
    // 0x3092d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x3092CCu, 0x3092D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092D4u;
label_3092d4:
    // 0x3092d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3092d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3092d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092dc: 0xc0da416  jal         func_369058
    ctx->pc = 0x3092DCu;
    SET_GPR_U32(ctx, 31, 0x3092E4u);
    ctx->pc = 0x3092E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092DCu;
    // 0x3092e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369058u, 0x3092DCu, 0x3092E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092E4u;
label_3092e4:
    // 0x3092e4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x3092e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3092e8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3092e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3092ec: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3092ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_3092f0:
    // 0x3092f0: 0xc0dd198  jal         func_374660
    ctx->pc = 0x3092F0u;
    SET_GPR_U32(ctx, 31, 0x3092F8u);
    ctx->pc = 0x3092F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092F0u;
    // 0x3092f4: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374660u, 0x3092F0u, 0x3092F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092F8u;
label_3092f8:
    // 0x3092f8: 0xc0dd17e  jal         func_3745F8
    ctx->pc = 0x3092F8u;
    SET_GPR_U32(ctx, 31, 0x309300u);
    ctx->pc = 0x3092FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092F8u;
    // 0x3092fc: 0x8fa400e8  lw          $a0, 0xE8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3745F8u, 0x3092F8u, 0x309300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309300u;
label_309300:
    // 0x309300: 0xc0dd1a2  jal         func_374688
    ctx->pc = 0x309300u;
    SET_GPR_U32(ctx, 31, 0x309308u);
    ctx->pc = 0x309304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309300u;
    // 0x309304: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374688u, 0x309300u, 0x309308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309308u;
label_309308:
    // 0x309308: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x309308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x30930c: 0xc0c49a4  jal         func_312690
    ctx->pc = 0x30930Cu;
    SET_GPR_U32(ctx, 31, 0x309314u);
    ctx->pc = 0x309310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30930Cu;
    // 0x309310: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312690u, 0x30930Cu, 0x309314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309314u;
label_309314:
    // 0x309314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x309314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x309318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30931c: 0xc0da512  jal         func_369448
    ctx->pc = 0x30931Cu;
    SET_GPR_U32(ctx, 31, 0x309324u);
    ctx->pc = 0x309320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30931Cu;
    // 0x309320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369448u, 0x30931Cu, 0x309324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309324u;
label_309324:
    // 0x309324: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x309324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x309328: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x309328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x30932c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x309330: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x309330u;
    {
        const bool branch_taken_0x309330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309330u;
        // 0x309334: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309330) {
            ctx->pc = 0x309348u;
            goto label_309348;
        }
    }
    ctx->pc = 0x309338u;
    // 0x309338: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x309338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x30933c: 0xc0dc4f6  jal         func_3713D8
    ctx->pc = 0x30933Cu;
    SET_GPR_U32(ctx, 31, 0x309344u);
    ctx->pc = 0x309340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30933Cu;
    // 0x309340: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713D8u, 0x30933Cu, 0x309344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309344u;
label_309344:
    // 0x309344: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x309344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_309348:
    // 0x309348: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x309348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_30934c:
    // 0x30934c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x30934cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x309350: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x309350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x309354: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x309354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x309358: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x309358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x30935c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x30935cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x309360: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x309360u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x309364: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x309364u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x309368: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x309368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x30936c: 0x3e00008  jr          $ra
    ctx->pc = 0x30936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30936Cu;
        // 0x309370: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30936Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309374u;
    // 0x309374: 0x0  nop
    ctx->pc = 0x309374u;
    // NOP
    ctx->pc = 0x309378u;
}
