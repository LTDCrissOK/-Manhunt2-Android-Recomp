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

// Function: sub_001ED4B8
// Address: 0x1ed4b8 - 0x1edca8
void sub_001ED4B8_0x1ed4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED4B8_0x1ed4b8");
#endif

    switch (ctx->pc) {
        case 0x1ed65cu: goto label_1ed65c;
        case 0x1ed664u: goto label_1ed664;
        default: break;
    }

    ctx->pc = 0x1ed4b8u;

    // 0x1ed4b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed4bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ed4bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed4c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ed4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ed4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ed4d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ed4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ed4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ed4d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ed4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ed4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ed4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ed4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ed4e8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1ed4e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ed4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ed4f0: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1ed4f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ed4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ed4f8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1ed4f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ed4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ed500: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed504: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ed504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed508: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x1ed508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ed50c: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x1ed50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ed510: 0x10490008  beq         $v0, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED510u;
    {
        const bool branch_taken_0x1ed510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x1ED514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED510u;
        // 0x1ed514: 0x90e30009  lbu         $v1, 0x9($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed510) {
            ctx->pc = 0x1ED534u;
            goto label_1ed534;
        }
    }
    ctx->pc = 0x1ED518u;
    // 0x1ed518: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x1ed518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ed51c: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED51Cu;
    {
        const bool branch_taken_0x1ed51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1ED520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED51Cu;
        // 0x1ed520: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed51c) {
            ctx->pc = 0x1ED534u;
            goto label_1ed534;
        }
    }
    ctx->pc = 0x1ED524u;
    // 0x1ed524: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED524u;
    {
        const bool branch_taken_0x1ed524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1ED528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED524u;
        // 0x1ed528: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed524) {
            ctx->pc = 0x1ED534u;
            goto label_1ed534;
        }
    }
    ctx->pc = 0x1ED52Cu;
    // 0x1ed52c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED52Cu;
    {
        const bool branch_taken_0x1ed52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ed52c) {
            ctx->pc = 0x1ED544u;
            goto label_1ed544;
        }
    }
    ctx->pc = 0x1ED534u;
label_1ed534:
    // 0x1ed534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ed538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed53c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ED53Cu;
    {
        const bool branch_taken_0x1ed53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED53Cu;
        // 0x1ed540: 0x8cf30004  lw          $s3, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed53c) {
            ctx->pc = 0x1ED570u;
            goto label_1ed570;
        }
    }
    ctx->pc = 0x1ED544u;
label_1ed544:
    // 0x1ed544: 0x50690008  beql        $v1, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED544u;
    {
        const bool branch_taken_0x1ed544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x1ed544) {
            ctx->pc = 0x1ED548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED544u;
            // 0x1ed548: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED568u;
            goto label_1ed568;
        }
    }
    ctx->pc = 0x1ED54Cu;
    // 0x1ed54c: 0x50680006  beql        $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED54Cu;
    {
        const bool branch_taken_0x1ed54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ed54c) {
            ctx->pc = 0x1ED550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED54Cu;
            // 0x1ed550: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED568u;
            goto label_1ed568;
        }
    }
    ctx->pc = 0x1ED554u;
    // 0x1ed554: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED554u;
    {
        const bool branch_taken_0x1ed554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ed554) {
            ctx->pc = 0x1ED558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED554u;
            // 0x1ed558: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED568u;
            goto label_1ed568;
        }
    }
    ctx->pc = 0x1ED55Cu;
    // 0x1ed55c: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED55Cu;
    {
        const bool branch_taken_0x1ed55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ed55c) {
            ctx->pc = 0x1ED560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED55Cu;
            // 0x1ed560: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED584u;
            goto label_1ed584;
        }
    }
    ctx->pc = 0x1ED564u;
    // 0x1ed564: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1ed568:
    // 0x1ed568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ed568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed56c: 0x8cf30000  lw          $s3, 0x0($a3)
    ctx->pc = 0x1ed56cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ed570:
    // 0x1ed570: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1ed570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1ed574: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ed574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ed578: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ed578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ed57c: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x1ed57cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1ed580: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1ed580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_1ed584:
    // 0x1ed584: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1ed584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1ed588: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x1ed588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x1ed58c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1ED58Cu;
    {
        const bool branch_taken_0x1ed58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED58Cu;
        // 0x1ed590: 0x8cd40234  lw          $s4, 0x234($a2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed58c) {
            ctx->pc = 0x1ED6B8u;
            goto label_1ed6b8;
        }
    }
    ctx->pc = 0x1ED594u;
    // 0x1ed594: 0x8e630338  lw          $v1, 0x338($s3)
    ctx->pc = 0x1ed594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
    // 0x1ed598: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1ed59c: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x1ed59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x1ed5a0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1ed5a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ed5a4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED5A4u;
    {
        const bool branch_taken_0x1ed5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5A4u;
        // 0x1ed5a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5a4) {
            ctx->pc = 0x1ED5ECu;
            goto label_1ed5ec;
        }
    }
    ctx->pc = 0x1ED5ACu;
    // 0x1ed5ac: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x1ed5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x1ed5b0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1ed5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ed5b4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ed5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ed5b8: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED5B8u;
    {
        const bool branch_taken_0x1ed5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ED5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B8u;
        // 0x1ed5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5b8) {
            ctx->pc = 0x1ED5E4u;
            goto label_1ed5e4;
        }
    }
    ctx->pc = 0x1ED5C0u;
    // 0x1ed5c0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ed5c4: 0x2462fda2  addiu       $v0, $v1, -0x25E
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966690));
    // 0x1ed5c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ed5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ed5cc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED5CCu;
    {
        const bool branch_taken_0x1ed5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5cc) {
            ctx->pc = 0x1ED5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED5CCu;
            // 0x1ed5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED5E4u;
            goto label_1ed5e4;
        }
    }
    ctx->pc = 0x1ED5D4u;
    // 0x1ed5d4: 0x2462fd8b  addiu       $v0, $v1, -0x275
    ctx->pc = 0x1ed5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966667));
    // 0x1ed5d8: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x1ed5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1ed5dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED5DCu;
    {
        const bool branch_taken_0x1ed5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5dc) {
            ctx->pc = 0x1ED5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED5DCu;
            // 0x1ed5e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED5E4u;
            goto label_1ed5e4;
        }
    }
    ctx->pc = 0x1ED5E4u;
