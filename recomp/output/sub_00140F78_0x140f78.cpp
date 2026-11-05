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

// Function: sub_00140F78
// Address: 0x140f78 - 0x141198
void sub_00140F78_0x140f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140F78_0x140f78");
#endif

    switch (ctx->pc) {
        case 0x140fecu: goto label_140fec;
        case 0x141048u: goto label_141048;
        case 0x14105cu: goto label_14105c;
        case 0x1410c0u: goto label_1410c0;
        default: break;
    }

    ctx->pc = 0x140f78u;

    // 0x140f78: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x140f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x140f7c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x140f80: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x140f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x140f84: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x140f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x140f88: 0x24509a08  addiu       $s0, $v0, -0x65F8
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x140f8c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x140f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x140f90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x140f90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f94: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x140f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x140f98: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x140f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x140f9c: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x140f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
    // 0x140fa0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x140fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x140fa4: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x140fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
    // 0x140fa8: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x140fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x140fac: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x140facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
    // 0x140fb0: 0x9283046c  lbu         $v1, 0x46C($s4)
    ctx->pc = 0x140fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1132)));
    // 0x140fb4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x140fb8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x140fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x140fbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x140fc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140fcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x140fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x140fd0: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x140fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x140fd4: 0x8ec500b0  lw          $a1, 0xB0($s6)
    ctx->pc = 0x140fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x140fd8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x140FD8u;
    {
        const bool branch_taken_0x140fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FD8u;
        // 0x140fdc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fd8) {
            ctx->pc = 0x141028u;
            goto label_141028;
        }
    }
    ctx->pc = 0x140FE0u;
    // 0x140fe0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x140fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fe4: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x140FE4u;
    SET_GPR_U32(ctx, 31, 0x140FECu);
    ctx->pc = 0x140FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140FE4u;
    // 0x140fe8: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x140FE4u, 0x140FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140FECu;
label_140fec:
    // 0x140fec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x140fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140ff0: 0x12a0005c  beqz        $s5, . + 4 + (0x5C << 2)
    ctx->pc = 0x140FF0u;
    {
        const bool branch_taken_0x140ff0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FF0u;
        // 0x140ff4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ff0) {
            ctx->pc = 0x141164u;
            goto label_141164;
        }
    }
    ctx->pc = 0x140FF8u;
    // 0x140ff8: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x140ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x140ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141000: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x141004: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x141008: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141008u;
    {
        const bool branch_taken_0x141008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141008) {
            ctx->pc = 0x14100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141008u;
            // 0x14100c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141018u;
            goto label_141018;
        }
    }
    ctx->pc = 0x141010u;
    // 0x141010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141010u;
    {
        const bool branch_taken_0x141010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141010u;
        // 0x141014: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141010) {
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x141018u;
label_141018:
    // 0x141018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14101c: 0x247e0070  addiu       $fp, $v1, 0x70
    ctx->pc = 0x14101cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_141020:
    // 0x141020: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x141020u;
    {
        const bool branch_taken_0x141020 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x141024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141020u;
        // 0x141024: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141020) {
            ctx->pc = 0x141030u;
            goto label_141030;
        }
    }
    ctx->pc = 0x141028u;
label_141028:
    // 0x141028: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x141028u;
    {
        const bool branch_taken_0x141028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141028u;
        // 0x14102c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141028) {
            ctx->pc = 0x141164u;
            goto label_141164;
        }
    }
    ctx->pc = 0x141030u;
label_141030:
    // 0x141030: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x141030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x141034: 0x2f5102b  sltu        $v0, $s7, $s5
    ctx->pc = 0x141034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x141038: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x141038u;
    {
        const bool branch_taken_0x141038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141038u;
        // 0x14103c: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141038) {
            ctx->pc = 0x141158u;
            goto label_141158;
        }
    }
    ctx->pc = 0x141040u;
    // 0x141040: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x141040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x141044: 0x0  nop
    ctx->pc = 0x141044u;
    // NOP
label_141048:
    // 0x141048: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x141048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14104c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x14104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x141050: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x141050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141054: 0xc044234  jal         func_1108D0
    ctx->pc = 0x141054u;
    SET_GPR_U32(ctx, 31, 0x14105Cu);
    ctx->pc = 0x141058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141054u;
    // 0x141058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x141054u, 0x14105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14105Cu;
