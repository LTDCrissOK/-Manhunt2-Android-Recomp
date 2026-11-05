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

// Function: sub_0022F858
// Address: 0x22f858 - 0x22fae0
void sub_0022F858_0x22f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F858_0x22f858");
#endif

    switch (ctx->pc) {
        case 0x22f990u: goto label_22f990;
        case 0x22f9c4u: goto label_22f9c4;
        case 0x22fa40u: goto label_22fa40;
        default: break;
    }

    ctx->pc = 0x22f858u;

    // 0x22f858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f85c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f860: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22f864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f868: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22f86c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f870: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22f870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22f874: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f87c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f880: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f884: 0x8e270338  lw          $a3, 0x338($s1)
    ctx->pc = 0x22f884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x22f888: 0x8ce30088  lw          $v1, 0x88($a3)
    ctx->pc = 0x22f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x22f88c: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x22f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x22f890: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F894u;
    {
        const bool branch_taken_0x22f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F894u;
        // 0x22f898: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f894) {
            ctx->pc = 0x22F8A4u;
            goto label_22f8a4;
        }
    }
    ctx->pc = 0x22F89Cu;
    // 0x22f89c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x22F89Cu;
    {
        const bool branch_taken_0x22f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F89Cu;
        // 0x22f8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f89c) {
            ctx->pc = 0x22FABCu;
            goto label_22fabc;
        }
    }
    ctx->pc = 0x22F8A4u;