label_1ed5e4:
    // 0x1ed5e4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED5E4u;
    {
        const bool branch_taken_0x1ed5e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5e4) {
            ctx->pc = 0x1ED5F0u;
            goto label_1ed5f0;
        }
    }
    ctx->pc = 0x1ED5ECu;
label_1ed5ec:
    // 0x1ed5ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ed5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed5f0:
    // 0x1ed5f0: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ED5F0u;
    {
        const bool branch_taken_0x1ed5f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5f0) {
            ctx->pc = 0x1ED66Cu;
            goto label_1ed66c;
        }
    }
    ctx->pc = 0x1ED5F8u;
    // 0x1ed5f8: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1ED5F8u;
    {
        const bool branch_taken_0x1ed5f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5f8) {
            ctx->pc = 0x1ED66Cu;
            goto label_1ed66c;
        }
    }
    ctx->pc = 0x1ED600u;
    // 0x1ed600: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1ed604: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1ed608: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ed608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed60c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ed60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed610: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1ed614: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ed618: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1ed618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed61c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1ed61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ed620: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1ed620u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ed624: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1ed624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed628: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1ed628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ed62c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1ed62cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1ed630: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1ed630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ed634: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1ed634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ed638: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1ed638u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1ed63c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ed63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed640: 0x0  nop
    ctx->pc = 0x1ed640u;
    // NOP
    // 0x1ed644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ed644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ed648: 0x0  nop
    ctx->pc = 0x1ed648u;
    // NOP
    // 0x1ed64c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED64Cu;
    {
        const bool branch_taken_0x1ed64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed64c) {
            ctx->pc = 0x1ED66Cu;
            goto label_1ed66c;
        }
    }
    ctx->pc = 0x1ED654u;
    // 0x1ed654: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1ED654u;
    SET_GPR_U32(ctx, 31, 0x1ED65Cu);
    ctx->pc = 0x1ED658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED654u;
    // 0x1ed658: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1ED654u, 0x1ED65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED65Cu;
label_1ed65c:
    // 0x1ed65c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1ED65Cu;
    SET_GPR_U32(ctx, 31, 0x1ED664u);
    ctx->pc = 0x1ED660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED65Cu;
    // 0x1ed660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1ED65Cu, 0x1ED664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED664u;
label_1ed664:
    // 0x1ed664: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1ed664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed668: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed66c:
    // 0x1ed66c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ED66Cu;
    {
        const bool branch_taken_0x1ed66c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED66Cu;
        // 0x1ed670: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed66c) {
            ctx->pc = 0x1ED6B8u;
            goto label_1ed6b8;
        }
    }
    ctx->pc = 0x1ED674u;
    // 0x1ed674: 0x8e830338  lw          $v1, 0x338($s4)
    ctx->pc = 0x1ed674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
    // 0x1ed678: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x1ed678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1ed67c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED67Cu;
    {
        const bool branch_taken_0x1ed67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED67Cu;
        // 0x1ed680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed67c) {
            ctx->pc = 0x1ED68Cu;
            goto label_1ed68c;
        }
    }
    ctx->pc = 0x1ED684u;
    // 0x1ed684: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1ed688: 0x28450097  slti        $a1, $v0, 0x97
    ctx->pc = 0x1ed688u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1ed68c:
    // 0x1ed68c: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1ED68Cu;
    {
        const bool branch_taken_0x1ed68c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed68c) {
            ctx->pc = 0x1ED690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED68Cu;
            // 0x1ed690: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED6B8u;
            goto label_1ed6b8;
        }
    }
    ctx->pc = 0x1ED694u;
    // 0x1ed694: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED694u;
    {
        const bool branch_taken_0x1ed694 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED694u;
        // 0x1ed698: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed694) {
            ctx->pc = 0x1ED6A4u;
            goto label_1ed6a4;
        }
    }
    ctx->pc = 0x1ED69Cu;
    // 0x1ed69c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED69Cu;
    {
        const bool branch_taken_0x1ed69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED69Cu;
        // 0x1ed6a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed69c) {
            ctx->pc = 0x1ED6B8u;
            goto label_1ed6b8;
        }
    }
    ctx->pc = 0x1ED6A4u;