label_14105c:
    // 0x14105c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14105cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141060: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x141060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x141064: 0x12020037  beq         $s0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x141064u;
    {
        const bool branch_taken_0x141064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x141068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141064u;
        // 0x141068: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141064) {
            ctx->pc = 0x141144u;
            goto label_141144;
        }
    }
    ctx->pc = 0x14106Cu;
    // 0x14106c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x141070: 0x24639c14  addiu       $v1, $v1, -0x63EC
    ctx->pc = 0x141070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941716));
    // 0x141074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141078: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14107c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x14107Cu;
    {
        const bool branch_taken_0x14107c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14107Cu;
        // 0x141080: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14107c) {
            ctx->pc = 0x141144u;
            goto label_141144;
        }
    }
    ctx->pc = 0x141084u;
    // 0x141084: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x141084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x141088: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x141088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x14108c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14108cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141094: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141098: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141098u;
    {
        const bool branch_taken_0x141098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141098) {
            ctx->pc = 0x14109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141098u;
            // 0x14109c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1410A8u;
            goto label_1410a8;
        }
    }
    ctx->pc = 0x1410A0u;
    // 0x1410a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1410A0u;
    {
        const bool branch_taken_0x1410a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410A0u;
        // 0x1410a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410a0) {
            ctx->pc = 0x1410B0u;
            goto label_1410b0;
        }
    }
    ctx->pc = 0x1410A8u;
label_1410a8:
    // 0x1410a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1410ac: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1410acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1410b0:
    // 0x1410b0: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1410B0u;
    {
        const bool branch_taken_0x1410b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410B0u;
        // 0x1410b4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410b0) {
            ctx->pc = 0x141144u;
            goto label_141144;
        }
    }
    ctx->pc = 0x1410B8u;
    // 0x1410b8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1410B8u;
    SET_GPR_U32(ctx, 31, 0x1410C0u);
    ctx->pc = 0x1410BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1410B8u;
    // 0x1410bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1410B8u, 0x1410C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1410C0u;
label_1410c0:
    // 0x1410c0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1410c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1410c4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1410c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1410c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1410c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1410cc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1410ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1410d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1410d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1410d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1410d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1410d8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1410d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1410dc: 0xc6800530  lwc1        $f0, 0x530($s4)
    ctx->pc = 0x1410dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1410e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1410e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1410e4: 0x0  nop
    ctx->pc = 0x1410e4u;
    // NOP
    // 0x1410e8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1410E8u;
    {
        const bool branch_taken_0x1410e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1410ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410E8u;
        // 0x1410ec: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410e8) {
            ctx->pc = 0x141148u;
            goto label_141148;
        }
    }
    ctx->pc = 0x1410F0u;
    // 0x1410f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1410f4: 0x3a420009  xori        $v0, $s2, 0x9
    ctx->pc = 0x1410f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)9);
    // 0x1410f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1410f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410fc: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1410fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x141100: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x141100u;
    {
        const bool branch_taken_0x141100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141100) {
            ctx->pc = 0x141104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141100u;
            // 0x141104: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141140u;
            goto label_141140;
        }
    }
    ctx->pc = 0x141108u;
    // 0x141108: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x141108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14110c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14110Cu;
    {
        const bool branch_taken_0x14110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14110c) {
            ctx->pc = 0x14111Cu;
            goto label_14111c;
        }
    }
    ctx->pc = 0x141114u;
    // 0x141114: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141114u;
    {
        const bool branch_taken_0x141114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141114u;
        // 0x141118: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141114) {
            ctx->pc = 0x141134u;
            goto label_141134;
        }
    }
    ctx->pc = 0x14111Cu;
label_14111c:
    // 0x14111c: 0x16120005  bne         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14111Cu;
    {
        const bool branch_taken_0x14111c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x14111c) {
            ctx->pc = 0x141134u;
            goto label_141134;
        }
    }
    ctx->pc = 0x141124u;
    // 0x141124: 0x8e820520  lw          $v0, 0x520($s4)
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1312)));
    // 0x141128: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x141128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14112c: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x14112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x141130: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x141130u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_141134:
    // 0x141134: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x141134u;
    {
        const bool branch_taken_0x141134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141134u;
        // 0x141138: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141134) {
            ctx->pc = 0x141148u;
            goto label_141148;
        }
    }
    ctx->pc = 0x14113Cu;
    // 0x14113c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14113cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_141140:
    // 0x141140: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x141140u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141144:
    // 0x141144: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_141148:
    // 0x141148: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x141148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14114c: 0x275182b  sltu        $v1, $s3, $s5
    ctx->pc = 0x14114cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x141150: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x141150u;
    {
        const bool branch_taken_0x141150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141150u;
        // 0x141154: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141150) {
            ctx->pc = 0x141048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141048;
        }
    }
    ctx->pc = 0x141158u;
label_141158:
    // 0x141158: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x141158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14115c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14115cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141160: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x141160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_141164:
    // 0x141164: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x141164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x141168: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x141168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14116c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x14116cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x141170: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x141170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x141174: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x141174u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x141178: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x141178u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14117c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x14117cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x141180: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x141180u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x141184: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x141184u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x141188: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x141188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x14118c: 0x3e00008  jr          $ra
    ctx->pc = 0x14118Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14118Cu;
        // 0x141190: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14118Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141194u;
    // 0x141194: 0x0  nop
    ctx->pc = 0x141194u;
    // NOP
    ctx->pc = 0x141198u;
}
