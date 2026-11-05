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

// Function: sub_00307808
// Address: 0x307808 - 0x3079f8
void sub_00307808_0x307808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307808_0x307808");
#endif

    switch (ctx->pc) {
        case 0x307820u: goto label_307820;
        case 0x307834u: goto label_307834;
        case 0x30794cu: goto label_30794c;
        case 0x307954u: goto label_307954;
        case 0x307964u: goto label_307964;
        case 0x307974u: goto label_307974;
        case 0x307984u: goto label_307984;
        case 0x30799cu: goto label_30799c;
        case 0x3079a4u: goto label_3079a4;
        case 0x3079acu: goto label_3079ac;
        case 0x3079c0u: goto label_3079c0;
        case 0x3079d0u: goto label_3079d0;
        case 0x3079e0u: goto label_3079e0;
        default: break;
    }

    ctx->pc = 0x307808u;

    // 0x307808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30780c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30780cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x307818: 0xc090d46  jal         func_243518
    ctx->pc = 0x307818u;
    SET_GPR_U32(ctx, 31, 0x307820u);
    ctx->pc = 0x30781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307818u;
    // 0x30781c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243518u, 0x307818u, 0x307820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307820u;
label_307820:
    // 0x307820: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30782c: 0xc092432  jal         func_2490C8
    ctx->pc = 0x30782Cu;
    SET_GPR_U32(ctx, 31, 0x307834u);
    ctx->pc = 0x307830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30782Cu;
    // 0x307830: 0xa20210dc  sb          $v0, 0x10DC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4316), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x30782Cu, 0x307834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307834u;