label_22f8a4:
    // 0x22f8a4: 0x12a0001e  beqz        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F8A4u;
    {
        const bool branch_taken_0x22f8a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8A4u;
        // 0x22f8a8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8a4) {
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F8ACu;
    // 0x22f8ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f8b0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x22F8B0u;
    {
        const bool branch_taken_0x22f8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f8b0) {
            ctx->pc = 0x22F8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F8B0u;
            // 0x22f8b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F8B8u;
    // 0x22f8b8: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x22f8bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f8bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f8c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F8C0u;
    {
        const bool branch_taken_0x22f8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8C0u;
        // 0x22f8c4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8c0) {
            ctx->pc = 0x22F8F4u;
            goto label_22f8f4;
        }
    }
    ctx->pc = 0x22F8C8u;
    // 0x22f8c8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22f8cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f8d0: 0x28c30111  slti        $v1, $a2, 0x111
    ctx->pc = 0x22f8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)273) ? 1 : 0);
    // 0x22f8d4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F8D4u;
    {
        const bool branch_taken_0x22f8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8D4u;
        // 0x22f8d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8d4) {
            ctx->pc = 0x22F8ECu;
            goto label_22f8ec;
        }
    }
    ctx->pc = 0x22F8DCu;
    // 0x22f8dc: 0x24020119  addiu       $v0, $zero, 0x119
    ctx->pc = 0x22f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x22f8e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f8e4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x22f8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22f8e8: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x22f8e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_22f8ec:
    // 0x22f8ec: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22F8ECu;
    {
        const bool branch_taken_0x22f8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f8ec) {
            ctx->pc = 0x22F8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F8ECu;
            // 0x22f8f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F8F4u;
label_22f8f4:
    // 0x22f8f4: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x22f8f8: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x22f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x22f8fc: 0x2462ffe5  addiu       $v0, $v1, -0x1B
    ctx->pc = 0x22f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967269));
    // 0x22f900: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22f900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x22f904: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F904u;
    {
        const bool branch_taken_0x22f904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f904) {
            ctx->pc = 0x22F908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F904u;
            // 0x22f908: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F90Cu;
    // 0x22f90c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F90Cu;
    {
        const bool branch_taken_0x22f90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F90Cu;
        // 0x22f910: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f90c) {
            ctx->pc = 0x22F91Cu;
            goto label_22f91c;
        }
    }
    ctx->pc = 0x22F914u;
    // 0x22f914: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F914u;
    {
        const bool branch_taken_0x22f914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f914) {
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F91Cu;
label_22f91c:
    // 0x22f91c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f920:
    // 0x22f920: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F920u;
    {
        const bool branch_taken_0x22f920 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f920) {
            ctx->pc = 0x22F924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F920u;
            // 0x22f924: 0x8e220418  lw          $v0, 0x418($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F930u;
            goto label_22f930;
        }
    }
    ctx->pc = 0x22F928u;
    // 0x22f928: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x22F928u;
    {
        const bool branch_taken_0x22f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F928u;
        // 0x22f92c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f928) {
            ctx->pc = 0x22FABCu;
            goto label_22fabc;
        }
    }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x22f930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x22f934: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x22F934u;
    {
        const bool branch_taken_0x22f934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f934) {
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22F93Cu;
    // 0x22f93c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22f940: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x22f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x22f944: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x22f944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f948: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F948u;
    {
        const bool branch_taken_0x22f948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F948u;
        // 0x22f94c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f948) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F950u;
    // 0x22f950: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x22f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x22f954: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F954u;
    {
        const bool branch_taken_0x22f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F954u;
        // 0x22f958: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f954) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F95Cu;
    // 0x22f95c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F95Cu;
    {
        const bool branch_taken_0x22f95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F95Cu;
        // 0x22f960: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f95c) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F964u;
    // 0x22f964: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F964u;
    {
        const bool branch_taken_0x22f964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F964u;
        // 0x22f968: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f964) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F96Cu;
    // 0x22f96c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F96Cu;
    {
        const bool branch_taken_0x22f96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F96Cu;
        // 0x22f970: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f96c) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F974u;
    // 0x22f974: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F974u;
    {
        const bool branch_taken_0x22f974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f974) {
            ctx->pc = 0x22F980u;
            goto label_22f980;
        }
    }
    ctx->pc = 0x22F97Cu;
label_22f97c:
    // 0x22f97c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f980:
    // 0x22f980: 0x54800049  bnel        $a0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x22F980u;
    {
        const bool branch_taken_0x22f980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f980) {
            ctx->pc = 0x22F984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F980u;
            // 0x22f984: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22F988u;
    // 0x22f988: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x22F988u;
    SET_GPR_U32(ctx, 31, 0x22F990u);
    ctx->pc = 0x22F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F988u;
    // 0x22f98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x22F988u, 0x22F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F990u;
label_22f990:
    // 0x22f990: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x22F990u;
    {
        const bool branch_taken_0x22f990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f990) {
            ctx->pc = 0x22F994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F990u;
            // 0x22f994: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22F998u;
    // 0x22f998: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x22f998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22f99c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22f9a0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22f9a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f9a8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F9A8u;
    {
        const bool branch_taken_0x22f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A8u;
        // 0x22f9ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9a8) {
            ctx->pc = 0x22F9E4u;
            goto label_22f9e4;
        }
    }
    ctx->pc = 0x22F9B0u;
    // 0x22f9b0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22f9b4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F9B4u;
    {
        const bool branch_taken_0x22f9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f9b4) {
            ctx->pc = 0x22F9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F9B4u;
            // 0x22f9b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F9E8u;
            goto label_22f9e8;
        }
    }
    ctx->pc = 0x22F9BCu;
    // 0x22f9bc: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22F9BCu;
    SET_GPR_U32(ctx, 31, 0x22F9C4u);
    ctx->pc = 0x22F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9BCu;
    // 0x22f9c0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22F9BCu, 0x22F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9C4u;
label_22f9c4:
    // 0x22f9c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F9C4u;
    {
        const bool branch_taken_0x22f9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f9c4) {
            ctx->pc = 0x22F9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F9C4u;
            // 0x22f9c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F9E8u;
            goto label_22f9e8;
        }
    }
    ctx->pc = 0x22F9CCu;
    // 0x22f9cc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22f9d0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22f9d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F9D4u;
    {
        const bool branch_taken_0x22f9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9D4u;
        // 0x22f9d8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9d4) {
            ctx->pc = 0x22F9E4u;
            goto label_22f9e4;
        }
    }
    ctx->pc = 0x22F9DCu;
    // 0x22f9dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F9DCu;
    {
        const bool branch_taken_0x22f9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f9dc) {
            ctx->pc = 0x22F9E8u;
            goto label_22f9e8;
        }
    }
    ctx->pc = 0x22F9E4u;
label_22f9e4:
    // 0x22f9e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22f9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f9e8:
    // 0x22f9e8: 0x5640002f  bnel        $s2, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x22F9E8u;
    {
        const bool branch_taken_0x22f9e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f9e8) {
            ctx->pc = 0x22F9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F9E8u;
            // 0x22f9ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22F9F0u;
    // 0x22f9f0: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x22f9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22f9f4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22f9f8: 0x2462fff7  addiu       $v0, $v1, -0x9
    ctx->pc = 0x22f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x22f9fc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22f9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x22fa00: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x22FA00u;
    {
        const bool branch_taken_0x22fa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa00) {
            ctx->pc = 0x22FA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA00u;
            // 0x22fa04: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FA08u;
    // 0x22fa08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fa0c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22FA0Cu;
    {
        const bool branch_taken_0x22fa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA0Cu;
        // 0x22fa10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa0c) {
            ctx->pc = 0x22FA58u;
            goto label_22fa58;
        }
    }
    ctx->pc = 0x22FA14u;
    // 0x22fa14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fa18: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22FA18u;
    {
        const bool branch_taken_0x22fa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA18u;
        // 0x22fa1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa18) {
            ctx->pc = 0x22FA58u;
            goto label_22fa58;
        }
    }
    ctx->pc = 0x22FA20u;
    // 0x22fa20: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22FA20u;
    {
        const bool branch_taken_0x22fa20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA20u;
        // 0x22fa24: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa20) {
            ctx->pc = 0x22FA58u;
            goto label_22fa58;
        }
    }
    ctx->pc = 0x22FA28u;
    // 0x22fa28: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22FA28u;
    {
        const bool branch_taken_0x22fa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA28u;
        // 0x22fa2c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa28) {
            ctx->pc = 0x22FA58u;
            goto label_22fa58;
        }
    }
    ctx->pc = 0x22FA30u;
    // 0x22fa30: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22FA30u;
    {
        const bool branch_taken_0x22fa30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fa30) {
            ctx->pc = 0x22FA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA30u;
            // 0x22fa34: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA5Cu;
            goto label_22fa5c;
        }
    }
    ctx->pc = 0x22FA38u;
    // 0x22fa38: 0xc0924a6  jal         func_249298
    ctx->pc = 0x22FA38u;
    SET_GPR_U32(ctx, 31, 0x22FA40u);
    ctx->pc = 0x22FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA38u;
    // 0x22fa3c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249298u, 0x22FA38u, 0x22FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA40u;