label_1ed6a4:
    // 0x1ed6a4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED6A4u;
    {
        const bool branch_taken_0x1ed6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6A4u;
        // 0x1ed6a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6a4) {
            ctx->pc = 0x1ED6B4u;
            goto label_1ed6b4;
        }
    }
    ctx->pc = 0x1ED6ACu;
    // 0x1ed6ac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ed6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ed6b0: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x1ed6b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_1ed6b4:
    // 0x1ed6b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ed6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed6b8:
    // 0x1ed6b8: 0x26a3fffa  addiu       $v1, $s5, -0x6
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
    // 0x1ed6bc: 0x2c620088  sltiu       $v0, $v1, 0x88
    ctx->pc = 0x1ed6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x1ed6c0: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1ED6C0u;
    {
        const bool branch_taken_0x1ed6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6C0u;
        // 0x1ed6c4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6c0) {
            ctx->pc = 0x1EDA50u;
            goto label_1eda50;
        }
    }
    ctx->pc = 0x1ED6C8u;
    // 0x1ed6c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed6cc: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x1ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
    // 0x1ed6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed6d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ed6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed6d8: 0x800008  jr          $a0
    ctx->pc = 0x1ED6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED6E0u: goto label_1ed6e0;
            case 0x1ED6F0u: goto label_1ed6f0;
            case 0x1ED700u: goto label_1ed700;
            case 0x1ED710u: goto label_1ed710;
            case 0x1ED72Cu: goto label_1ed72c;
            case 0x1ED73Cu: goto label_1ed73c;
            case 0x1ED74Cu: goto label_1ed74c;
            case 0x1ED75Cu: goto label_1ed75c;
            case 0x1ED76Cu: goto label_1ed76c;
            case 0x1ED780u: goto label_1ed780;
            case 0x1ED790u: goto label_1ed790;
            case 0x1ED7A0u: goto label_1ed7a0;
            case 0x1ED7B0u: goto label_1ed7b0;
            case 0x1ED7C0u: goto label_1ed7c0;
            case 0x1ED7E8u: goto label_1ed7e8;
            case 0x1ED7F8u: goto label_1ed7f8;
            case 0x1ED808u: goto label_1ed808;
            case 0x1ED818u: goto label_1ed818;
            case 0x1ED828u: goto label_1ed828;
            case 0x1ED838u: goto label_1ed838;
            case 0x1ED848u: goto label_1ed848;
            case 0x1ED858u: goto label_1ed858;
            case 0x1ED868u: goto label_1ed868;
            case 0x1ED8C0u: goto label_1ed8c0;
            case 0x1ED904u: goto label_1ed904;
            case 0x1ED914u: goto label_1ed914;
            case 0x1ED924u: goto label_1ed924;
            case 0x1ED934u: goto label_1ed934;
            case 0x1ED944u: goto label_1ed944;
            case 0x1ED954u: goto label_1ed954;
            case 0x1ED97Cu: goto label_1ed97c;
            case 0x1ED98Cu: goto label_1ed98c;
            case 0x1ED99Cu: goto label_1ed99c;
            case 0x1ED9B0u: goto label_1ed9b0;
            case 0x1ED9C0u: goto label_1ed9c0;
            case 0x1ED9D0u: goto label_1ed9d0;
            case 0x1ED9E4u: goto label_1ed9e4;
            case 0x1ED9F4u: goto label_1ed9f4;
            case 0x1EDA04u: goto label_1eda04;
            case 0x1EDA14u: goto label_1eda14;
            case 0x1EDA38u: goto label_1eda38;
            case 0x1EDA50u: goto label_1eda50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED6D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ED6E0u;
label_1ed6e0:
    // 0x1ed6e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed6e4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed6e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ED6E8u;
    {
        const bool branch_taken_0x1ed6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6E8u;
        // 0x1ed6ec: 0x2442de58  addiu       $v0, $v0, -0x21A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6e8) {
            ctx->pc = 0x1ED71Cu;
            goto label_1ed71c;
        }
    }
    ctx->pc = 0x1ED6F0u;
label_1ed6f0:
    // 0x1ed6f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed6f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed6f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED6F8u;
    {
        const bool branch_taken_0x1ed6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6F8u;
        // 0x1ed6fc: 0x2442de88  addiu       $v0, $v0, -0x2178 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6f8) {
            ctx->pc = 0x1ED71Cu;
            goto label_1ed71c;
        }
    }
    ctx->pc = 0x1ED700u;
label_1ed700:
    // 0x1ed700: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed704: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED708u;
    {
        const bool branch_taken_0x1ed708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED708u;
        // 0x1ed70c: 0x2442dea0  addiu       $v0, $v0, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed708) {
            ctx->pc = 0x1ED71Cu;
            goto label_1ed71c;
        }
    }
    ctx->pc = 0x1ED710u;
label_1ed710:
    // 0x1ed710: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed714: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed718: 0x2442de70  addiu       $v0, $v0, -0x2190
    ctx->pc = 0x1ed718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