label_307834:
    // 0x307834: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x307834u;
    {
        const bool branch_taken_0x307834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307834) {
            ctx->pc = 0x307838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307834u;
            // 0x307838: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307850u;
            goto label_307850;
        }
    }
    ctx->pc = 0x30783Cu;
    // 0x30783c: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x30783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x307840: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x307840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x307844: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307844u;
    {
        const bool branch_taken_0x307844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307844) {
            ctx->pc = 0x307848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307844u;
            // 0x307848: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307854u;
            goto label_307854;
        }
    }
    ctx->pc = 0x30784Cu;
    // 0x30784c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30784cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307850:
    // 0x307850: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x307850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_307854:
    // 0x307854: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x307854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x307858: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x307858u;
    {
        const bool branch_taken_0x307858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307858) {
            ctx->pc = 0x30785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307858u;
            // 0x30785c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079E4u;
            goto label_3079e4;
        }
    }
    ctx->pc = 0x307860u;
    // 0x307860: 0x8e050338  lw          $a1, 0x338($s0)
    ctx->pc = 0x307860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307864: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x307864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x307868: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30786c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x30786cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x307870: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307870u;
    {
        const bool branch_taken_0x307870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307870u;
        // 0x307874: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307870) {
            ctx->pc = 0x30788Cu;
            goto label_30788c;
        }
    }
    ctx->pc = 0x307878u;
    // 0x307878: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x307878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30787c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x307880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x307880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307884: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x307884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x307888: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x307888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_30788c:
    // 0x30788c: 0x50600055  beql        $v1, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x30788Cu;
    {
        const bool branch_taken_0x30788c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30788c) {
            ctx->pc = 0x307890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30788Cu;
            // 0x307890: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079E4u;
            goto label_3079e4;
        }
    }
    ctx->pc = 0x307894u;
    // 0x307894: 0x1620002b  bnez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x307894u;
    {
        const bool branch_taken_0x307894 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x307894) {
            ctx->pc = 0x307944u;
            goto label_307944;
        }
    }
    ctx->pc = 0x30789Cu;
    // 0x30789c: 0x8ca20098  lw          $v0, 0x98($a1)
    ctx->pc = 0x30789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x3078a0: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3078A0u;
    {
        const bool branch_taken_0x3078a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3078a0) {
            ctx->pc = 0x307944u;
            goto label_307944;
        }
    }
    ctx->pc = 0x3078A8u;
    // 0x3078a8: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x3078a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x3078ac: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3078acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3078b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3078b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3078b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3078B4u;
    {
        const bool branch_taken_0x3078b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3078B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078B4u;
        // 0x3078b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078b4) {
            ctx->pc = 0x3078D0u;
            goto label_3078d0;
        }
    }
    ctx->pc = 0x3078BCu;
    // 0x3078bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3078bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3078c0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3078c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3078c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3078c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3078c8: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x3078c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3078cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3078ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3078d0:
    // 0x3078d0: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3078D0u;
    {
        const bool branch_taken_0x3078d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3078D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078D0u;
        // 0x3078d4: 0x38820003  xori        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078d0) {
            ctx->pc = 0x307944u;
            goto label_307944;
        }
    }
    ctx->pc = 0x3078D8u;
    // 0x3078d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3078D8u;
    {
        const bool branch_taken_0x3078d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078D8u;
        // 0x3078dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078d8) {
            ctx->pc = 0x3078F4u;
            goto label_3078f4;
        }
    }
    ctx->pc = 0x3078E0u;
    // 0x3078e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3078e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3078e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3078e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3078e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3078e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3078ec: 0x28630046  slti        $v1, $v1, 0x46
    ctx->pc = 0x3078ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x3078f0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3078f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3078f4:
    // 0x3078f4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3078F4u;
    {
        const bool branch_taken_0x3078f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3078F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078F4u;
        // 0x3078f8: 0x2482ffee  addiu       $v0, $a0, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078f4) {
            ctx->pc = 0x307944u;
            goto label_307944;
        }
    }
    ctx->pc = 0x3078FCu;
    // 0x3078fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3078fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x307900: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x307900u;
    {
        const bool branch_taken_0x307900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307900u;
        // 0x307904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307900) {
            ctx->pc = 0x30793Cu;
            goto label_30793c;
        }
    }
    ctx->pc = 0x307908u;
    // 0x307908: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x307908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30790c: 0x2403015b  addiu       $v1, $zero, 0x15B
    ctx->pc = 0x30790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x307910: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x307910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x307914: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x307914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307918: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x307918u;
    {
        const bool branch_taken_0x307918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307918u;
        // 0x30791c: 0x2402015c  addiu       $v0, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307918) {
            ctx->pc = 0x307938u;
            goto label_307938;
        }
    }
    ctx->pc = 0x307920u;
    // 0x307920: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307920u;
    {
        const bool branch_taken_0x307920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x307924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307920u;
        // 0x307924: 0x2402015e  addiu       $v0, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307920) {
            ctx->pc = 0x307938u;
            goto label_307938;
        }
    }
    ctx->pc = 0x307928u;
    // 0x307928: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307928u;
    {
        const bool branch_taken_0x307928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307928u;
        // 0x30792c: 0x2402015f  addiu       $v0, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307928) {
            ctx->pc = 0x307938u;
            goto label_307938;
        }
    }
    ctx->pc = 0x307930u;
    // 0x307930: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x307930u;
    {
        const bool branch_taken_0x307930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x307930) {
            ctx->pc = 0x30793Cu;
            goto label_30793c;
        }
    }
    ctx->pc = 0x307938u;
label_307938:
    // 0x307938: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x307938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30793c:
    // 0x30793c: 0x50c00029  beql        $a2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x30793Cu;
    {
        const bool branch_taken_0x30793c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30793c) {
            ctx->pc = 0x307940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30793Cu;
            // 0x307940: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079E4u;
            goto label_3079e4;
        }
    }
    ctx->pc = 0x307944u;
label_307944:
    // 0x307944: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x307944u;
    SET_GPR_U32(ctx, 31, 0x30794Cu);
    ctx->pc = 0x307948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307944u;
    // 0x307948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307944u, 0x30794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30794Cu;
label_30794c:
    // 0x30794c: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x30794Cu;
    SET_GPR_U32(ctx, 31, 0x307954u);
    ctx->pc = 0x307950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30794Cu;
    // 0x307950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x30794Cu, 0x307954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307954u;
label_307954:
    // 0x307954: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x307954u;
    {
        const bool branch_taken_0x307954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307954u;
        // 0x307958: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307954) {
            ctx->pc = 0x3079C8u;
            goto label_3079c8;
        }
    }
    ctx->pc = 0x30795Cu;
    // 0x30795c: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x30795Cu;
    SET_GPR_U32(ctx, 31, 0x307964u);
    ctx->pc = 0x307960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30795Cu;
    // 0x307960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x30795Cu, 0x307964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307964u;