label_22fa40:
    // 0x22fa40: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FA40u;
    {
        const bool branch_taken_0x22fa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa40) {
            ctx->pc = 0x22FA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA40u;
            // 0x22fa44: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA5Cu;
            goto label_22fa5c;
        }
    }
    ctx->pc = 0x22FA48u;
    // 0x22fa48: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x22fa4c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22fa50: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FA50u;
    {
        const bool branch_taken_0x22fa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22fa50) {
            ctx->pc = 0x22FA5Cu;
            goto label_22fa5c;
        }
    }
    ctx->pc = 0x22FA58u;
label_22fa58:
    // 0x22fa58: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22fa58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fa5c:
    // 0x22fa5c: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22FA5Cu;
    {
        const bool branch_taken_0x22fa5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa5c) {
            ctx->pc = 0x22FA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA5Cu;
            // 0x22fa60: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA98u;
            goto label_22fa98;
        }
    }
    ctx->pc = 0x22FA64u;
    // 0x22fa64: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x22fa68: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22fa6c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22FA6Cu;
    {
        const bool branch_taken_0x22fa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa6c) {
            ctx->pc = 0x22FA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA6Cu;
            // 0x22fa70: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FA74u;
    // 0x22fa74: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x22fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x22fa78: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22fa7c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x22fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x22fa80: 0x50440005  beql        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FA80u;
    {
        const bool branch_taken_0x22fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x22fa80) {
            ctx->pc = 0x22FA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA80u;
            // 0x22fa84: 0x8e220334  lw          $v0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA98u;
            goto label_22fa98;
        }
    }
    ctx->pc = 0x22FA88u;
    // 0x22fa88: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x22fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x22fa8c: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FA8Cu;
    {
        const bool branch_taken_0x22fa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22fa8c) {
            ctx->pc = 0x22FA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA8Cu;
            // 0x22fa90: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FA94u;
    // 0x22fa94: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_22fa98:
    // 0x22fa98: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22fa9c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22faa0: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x22FAA0u;
    {
        const bool branch_taken_0x22faa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22faa0) {
            ctx->pc = 0x22FAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FAA0u;
            // 0x22faa4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FAA8u;
label_22faa8:
    // 0x22faa8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FAA8u;
    {
        const bool branch_taken_0x22faa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAA8u;
        // 0x22faac: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faa8) {
            ctx->pc = 0x22FABCu;
            goto label_22fabc;
        }
    }
    ctx->pc = 0x22FAB0u;
    // 0x22fab0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FAB0u;
    {
        const bool branch_taken_0x22fab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB0u;
        // 0x22fab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fab0) {
            ctx->pc = 0x22FABCu;
            goto label_22fabc;
        }
    }
    ctx->pc = 0x22FAB8u;
    // 0x22fab8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x22fab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22fabc:
    // 0x22fabc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22fac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22fac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22facc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22faccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fad0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22fad0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22fad4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22fad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fad8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAD8u;
        // 0x22fadc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FAE0u;
}