label_1ed71c:
    // 0x1ed71c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ed71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ed720: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ed720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ed724: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1ED724u;
    {
        const bool branch_taken_0x1ed724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED724u;
        // 0x1ed728: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed724) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1ED72Cu;
label_1ed72c:
    // 0x1ed72c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed730: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed734: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1ED734u;
    {
        const bool branch_taken_0x1ed734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED734u;
        // 0x1ed738: 0x2442deb8  addiu       $v0, $v0, -0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed734) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED73Cu;
label_1ed73c:
    // 0x1ed73c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed740: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed744: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1ED744u;
    {
        const bool branch_taken_0x1ed744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED744u;
        // 0x1ed748: 0x2442ded0  addiu       $v0, $v0, -0x2130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed744) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED74Cu;
label_1ed74c:
    // 0x1ed74c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed750: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed754: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1ED754u;
    {
        const bool branch_taken_0x1ed754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED754u;
        // 0x1ed758: 0x2442def0  addiu       $v0, $v0, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed754) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED75Cu;
label_1ed75c:
    // 0x1ed75c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed760: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed764: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1ED764u;
    {
        const bool branch_taken_0x1ed764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED764u;
        // 0x1ed768: 0x2442df08  addiu       $v0, $v0, -0x20F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed764) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED76Cu;
label_1ed76c:
    // 0x1ed76c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed770: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed778: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1ED778u;
    {
        const bool branch_taken_0x1ed778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED778u;
        // 0x1ed77c: 0x2442df20  addiu       $v0, $v0, -0x20E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed778) {
            ctx->pc = 0x1EDA24u;
            goto label_1eda24;
        }
    }
    ctx->pc = 0x1ED780u;
label_1ed780:
    // 0x1ed780: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed784: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed788: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x1ED788u;
    {
        const bool branch_taken_0x1ed788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED788u;
        // 0x1ed78c: 0x2442df38  addiu       $v0, $v0, -0x20C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed788) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED790u;
label_1ed790:
    // 0x1ed790: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed794: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed798: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1ED798u;
    {
        const bool branch_taken_0x1ed798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED798u;
        // 0x1ed79c: 0x2442df50  addiu       $v0, $v0, -0x20B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed798) {
            ctx->pc = 0x1ED7CCu;
            goto label_1ed7cc;
        }
    }
    ctx->pc = 0x1ED7A0u;
label_1ed7a0:
    // 0x1ed7a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed7a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed7a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED7A8u;
    {
        const bool branch_taken_0x1ed7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7A8u;
        // 0x1ed7ac: 0x2442df68  addiu       $v0, $v0, -0x2098 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7a8) {
            ctx->pc = 0x1ED7CCu;
            goto label_1ed7cc;
        }
    }
    ctx->pc = 0x1ED7B0u;
label_1ed7b0:
    // 0x1ed7b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed7b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed7b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED7B8u;
    {
        const bool branch_taken_0x1ed7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7B8u;
        // 0x1ed7bc: 0x2442df80  addiu       $v0, $v0, -0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7b8) {
            ctx->pc = 0x1ED7CCu;
            goto label_1ed7cc;
        }
    }
    ctx->pc = 0x1ED7C0u;
label_1ed7c0:
    // 0x1ed7c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed7c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed7c8: 0x2442df98  addiu       $v0, $v0, -0x2068
    ctx->pc = 0x1ed7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959000));