label_307964:
    // 0x307964: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307964u;
    {
        const bool branch_taken_0x307964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307964) {
            ctx->pc = 0x307968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307964u;
            // 0x307968: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30798Cu;
            goto label_30798c;
        }
    }
    ctx->pc = 0x30796Cu;
    // 0x30796c: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x30796Cu;
    SET_GPR_U32(ctx, 31, 0x307974u);
    ctx->pc = 0x307970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30796Cu;
    // 0x307970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x30796Cu, 0x307974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307974u;
label_307974:
    // 0x307974: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x307974u;
    {
        const bool branch_taken_0x307974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307974) {
            ctx->pc = 0x307978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307974u;
            // 0x307978: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30798Cu;
            goto label_30798c;
        }
    }
    ctx->pc = 0x30797Cu;
    // 0x30797c: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x30797Cu;
    SET_GPR_U32(ctx, 31, 0x307984u);
    ctx->pc = 0x307980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30797Cu;
    // 0x307980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x30797Cu, 0x307984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307984u;
label_307984:
    // 0x307984: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x307984u;
    {
        const bool branch_taken_0x307984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307984) {
            ctx->pc = 0x307988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307984u;
            // 0x307988: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30798Cu;
            goto label_30798c;
        }
    }
    ctx->pc = 0x30798Cu;
label_30798c:
    // 0x30798c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x30798Cu;
    {
        const bool branch_taken_0x30798c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x30798c) {
            ctx->pc = 0x3079C8u;
            goto label_3079c8;
        }
    }
    ctx->pc = 0x307994u;
    // 0x307994: 0xc0a03d0  jal         func_280F40
    ctx->pc = 0x307994u;
    SET_GPR_U32(ctx, 31, 0x30799Cu);
    ctx->pc = 0x280F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F40u, 0x307994u, 0x30799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30799Cu;
label_30799c:
    // 0x30799c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x30799Cu;
    SET_GPR_U32(ctx, 31, 0x3079A4u);
    ctx->pc = 0x3079A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30799Cu;
    // 0x3079a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x30799Cu, 0x3079A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079A4u;
label_3079a4:
    // 0x3079a4: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x3079A4u;
    SET_GPR_U32(ctx, 31, 0x3079ACu);
    ctx->pc = 0x3079A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079A4u;
    // 0x3079a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x3079A4u, 0x3079ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079ACu;
label_3079ac:
    // 0x3079ac: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x3079acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x3079b0: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3079B0u;
    {
        const bool branch_taken_0x3079b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3079B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079B0u;
        // 0x3079b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079b0) {
            ctx->pc = 0x3079E4u;
            goto label_3079e4;
        }
    }
    ctx->pc = 0x3079B8u;
    // 0x3079b8: 0xc0a03dc  jal         func_280F70
    ctx->pc = 0x3079B8u;
    SET_GPR_U32(ctx, 31, 0x3079C0u);
    ctx->pc = 0x3079BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079B8u;
    // 0x3079bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F70u, 0x3079B8u, 0x3079C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079C0u;
label_3079c0:
    // 0x3079c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3079C0u;
    {
        const bool branch_taken_0x3079c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079C0u;
        // 0x3079c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079c0) {
            ctx->pc = 0x3079E4u;
            goto label_3079e4;
        }
    }
    ctx->pc = 0x3079C8u;
label_3079c8:
    // 0x3079c8: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x3079C8u;
    SET_GPR_U32(ctx, 31, 0x3079D0u);
    ctx->pc = 0x3079CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079C8u;
    // 0x3079cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x3079C8u, 0x3079D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079D0u;
label_3079d0:
    // 0x3079d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3079D0u;
    {
        const bool branch_taken_0x3079d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3079D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079D0u;
        // 0x3079d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079d0) {
            ctx->pc = 0x3079E4u;
            goto label_3079e4;
        }
    }
    ctx->pc = 0x3079D8u;
    // 0x3079d8: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x3079D8u;
    SET_GPR_U32(ctx, 31, 0x3079E0u);
    ctx->pc = 0x3079DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079D8u;
    // 0x3079dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x3079D8u, 0x3079E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079E0u;
label_3079e0:
    // 0x3079e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3079e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3079e4:
    // 0x3079e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3079e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3079e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3079e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3079ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3079ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3079F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079ECu;
        // 0x3079f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3079F4u;
    // 0x3079f4: 0x0  nop
    ctx->pc = 0x3079f4u;
    // NOP
    ctx->pc = 0x3079f8u;
}