label_1ed7cc:
    // 0x1ed7cc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ed7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ed7d0: 0x15600066  bnez        $t3, . + 4 + (0x66 << 2)
    ctx->pc = 0x1ED7D0u;
    {
        const bool branch_taken_0x1ed7d0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7D0u;
        // 0x1ed7d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7d0) {
            ctx->pc = 0x1ED96Cu;
            goto label_1ed96c;
        }
    }
    ctx->pc = 0x1ED7D8u;
    // 0x1ed7d8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1ed7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1ed7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed7e0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1ED7E0u;
    {
        const bool branch_taken_0x1ed7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7E0u;
        // 0x1ed7e4: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7e0) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1ED7E8u;
label_1ed7e8:
    // 0x1ed7e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed7ec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed7f0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1ED7F0u;
    {
        const bool branch_taken_0x1ed7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7F0u;
        // 0x1ed7f4: 0x2442dfb0  addiu       $v0, $v0, -0x2050 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7f0) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED7F8u;
label_1ed7f8:
    // 0x1ed7f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed7fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed800: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1ED800u;
    {
        const bool branch_taken_0x1ed800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED800u;
        // 0x1ed804: 0x2442dfd0  addiu       $v0, $v0, -0x2030 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed800) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED808u;
label_1ed808:
    // 0x1ed808: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed80c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed810: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1ED810u;
    {
        const bool branch_taken_0x1ed810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED810u;
        // 0x1ed814: 0x2442dfe8  addiu       $v0, $v0, -0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed810) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED818u;
label_1ed818:
    // 0x1ed818: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed81c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed820: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1ED820u;
    {
        const bool branch_taken_0x1ed820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED820u;
        // 0x1ed824: 0x2442e008  addiu       $v0, $v0, -0x1FF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed820) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED828u;
label_1ed828:
    // 0x1ed828: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed82c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed830: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1ED830u;
    {
        const bool branch_taken_0x1ed830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED830u;
        // 0x1ed834: 0x2442e028  addiu       $v0, $v0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed830) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED838u;
label_1ed838:
    // 0x1ed838: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed83c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed840: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1ED840u;
    {
        const bool branch_taken_0x1ed840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED840u;
        // 0x1ed844: 0x2442e048  addiu       $v0, $v0, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed840) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED848u;
label_1ed848:
    // 0x1ed848: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed84c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed850: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1ED850u;
    {
        const bool branch_taken_0x1ed850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED850u;
        // 0x1ed854: 0x2442e060  addiu       $v0, $v0, -0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed850) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED858u;
label_1ed858:
    // 0x1ed858: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed85c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed860: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1ED860u;
    {
        const bool branch_taken_0x1ed860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED860u;
        // 0x1ed864: 0x2442e078  addiu       $v0, $v0, -0x1F88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed860) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED868u;
label_1ed868:
    // 0x1ed868: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ed868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1ed86c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1ed870: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ed874: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ed874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ed878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ed878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed87c: 0x2463da38  addiu       $v1, $v1, -0x25C8
    ctx->pc = 0x1ed87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957624));
    // 0x1ed880: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed888: 0x2484da48  addiu       $a0, $a0, -0x25B8
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957640));
    // 0x1ed88c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ed88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed890: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1ed890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed894: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1ed894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1ed898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed89c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ed89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ed8a0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1ed8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1ed8a4: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x1ed8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1ed8a8: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1ed8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1ed8ac: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1ed8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1ed8b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ed8b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ed8b8: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1ED8B8u;
    {
        const bool branch_taken_0x1ed8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8B8u;
        // 0x1ed8bc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8b8) {
            ctx->pc = 0x1EDC7Cu;
            goto label_1edc7c;
        }
    }
    ctx->pc = 0x1ED8C0u;
label_1ed8c0:
    // 0x1ed8c0: 0x8e820338  lw          $v0, 0x338($s4)
    ctx->pc = 0x1ed8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
    // 0x1ed8c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed8c8: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1ed8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1ed8cc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED8CCu;
    {
        const bool branch_taken_0x1ed8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1ED8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8CCu;
        // 0x1ed8d0: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8cc) {
            ctx->pc = 0x1ED8E4u;
            goto label_1ed8e4;
        }
    }
    ctx->pc = 0x1ED8D4u;
    // 0x1ed8d4: 0x8e820334  lw          $v0, 0x334($s4)
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x1ed8d8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1ed8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1ed8dc: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED8DCu;
    {
        const bool branch_taken_0x1ed8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ed8dc) {
            ctx->pc = 0x1ED8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED8DCu;
            // 0x1ed8e0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED8F0u;
            goto label_1ed8f0;
        }
    }
    ctx->pc = 0x1ED8E4u;
label_1ed8e4:
    // 0x1ed8e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed8e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED8E8u;
    {
        const bool branch_taken_0x1ed8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8E8u;
        // 0x1ed8ec: 0x2442de70  addiu       $v0, $v0, -0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8e8) {
            ctx->pc = 0x1ED8F4u;
            goto label_1ed8f4;
        }
    }
    ctx->pc = 0x1ED8F0u;
label_1ed8f0:
    // 0x1ed8f0: 0x2442e0a0  addiu       $v0, $v0, -0x1F60
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
label_1ed8f4:
    // 0x1ed8f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ed8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ed8f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ed8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed8fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1ED8FCu;
    {
        const bool branch_taken_0x1ed8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED8FCu;
        // 0x1ed900: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8fc) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1ED904u;
label_1ed904:
    // 0x1ed904: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed908: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed90c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1ED90Cu;
    {
        const bool branch_taken_0x1ed90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED90Cu;
        // 0x1ed910: 0x2442e0b8  addiu       $v0, $v0, -0x1F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed90c) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed918: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed91c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1ED91Cu;
    {
        const bool branch_taken_0x1ed91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED91Cu;
        // 0x1ed920: 0x2442e0d8  addiu       $v0, $v0, -0x1F28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed91c) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED924u;
label_1ed924:
    // 0x1ed924: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed928: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed92c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1ED92Cu;
    {
        const bool branch_taken_0x1ed92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED92Cu;
        // 0x1ed930: 0x2442e0f8  addiu       $v0, $v0, -0x1F08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed92c) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED934u;
label_1ed934:
    // 0x1ed934: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed938: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed93c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1ED93Cu;
    {
        const bool branch_taken_0x1ed93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED93Cu;
        // 0x1ed940: 0x2442e110  addiu       $v0, $v0, -0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed93c) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED944u;
label_1ed944:
    // 0x1ed944: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed948: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED94Cu;
    {
        const bool branch_taken_0x1ed94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED94Cu;
        // 0x1ed950: 0x2442e130  addiu       $v0, $v0, -0x1ED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed94c) {
            ctx->pc = 0x1ED960u;
            goto label_1ed960;
        }
    }
    ctx->pc = 0x1ED954u;
label_1ed954:
    // 0x1ed954: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed958: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed95c: 0x2442e150  addiu       $v0, $v0, -0x1EB0
    ctx->pc = 0x1ed95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959440));
label_1ed960:
    // 0x1ed960: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ed960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ed964: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1ED964u;
    {
        const bool branch_taken_0x1ed964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED964u;
        // 0x1ed968: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed964) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1ED96Cu;
label_1ed96c:
    // 0x1ed96c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed974: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1ED974u;
    {
        const bool branch_taken_0x1ed974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED974u;
        // 0x1ed978: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed974) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1ED97Cu;
label_1ed97c:
    // 0x1ed97c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed980: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed984: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1ED984u;
    {
        const bool branch_taken_0x1ed984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED984u;
        // 0x1ed988: 0x2442e170  addiu       $v0, $v0, -0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed984) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED98Cu;
label_1ed98c:
    // 0x1ed98c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed990: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed994: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1ED994u;
    {
        const bool branch_taken_0x1ed994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED994u;
        // 0x1ed998: 0x2442e190  addiu       $v0, $v0, -0x1E70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed994) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED99Cu;
label_1ed99c:
    // 0x1ed99c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed9a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed9a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1ED9A8u;
    {
        const bool branch_taken_0x1ed9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9A8u;
        // 0x1ed9ac: 0x2442e1b0  addiu       $v0, $v0, -0x1E50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9a8) {
            ctx->pc = 0x1EDA24u;
            goto label_1eda24;
        }
    }
    ctx->pc = 0x1ED9B0u;
label_1ed9b0:
    // 0x1ed9b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed9b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed9b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1ED9B8u;
    {
        const bool branch_taken_0x1ed9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9B8u;
        // 0x1ed9bc: 0x2442e1c8  addiu       $v0, $v0, -0x1E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9b8) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED9C0u;
label_1ed9c0:
    // 0x1ed9c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed9c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed9c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1ED9C8u;
    {
        const bool branch_taken_0x1ed9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9C8u;
        // 0x1ed9cc: 0x2442e1e8  addiu       $v0, $v0, -0x1E18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9c8) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED9D0u;
label_1ed9d0:
    // 0x1ed9d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed9d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed9dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED9DCu;
    {
        const bool branch_taken_0x1ed9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9DCu;
        // 0x1ed9e0: 0x2442e208  addiu       $v0, $v0, -0x1DF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9dc) {
            ctx->pc = 0x1EDA24u;
            goto label_1eda24;
        }
    }
    ctx->pc = 0x1ED9E4u;
label_1ed9e4:
    // 0x1ed9e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed9e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed9ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1ED9ECu;
    {
        const bool branch_taken_0x1ed9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9ECu;
        // 0x1ed9f0: 0x2442e228  addiu       $v0, $v0, -0x1DD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9ec) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1ED9F4u;
label_1ed9f4:
    // 0x1ed9f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed9f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed9fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED9FCu;
    {
        const bool branch_taken_0x1ed9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9FCu;
        // 0x1eda00: 0x2442e248  addiu       $v0, $v0, -0x1DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9fc) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1EDA04u;
label_1eda04:
    // 0x1eda04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1eda04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1eda08: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1eda08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eda0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EDA0Cu;
    {
        const bool branch_taken_0x1eda0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA0Cu;
        // 0x1eda10: 0x2442e268  addiu       $v0, $v0, -0x1D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda0c) {
            ctx->pc = 0x1EDA44u;
            goto label_1eda44;
        }
    }
    ctx->pc = 0x1EDA14u;
label_1eda14:
    // 0x1eda14: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1eda14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1eda18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1eda18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1eda1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eda1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda20: 0x2442e280  addiu       $v0, $v0, -0x1D80
    ctx->pc = 0x1eda20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959744));
label_1eda24:
    // 0x1eda24: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1eda24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eda28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1eda28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1eda2c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1eda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1eda30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDA30u;
    {
        const bool branch_taken_0x1eda30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA30u;
        // 0x1eda34: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda30) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1EDA38u;
label_1eda38:
    // 0x1eda38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1eda3c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1eda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eda40: 0x2442e298  addiu       $v0, $v0, -0x1D68
    ctx->pc = 0x1eda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959768));
label_1eda44:
    // 0x1eda44: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1eda44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1eda48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDA48u;
    {
        const bool branch_taken_0x1eda48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA48u;
        // 0x1eda4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda48) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1EDA50u;
label_1eda50:
    // 0x1eda50: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1EDA50u;
    {
        const bool branch_taken_0x1eda50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA50u;
        // 0x1eda54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda50) {
            ctx->pc = 0x1EDC7Cu;
            goto label_1edc7c;
        }
    }
    ctx->pc = 0x1EDA58u;
label_1eda58:
    // 0x1eda58: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1eda58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1eda5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eda60: 0x1160003e  beqz        $t3, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EDA60u;
    {
        const bool branch_taken_0x1eda60 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA60u;
        // 0x1eda64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda60) {
            ctx->pc = 0x1EDB5Cu;
            goto label_1edb5c;
        }
    }
    ctx->pc = 0x1EDA68u;
    // 0x1eda68: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x1eda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1eda6c: 0x1142002c  beq         $t2, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EDA6Cu;
    {
        const bool branch_taken_0x1eda6c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA6Cu;
        // 0x1eda70: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda6c) {
            ctx->pc = 0x1EDB20u;
            goto label_1edb20;
        }
    }
    ctx->pc = 0x1EDA74u;
    // 0x1eda74: 0x29420073  slti        $v0, $t2, 0x73
    ctx->pc = 0x1eda74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)115) ? 1 : 0);
    // 0x1eda78: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EDA78u;
    {
        const bool branch_taken_0x1eda78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA78u;
        // 0x1eda7c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda78) {
            ctx->pc = 0x1EDAC4u;
            goto label_1edac4;
        }
    }
    ctx->pc = 0x1EDA80u;
    // 0x1eda80: 0x1142001b  beq         $t2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EDA80u;
    {
        const bool branch_taken_0x1eda80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA80u;
        // 0x1eda84: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda80) {
            ctx->pc = 0x1EDAF0u;
            goto label_1edaf0;
        }
    }
    ctx->pc = 0x1EDA88u;
    // 0x1eda88: 0x29420025  slti        $v0, $t2, 0x25
    ctx->pc = 0x1eda88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1eda8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDA8Cu;
    {
        const bool branch_taken_0x1eda8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA8Cu;
        // 0x1eda90: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda8c) {
            ctx->pc = 0x1EDAA4u;
            goto label_1edaa4;
        }
    }
    ctx->pc = 0x1EDA94u;
    // 0x1eda94: 0x5142001c  beql        $t2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EDA94u;
    {
        const bool branch_taken_0x1eda94 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eda94) {
            ctx->pc = 0x1EDA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDA94u;
            // 0x1eda98: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDB08u;
            goto label_1edb08;
        }
    }
    ctx->pc = 0x1EDA9Cu;
    // 0x1eda9c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1EDA9Cu;
    {
        const bool branch_taken_0x1eda9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA9Cu;
        // 0x1edaa0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda9c) {
            ctx->pc = 0x1EDB50u;
            goto label_1edb50;
        }
    }
    ctx->pc = 0x1EDAA4u;
label_1edaa4:
    // 0x1edaa4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1edaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1edaa8: 0x1142001a  beq         $t2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EDAA8u;
    {
        const bool branch_taken_0x1edaa8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAA8u;
        // 0x1edaac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edaa8) {
            ctx->pc = 0x1EDB14u;
            goto label_1edb14;
        }
    }
    ctx->pc = 0x1EDAB0u;
    // 0x1edab0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1edab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1edab4: 0x51420011  beql        $t2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDAB4u;
    {
        const bool branch_taken_0x1edab4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x1edab4) {
            ctx->pc = 0x1EDAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDAB4u;
            // 0x1edab8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDAFCu;
            goto label_1edafc;
        }
    }
    ctx->pc = 0x1EDABCu;
    // 0x1edabc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1EDABCu;
    {
        const bool branch_taken_0x1edabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDABCu;
        // 0x1edac0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edabc) {
            ctx->pc = 0x1EDB50u;
            goto label_1edb50;
        }
    }
    ctx->pc = 0x1EDAC4u;
label_1edac4:
    // 0x1edac4: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1edac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1edac8: 0x11420018  beq         $t2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EDAC8u;
    {
        const bool branch_taken_0x1edac8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAC8u;
        // 0x1edacc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edac8) {
            ctx->pc = 0x1EDB2Cu;
            goto label_1edb2c;
        }
    }
    ctx->pc = 0x1EDAD0u;
    // 0x1edad0: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x1edad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x1edad4: 0x11420018  beq         $t2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EDAD4u;
    {
        const bool branch_taken_0x1edad4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAD4u;
        // 0x1edad8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edad4) {
            ctx->pc = 0x1EDB38u;
            goto label_1edb38;
        }
    }
    ctx->pc = 0x1EDADCu;
    // 0x1edadc: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x1edadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x1edae0: 0x51420018  beql        $t2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EDAE0u;
    {
        const bool branch_taken_0x1edae0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x1edae0) {
            ctx->pc = 0x1EDAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDAE0u;
            // 0x1edae4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDB44u;
            goto label_1edb44;
        }
    }
    ctx->pc = 0x1EDAE8u;
    // 0x1edae8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EDAE8u;
    {
        const bool branch_taken_0x1edae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAE8u;
        // 0x1edaec: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edae8) {
            ctx->pc = 0x1EDB50u;
            goto label_1edb50;
        }
    }
    ctx->pc = 0x1EDAF0u;
label_1edaf0:
    // 0x1edaf0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edaf4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1EDAF4u;
    {
        const bool branch_taken_0x1edaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDAF4u;
        // 0x1edaf8: 0x2442e008  addiu       $v0, $v0, -0x1FF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edaf4) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDAFCu;
label_1edafc:
    // 0x1edafc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb00: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1EDB00u;
    {
        const bool branch_taken_0x1edb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB00u;
        // 0x1edb04: 0x2442e078  addiu       $v0, $v0, -0x1F88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb00) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB08u;
label_1edb08:
    // 0x1edb08: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb0c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1EDB0Cu;
    {
        const bool branch_taken_0x1edb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB0Cu;
        // 0x1edb10: 0x2442e028  addiu       $v0, $v0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb0c) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB14u;
label_1edb14:
    // 0x1edb14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb18: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1EDB18u;
    {
        const bool branch_taken_0x1edb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB18u;
        // 0x1edb1c: 0x2442e048  addiu       $v0, $v0, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb18) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB20u;
label_1edb20:
    // 0x1edb20: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb24: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1EDB24u;
    {
        const bool branch_taken_0x1edb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB24u;
        // 0x1edb28: 0x2442e060  addiu       $v0, $v0, -0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb24) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB2Cu;
label_1edb2c:
    // 0x1edb2c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb30: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1EDB30u;
    {
        const bool branch_taken_0x1edb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB30u;
        // 0x1edb34: 0x2442e0b8  addiu       $v0, $v0, -0x1F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb30) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB38u;
label_1edb38:
    // 0x1edb38: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb3c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1EDB3Cu;
    {
        const bool branch_taken_0x1edb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB3Cu;
        // 0x1edb40: 0x2442e1b0  addiu       $v0, $v0, -0x1E50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb3c) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB44u;
label_1edb44:
    // 0x1edb44: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb48: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1EDB48u;
    {
        const bool branch_taken_0x1edb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB48u;
        // 0x1edb4c: 0x2442e1e8  addiu       $v0, $v0, -0x1E18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb48) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB50u;
label_1edb50:
    // 0x1edb50: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb54: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1EDB54u;
    {
        const bool branch_taken_0x1edb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB54u;
        // 0x1edb58: 0x2442e2b0  addiu       $v0, $v0, -0x1D50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb54) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB5Cu;
label_1edb5c:
    // 0x1edb5c: 0x26a3ffee  addiu       $v1, $s5, -0x12
    ctx->pc = 0x1edb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967278));
    // 0x1edb60: 0x2c620078  sltiu       $v0, $v1, 0x78
    ctx->pc = 0x1edb60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x1edb64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EDB64u;
    {
        const bool branch_taken_0x1edb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB64u;
        // 0x1edb68: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb64) {
            ctx->pc = 0x1EDBA4u;
            goto label_1edba4;
        }
    }
    ctx->pc = 0x1EDB6Cu;
    // 0x1edb6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1edb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1edb70: 0x2442e520  addiu       $v0, $v0, -0x1AE0
    ctx->pc = 0x1edb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
    // 0x1edb74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1edb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edb78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1edb7c: 0x800008  jr          $a0
    ctx->pc = 0x1EDB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDB84u: goto label_1edb84;
            case 0x1EDB94u: goto label_1edb94;
            case 0x1EDBA4u: goto label_1edba4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDB7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EDB84u;
label_1edb84:
    // 0x1edb84: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1edb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1edb88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb8c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1EDB8Cu;
    {
        const bool branch_taken_0x1edb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB8Cu;
        // 0x1edb90: 0x2442e2c0  addiu       $v0, $v0, -0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb8c) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDB94u;
label_1edb94:
    // 0x1edb94: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1edb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1edb98: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edb9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1EDB9Cu;
    {
        const bool branch_taken_0x1edb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDB9Cu;
        // 0x1edba0: 0x2442e2d8  addiu       $v0, $v0, -0x1D28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb9c) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDBA4u;
label_1edba4:
    // 0x1edba4: 0x12e00023  beqz        $s7, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EDBA4u;
    {
        const bool branch_taken_0x1edba4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBA4u;
        // 0x1edba8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edba4) {
            ctx->pc = 0x1EDC34u;
            goto label_1edc34;
        }
    }
    ctx->pc = 0x1EDBACu;
    // 0x1edbac: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x1edbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1edbb0: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x1edbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1edbb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1edbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edbb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1edbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1edbbc: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1edbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1edbc0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1edbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1edbc4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1edbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1edbc8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1edbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1edbcc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1edbccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1edbd0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1edbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1edbd4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1edbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1edbd8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1edbd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1edbdc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1edbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1edbe0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1edbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1edbe4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1edbe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1edbe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1edbe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edbec: 0x0  nop
    ctx->pc = 0x1edbecu;
    // NOP
    // 0x1edbf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1edbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edbf4: 0x0  nop
    ctx->pc = 0x1edbf4u;
    // NOP
    // 0x1edbf8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1EDBF8u;
    {
        const bool branch_taken_0x1edbf8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDBF8u;
        // 0x1edbfc: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbf8) {
            ctx->pc = 0x1EDC34u;
            goto label_1edc34;
        }
    }
    ctx->pc = 0x1EDC00u;
    // 0x1edc00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1edc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1edc04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1edc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edc08: 0x56a20006  bnel        $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDC08u;
    {
        const bool branch_taken_0x1edc08 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edc08) {
            ctx->pc = 0x1EDC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDC08u;
            // 0x1edc0c: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDC24u;
            goto label_1edc24;
        }
    }
    ctx->pc = 0x1EDC10u;
    // 0x1edc10: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1edc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1edc14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1edc14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1edc18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1edc18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edc1c: 0x0  nop
    ctx->pc = 0x1edc1cu;
    // NOP
    // 0x1edc20: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1edc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1edc24:
    // 0x1edc24: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1edc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1edc28: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edc2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EDC2Cu;
    {
        const bool branch_taken_0x1edc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC2Cu;
        // 0x1edc30: 0x2442e2e8  addiu       $v0, $v0, -0x1D18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc2c) {
            ctx->pc = 0x1EDC64u;
            goto label_1edc64;
        }
    }
    ctx->pc = 0x1EDC34u;
label_1edc34:
    // 0x1edc34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1edc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1edc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1edc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edc3c: 0x56a20006  bnel        $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDC3Cu;
    {
        const bool branch_taken_0x1edc3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edc3c) {
            ctx->pc = 0x1EDC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDC3Cu;
            // 0x1edc40: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDC58u;
            goto label_1edc58;
        }
    }
    ctx->pc = 0x1EDC44u;
    // 0x1edc44: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1edc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1edc48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1edc48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1edc4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1edc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edc50: 0x0  nop
    ctx->pc = 0x1edc50u;
    // NOP
    // 0x1edc54: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1edc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1edc58:
    // 0x1edc58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1edc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1edc5c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1edc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edc60: 0x2442dbe0  addiu       $v0, $v0, -0x2420
    ctx->pc = 0x1edc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958048));
label_1edc64:
    // 0x1edc64: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1edc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1edc68: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1edc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1edc6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1edc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1edc70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1edc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1edc74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1edc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1edc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edc7c:
    // 0x1edc7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1edc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edc80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1edc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1edc84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1edc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edc88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1edc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1edc8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1edc8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edc90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1edc90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1edc94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1edc94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edc98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1edc98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1edc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1edca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCA0u;
        // 0x1edca4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDCA8u;
}
