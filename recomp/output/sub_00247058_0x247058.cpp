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

// Function: sub_00247058
// Address: 0x247058 - 0x247650
void sub_00247058_0x247058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247058_0x247058");
#endif

    switch (ctx->pc) {
        case 0x2470b4u: goto label_2470b4;
        case 0x247118u: goto label_247118;
        case 0x247154u: goto label_247154;
        case 0x2471b8u: goto label_2471b8;
        case 0x2471f4u: goto label_2471f4;
        case 0x24725cu: goto label_24725c;
        case 0x247290u: goto label_247290;
        case 0x24730cu: goto label_24730c;
        case 0x247318u: goto label_247318;
        case 0x247350u: goto label_247350;
        case 0x247370u: goto label_247370;
        case 0x247380u: goto label_247380;
        case 0x2473b4u: goto label_2473b4;
        case 0x24742cu: goto label_24742c;
        case 0x2474acu: goto label_2474ac;
        case 0x247510u: goto label_247510;
        case 0x247544u: goto label_247544;
        case 0x2475c0u: goto label_2475c0;
        case 0x247628u: goto label_247628;
        default: break;
    }

    ctx->pc = 0x247058u;

    // 0x247058: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24705c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x247060: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x247060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x247064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x247064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247068: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x247068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x24706c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24706cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247070: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x247070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x247074: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247078: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x247078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x24707c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x24707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x247080: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x247080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x247084: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x247084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x247088: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x24708c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247090: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x247090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x247094: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x247094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247098: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247098u;
    {
        const bool branch_taken_0x247098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247098u;
        // 0x24709c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247098) {
            ctx->pc = 0x2470D4u;
            goto label_2470d4;
        }
    }
    ctx->pc = 0x2470A0u;
    // 0x2470a0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2470a4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2470A4u;
    {
        const bool branch_taken_0x2470a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2470a4) {
            ctx->pc = 0x2470A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470A4u;
            // 0x2470a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470D8u;
            goto label_2470d8;
        }
    }
    ctx->pc = 0x2470ACu;
    // 0x2470ac: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2470ACu;
    SET_GPR_U32(ctx, 31, 0x2470B4u);
    ctx->pc = 0x2470B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470ACu;
    // 0x2470b0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2470ACu, 0x2470B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B4u;
label_2470b4:
    // 0x2470b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2470B4u;
    {
        const bool branch_taken_0x2470b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2470b4) {
            ctx->pc = 0x2470B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470B4u;
            // 0x2470b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2470D8u;
            goto label_2470d8;
        }
    }
    ctx->pc = 0x2470BCu;
    // 0x2470bc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2470bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2470c0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2470c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2470c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2470C4u;
    {
        const bool branch_taken_0x2470c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2470C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470C4u;
        // 0x2470c8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470c4) {
            ctx->pc = 0x2470D4u;
            goto label_2470d4;
        }
    }
    ctx->pc = 0x2470CCu;
    // 0x2470cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2470CCu;
    {
        const bool branch_taken_0x2470cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2470cc) {
            ctx->pc = 0x2470D8u;
            goto label_2470d8;
        }
    }
    ctx->pc = 0x2470D4u;
label_2470d4:
    // 0x2470d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2470d8:
    // 0x2470d8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2470D8u;
    {
        const bool branch_taken_0x2470d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2470d8) {
            ctx->pc = 0x2470F8u;
            goto label_2470f8;
        }
    }
    ctx->pc = 0x2470E0u;
    // 0x2470e0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2470e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2470e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2470e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2470e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2470ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2470ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2470f0: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2470f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x2470f4: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2470f4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2470f8:
    // 0x2470f8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2470F8u;
    {
        const bool branch_taken_0x2470f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2470FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470F8u;
        // 0x2470fc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470f8) {
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x247100u;
    // 0x247100: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x247100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x247104: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x247104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x247108: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24710c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24710cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247110: 0xc046642  jal         func_119908
    ctx->pc = 0x247110u;
    SET_GPR_U32(ctx, 31, 0x247118u);
    ctx->pc = 0x247114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247110u;
    // 0x247114: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x247110u, 0x247118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247118u;
label_247118:
    // 0x247118: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x247118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24711c:
    // 0x24711c: 0x16c00027  bnez        $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x24711Cu;
    {
        const bool branch_taken_0x24711c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x247120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24711Cu;
        // 0x247120: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24711c) {
            ctx->pc = 0x2471BCu;
            goto label_2471bc;
        }
    }
    ctx->pc = 0x247124u;
    // 0x247124: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x247128: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24712c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247130: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x247134: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x247134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247138: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247138u;
    {
        const bool branch_taken_0x247138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247138u;
        // 0x24713c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247138) {
            ctx->pc = 0x247174u;
            goto label_247174;
        }
    }
    ctx->pc = 0x247140u;
    // 0x247140: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x247140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x247144: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247144u;
    {
        const bool branch_taken_0x247144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247144) {
            ctx->pc = 0x247148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247144u;
            // 0x247148: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247178u;
            goto label_247178;
        }
    }
    ctx->pc = 0x24714Cu;
    // 0x24714c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x24714Cu;
    SET_GPR_U32(ctx, 31, 0x247154u);
    ctx->pc = 0x247150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24714Cu;
    // 0x247150: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x24714Cu, 0x247154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247154u;
label_247154:
    // 0x247154: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x247154u;
    {
        const bool branch_taken_0x247154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247154) {
            ctx->pc = 0x247158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247154u;
            // 0x247158: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247178u;
            goto label_247178;
        }
    }
    ctx->pc = 0x24715Cu;
    // 0x24715c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247160: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x247164: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247164u;
    {
        const bool branch_taken_0x247164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247164u;
        // 0x247168: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247164) {
            ctx->pc = 0x247174u;
            goto label_247174;
        }
    }
    ctx->pc = 0x24716Cu;
    // 0x24716c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24716Cu;
    {
        const bool branch_taken_0x24716c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24716c) {
            ctx->pc = 0x247178u;
            goto label_247178;
        }
    }
    ctx->pc = 0x247174u;
label_247174:
    // 0x247174: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x247174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247178:
    // 0x247178: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x247178u;
    {
        const bool branch_taken_0x247178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247178) {
            ctx->pc = 0x247198u;
            goto label_247198;
        }
    }
    ctx->pc = 0x247180u;
    // 0x247180: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x247180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247188: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x247188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24718c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247190: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x247190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x247194: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x247194u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_247198:
    // 0x247198: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x247198u;
    {
        const bool branch_taken_0x247198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247198u;
        // 0x24719c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247198) {
            ctx->pc = 0x2471BCu;
            goto label_2471bc;
        }
    }
    ctx->pc = 0x2471A0u;
    // 0x2471a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2471a4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2471a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x2471a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2471a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2471b0: 0xc046642  jal         func_119908
    ctx->pc = 0x2471B0u;
    SET_GPR_U32(ctx, 31, 0x2471B8u);
    ctx->pc = 0x2471B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471B0u;
    // 0x2471b4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2471B0u, 0x2471B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471B8u;
label_2471b8:
    // 0x2471b8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2471b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2471bc:
    // 0x2471bc: 0x16800028  bnez        $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x2471BCu;
    {
        const bool branch_taken_0x2471bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471bc) {
            ctx->pc = 0x247260u;
            goto label_247260;
        }
    }
    ctx->pc = 0x2471C4u;
    // 0x2471c4: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2471c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2471c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2471c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471cc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2471d0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2471d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2471d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2471d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2471D8u;
    {
        const bool branch_taken_0x2471d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471D8u;
        // 0x2471dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471d8) {
            ctx->pc = 0x247214u;
            goto label_247214;
        }
    }
    ctx->pc = 0x2471E0u;
    // 0x2471e0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2471e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2471e4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2471E4u;
    {
        const bool branch_taken_0x2471e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2471e4) {
            ctx->pc = 0x2471E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2471E4u;
            // 0x2471e8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247218u;
            goto label_247218;
        }
    }
    ctx->pc = 0x2471ECu;
    // 0x2471ec: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2471ECu;
    SET_GPR_U32(ctx, 31, 0x2471F4u);
    ctx->pc = 0x2471F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471ECu;
    // 0x2471f0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2471ECu, 0x2471F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471F4u;
label_2471f4:
    // 0x2471f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2471F4u;
    {
        const bool branch_taken_0x2471f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2471f4) {
            ctx->pc = 0x2471F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2471F4u;
            // 0x2471f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247218u;
            goto label_247218;
        }
    }
    ctx->pc = 0x2471FCu;
    // 0x2471fc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2471fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247200: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x247200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x247204: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247204u;
    {
        const bool branch_taken_0x247204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247204u;
        // 0x247208: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247204) {
            ctx->pc = 0x247214u;
            goto label_247214;
        }
    }
    ctx->pc = 0x24720Cu;
    // 0x24720c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24720Cu;
    {
        const bool branch_taken_0x24720c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24720c) {
            ctx->pc = 0x247218u;
            goto label_247218;
        }
    }
    ctx->pc = 0x247214u;
label_247214:
    // 0x247214: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x247214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247218:
    // 0x247218: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x247218u;
    {
        const bool branch_taken_0x247218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247218) {
            ctx->pc = 0x24723Cu;
            goto label_24723c;
        }
    }
    ctx->pc = 0x247220u;
    // 0x247220: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x247220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247228: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x247228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24722c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247230: 0x28430059  slti        $v1, $v0, 0x59
    ctx->pc = 0x247230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x247234: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x247234u;
    {
        const bool branch_taken_0x247234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247234) {
            ctx->pc = 0x247238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247234u;
            // 0x247238: 0x2853005d  slti        $s3, $v0, 0x5D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)93) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24723Cu;
            goto label_24723c;
        }
    }
    ctx->pc = 0x24723Cu;
label_24723c:
    // 0x24723c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x24723Cu;
    {
        const bool branch_taken_0x24723c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x247240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24723Cu;
        // 0x247240: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24723c) {
            ctx->pc = 0x247260u;
            goto label_247260;
        }
    }
    ctx->pc = 0x247244u;
    // 0x247244: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x247244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247248: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x247248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x24724c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24724cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247250: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247254: 0xc046642  jal         func_119908
    ctx->pc = 0x247254u;
    SET_GPR_U32(ctx, 31, 0x24725Cu);
    ctx->pc = 0x247258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247254u;
    // 0x247258: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x247254u, 0x24725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24725Cu;
label_24725c:
    // 0x24725c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247260:
    // 0x247260: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x247264: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247268: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x247268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24726c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x24726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x247270: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x247270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247274: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247274u;
    {
        const bool branch_taken_0x247274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247274u;
        // 0x247278: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247274) {
            ctx->pc = 0x2472B0u;
            goto label_2472b0;
        }
    }
    ctx->pc = 0x24727Cu;
    // 0x24727c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x247280: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247280u;
    {
        const bool branch_taken_0x247280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247280) {
            ctx->pc = 0x247284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247280u;
            // 0x247284: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472B4u;
            goto label_2472b4;
        }
    }
    ctx->pc = 0x247288u;
    // 0x247288: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x247288u;
    SET_GPR_U32(ctx, 31, 0x247290u);
    ctx->pc = 0x24728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247288u;
    // 0x24728c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x247288u, 0x247290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247290u;
label_247290:
    // 0x247290: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x247290u;
    {
        const bool branch_taken_0x247290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247290) {
            ctx->pc = 0x247294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247290u;
            // 0x247294: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472B4u;
            goto label_2472b4;
        }
    }
    ctx->pc = 0x247298u;
    // 0x247298: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x247298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24729c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x24729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2472a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2472A0u;
    {
        const bool branch_taken_0x2472a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2472A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472A0u;
        // 0x2472a4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472a0) {
            ctx->pc = 0x2472B0u;
            goto label_2472b0;
        }
    }
    ctx->pc = 0x2472A8u;
    // 0x2472a8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2472A8u;
    {
        const bool branch_taken_0x2472a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2472a8) {
            ctx->pc = 0x2472B4u;
            goto label_2472b4;
        }
    }
    ctx->pc = 0x2472B0u;
label_2472b0:
    // 0x2472b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2472b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2472b4:
    // 0x2472b4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2472B4u;
    {
        const bool branch_taken_0x2472b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472b4) {
            ctx->pc = 0x2472D8u;
            goto label_2472d8;
        }
    }
    ctx->pc = 0x2472BCu;
    // 0x2472bc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2472bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2472c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2472c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2472c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2472c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2472c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2472c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2472cc: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x2472ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2472d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2472D0u;
    {
        const bool branch_taken_0x2472d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472d0) {
            ctx->pc = 0x2472D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472D0u;
            // 0x2472d4: 0x2853003d  slti        $s3, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472D8u;
            goto label_2472d8;
        }
    }
    ctx->pc = 0x2472D8u;
label_2472d8:
    // 0x2472d8: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2472D8u;
    {
        const bool branch_taken_0x2472d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2472d8) {
            ctx->pc = 0x2472DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472D8u;
            // 0x2472dc: 0x8e220710  lw          $v0, 0x710($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472FCu;
            goto label_2472fc;
        }
    }
    ctx->pc = 0x2472E0u;
    // 0x2472e0: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2472E0u;
    {
        const bool branch_taken_0x2472e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2472e0) {
            ctx->pc = 0x2472E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472E0u;
            // 0x2472e4: 0x8e220710  lw          $v0, 0x710($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472FCu;
            goto label_2472fc;
        }
    }
    ctx->pc = 0x2472E8u;
    // 0x2472e8: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2472E8u;
    {
        const bool branch_taken_0x2472e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2472e8) {
            ctx->pc = 0x2472ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472E8u;
            // 0x2472ec: 0x8e220710  lw          $v0, 0x710($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2472FCu;
            goto label_2472fc;
        }
    }
    ctx->pc = 0x2472F0u;
    // 0x2472f0: 0x52a00024  beql        $s5, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2472F0u;
    {
        const bool branch_taken_0x2472f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472f0) {
            ctx->pc = 0x2472F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472F0u;
            // 0x2472f4: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247384u;
            goto label_247384;
        }
    }
    ctx->pc = 0x2472F8u;
    // 0x2472f8: 0x8e220710  lw          $v0, 0x710($s1)
    ctx->pc = 0x2472f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1808)));
label_2472fc:
    // 0x2472fc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2472FCu;
    {
        const bool branch_taken_0x2472fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472fc) {
            ctx->pc = 0x247300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2472FCu;
            // 0x247300: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247384u;
            goto label_247384;
        }
    }
    ctx->pc = 0x247304u;
    // 0x247304: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x247304u;
    SET_GPR_U32(ctx, 31, 0x24730Cu);
    ctx->pc = 0x247308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247304u;
    // 0x247308: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x247304u, 0x24730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24730Cu;
label_24730c:
    // 0x24730c: 0x8e250714  lw          $a1, 0x714($s1)
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1812)));
    // 0x247310: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x247310u;
    SET_GPR_U32(ctx, 31, 0x247318u);
    ctx->pc = 0x247314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247310u;
    // 0x247314: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x247310u, 0x247318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247318u;
label_247318:
    // 0x247318: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x247318u;
    {
        const bool branch_taken_0x247318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247318) {
            ctx->pc = 0x247358u;
            goto label_247358;
        }
    }
    ctx->pc = 0x247320u;
    // 0x247320: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x247320u;
    {
        const bool branch_taken_0x247320 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x247324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247320u;
        // 0x247324: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247320) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247328u;
    // 0x247328: 0x16c00013  bnez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x247328u;
    {
        const bool branch_taken_0x247328 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x247328) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247330u;
    // 0x247330: 0x16a00011  bnez        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x247330u;
    {
        const bool branch_taken_0x247330 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x247334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247330u;
        // 0x247334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247330) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247338u;
    // 0x247338: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x247338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x24733c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x24733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x247340: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247344: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247348: 0xc046642  jal         func_119908
    ctx->pc = 0x247348u;
    SET_GPR_U32(ctx, 31, 0x247350u);
    ctx->pc = 0x24734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247348u;
    // 0x24734c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x247348u, 0x247350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247350u;
label_247350:
    // 0x247350: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x247350u;
    {
        const bool branch_taken_0x247350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247350u;
        // 0x247354: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247350) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247358u;
label_247358:
    // 0x247358: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x247358u;
    {
        const bool branch_taken_0x247358 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x247358) {
            ctx->pc = 0x247368u;
            goto label_247368;
        }
    }
    ctx->pc = 0x247360u;
    // 0x247360: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x247360u;
    {
        const bool branch_taken_0x247360 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x247364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247360u;
        // 0x247364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247360) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247368u;
label_247368:
    // 0x247368: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x247368u;
    SET_GPR_U32(ctx, 31, 0x247370u);
    ctx->pc = 0x24736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247368u;
    // 0x24736c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x247368u, 0x247370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247370u;
label_247370:
    // 0x247370: 0xae220714  sw          $v0, 0x714($s1)
    ctx->pc = 0x247370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 2));
    // 0x247374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247378:
    // 0x247378: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x247378u;
    SET_GPR_U32(ctx, 31, 0x247380u);
    ctx->pc = 0x24737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247378u;
    // 0x24737c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x247378u, 0x247380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247380u;
label_247380:
    // 0x247380: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_247384:
    // 0x247384: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x247384u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24738c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247390: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x247394: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x247394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247398: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247398u;
    {
        const bool branch_taken_0x247398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247398u;
        // 0x24739c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247398) {
            ctx->pc = 0x2473D4u;
            goto label_2473d4;
        }
    }
    ctx->pc = 0x2473A0u;
    // 0x2473a0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2473a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2473a4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2473A4u;
    {
        const bool branch_taken_0x2473a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2473a4) {
            ctx->pc = 0x2473A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2473A4u;
            // 0x2473a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473D8u;
            goto label_2473d8;
        }
    }
    ctx->pc = 0x2473ACu;
    // 0x2473ac: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2473ACu;
    SET_GPR_U32(ctx, 31, 0x2473B4u);
    ctx->pc = 0x2473B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473ACu;
    // 0x2473b0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2473ACu, 0x2473B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473B4u;
label_2473b4:
    // 0x2473b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2473B4u;
    {
        const bool branch_taken_0x2473b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2473b4) {
            ctx->pc = 0x2473B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2473B4u;
            // 0x2473b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473D8u;
            goto label_2473d8;
        }
    }
    ctx->pc = 0x2473BCu;
    // 0x2473bc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2473bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2473c0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2473c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2473c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2473C4u;
    {
        const bool branch_taken_0x2473c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2473C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473C4u;
        // 0x2473c8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473c4) {
            ctx->pc = 0x2473D4u;
            goto label_2473d4;
        }
    }
    ctx->pc = 0x2473CCu;
    // 0x2473cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2473CCu;
    {
        const bool branch_taken_0x2473cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2473cc) {
            ctx->pc = 0x2473D8u;
            goto label_2473d8;
        }
    }
    ctx->pc = 0x2473D4u;
label_2473d4:
    // 0x2473d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2473d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2473d8:
    // 0x2473d8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2473D8u;
    {
        const bool branch_taken_0x2473d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2473d8) {
            ctx->pc = 0x2473F8u;
            goto label_2473f8;
        }
    }
    ctx->pc = 0x2473E0u;
    // 0x2473e0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2473e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2473e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2473e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2473e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2473e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2473ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2473ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2473f0: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x2473f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
    // 0x2473f4: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2473f4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2473f8:
    // 0x2473f8: 0x5660001f  bnel        $s3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2473F8u;
    {
        const bool branch_taken_0x2473f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2473f8) {
            ctx->pc = 0x2473FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2473F8u;
            // 0x2473fc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247478u;
            goto label_247478;
        }
    }
    ctx->pc = 0x247400u;
    // 0x247400: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247404: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247408: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x247408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x24740c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24740cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247410: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247410u;
    {
        const bool branch_taken_0x247410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247410u;
        // 0x247414: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247410) {
            ctx->pc = 0x24744Cu;
            goto label_24744c;
        }
    }
    ctx->pc = 0x247418u;
    // 0x247418: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x24741c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24741Cu;
    {
        const bool branch_taken_0x24741c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24741c) {
            ctx->pc = 0x247420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24741Cu;
            // 0x247420: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247450u;
            goto label_247450;
        }
    }
    ctx->pc = 0x247424u;
    // 0x247424: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x247424u;
    SET_GPR_U32(ctx, 31, 0x24742Cu);
    ctx->pc = 0x247428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247424u;
    // 0x247428: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x247424u, 0x24742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24742Cu;
label_24742c:
    // 0x24742c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24742Cu;
    {
        const bool branch_taken_0x24742c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24742c) {
            ctx->pc = 0x247430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24742Cu;
            // 0x247430: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247450u;
            goto label_247450;
        }
    }
    ctx->pc = 0x247434u;
    // 0x247434: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x247434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247438: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x24743c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24743Cu;
    {
        const bool branch_taken_0x24743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24743Cu;
        // 0x247440: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24743c) {
            ctx->pc = 0x24744Cu;
            goto label_24744c;
        }
    }
    ctx->pc = 0x247444u;
    // 0x247444: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x247444u;
    {
        const bool branch_taken_0x247444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247444) {
            ctx->pc = 0x247450u;
            goto label_247450;
        }
    }
    ctx->pc = 0x24744Cu;
label_24744c:
    // 0x24744c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247450:
    // 0x247450: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x247450u;
    {
        const bool branch_taken_0x247450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247450) {
            ctx->pc = 0x247470u;
            goto label_247470;
        }
    }
    ctx->pc = 0x247458u;
    // 0x247458: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x247458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24745c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247460: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x247460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x247464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x247464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247468: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x247468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
    // 0x24746c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x24746cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_247470:
    // 0x247470: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x247470u;
    {
        const bool branch_taken_0x247470 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x247470) {
            ctx->pc = 0x247474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247470u;
            // 0x247474: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247478u;
            goto label_247478;
        }
    }
    ctx->pc = 0x247478u;
label_247478:
    // 0x247478: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x247478u;
    {
        const bool branch_taken_0x247478 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247478u;
        // 0x24747c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247478) {
            ctx->pc = 0x247518u;
            goto label_247518;
        }
    }
    ctx->pc = 0x247480u;
    // 0x247480: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x247484: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x247484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247488: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x247488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x24748c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247490: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247490u;
    {
        const bool branch_taken_0x247490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247490u;
        // 0x247494: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247490) {
            ctx->pc = 0x2474CCu;
            goto label_2474cc;
        }
    }
    ctx->pc = 0x247498u;
    // 0x247498: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x247498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x24749c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24749Cu;
    {
        const bool branch_taken_0x24749c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24749c) {
            ctx->pc = 0x2474A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24749Cu;
            // 0x2474a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2474D0u;
            goto label_2474d0;
        }
    }
    ctx->pc = 0x2474A4u;
    // 0x2474a4: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2474A4u;
    SET_GPR_U32(ctx, 31, 0x2474ACu);
    ctx->pc = 0x2474A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474A4u;
    // 0x2474a8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2474A4u, 0x2474ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474ACu;
label_2474ac:
    // 0x2474ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2474ACu;
    {
        const bool branch_taken_0x2474ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2474ac) {
            ctx->pc = 0x2474B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2474ACu;
            // 0x2474b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2474D0u;
            goto label_2474d0;
        }
    }
    ctx->pc = 0x2474B4u;
    // 0x2474b4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2474b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2474b8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2474b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2474bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2474BCu;
    {
        const bool branch_taken_0x2474bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2474C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474BCu;
        // 0x2474c0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474bc) {
            ctx->pc = 0x2474CCu;
            goto label_2474cc;
        }
    }
    ctx->pc = 0x2474C4u;
    // 0x2474c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2474C4u;
    {
        const bool branch_taken_0x2474c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2474c4) {
            ctx->pc = 0x2474D0u;
            goto label_2474d0;
        }
    }
    ctx->pc = 0x2474CCu;
label_2474cc:
    // 0x2474cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2474ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2474d0:
    // 0x2474d0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2474D0u;
    {
        const bool branch_taken_0x2474d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2474d0) {
            ctx->pc = 0x2474F0u;
            goto label_2474f0;
        }
    }
    ctx->pc = 0x2474D8u;
    // 0x2474d8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2474dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2474dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2474e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2474e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2474e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2474e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2474e8: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x2474e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
    // 0x2474ec: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2474ecu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2474f0:
    // 0x2474f0: 0x1260004d  beqz        $s3, . + 4 + (0x4D << 2)
    ctx->pc = 0x2474F0u;
    {
        const bool branch_taken_0x2474f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474F0u;
        // 0x2474f4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474f0) {
            ctx->pc = 0x247628u;
            goto label_247628;
        }
    }
    ctx->pc = 0x2474F8u;
    // 0x2474f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2474f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474fc: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2474fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x247500: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247504: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247508: 0xc046642  jal         func_119908
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 31, 0x247510u);
    ctx->pc = 0x24750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247508u;
    // 0x24750c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x247508u, 0x247510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247510u;
label_247510:
    // 0x247510: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x247510u;
    {
        const bool branch_taken_0x247510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247510u;
        // 0x247514: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247510) {
            ctx->pc = 0x24762Cu;
            goto label_24762c;
        }
    }
    ctx->pc = 0x247518u;
label_247518:
    // 0x247518: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x24751c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247520: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x247524: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x247524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x247528: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247528u;
    {
        const bool branch_taken_0x247528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247528u;
        // 0x24752c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247528) {
            ctx->pc = 0x247564u;
            goto label_247564;
        }
    }
    ctx->pc = 0x247530u;
    // 0x247530: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x247530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x247534: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247534u;
    {
        const bool branch_taken_0x247534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247534) {
            ctx->pc = 0x247538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247534u;
            // 0x247538: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247568u;
            goto label_247568;
        }
    }
    ctx->pc = 0x24753Cu;
    // 0x24753c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x24753Cu;
    SET_GPR_U32(ctx, 31, 0x247544u);
    ctx->pc = 0x247540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24753Cu;
    // 0x247540: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x24753Cu, 0x247544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247544u;
label_247544:
    // 0x247544: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x247544u;
    {
        const bool branch_taken_0x247544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247544) {
            ctx->pc = 0x247548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247544u;
            // 0x247548: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247568u;
            goto label_247568;
        }
    }
    ctx->pc = 0x24754Cu;
    // 0x24754c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247550: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x247554: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247554u;
    {
        const bool branch_taken_0x247554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247554u;
        // 0x247558: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247554) {
            ctx->pc = 0x247564u;
            goto label_247564;
        }
    }
    ctx->pc = 0x24755Cu;
    // 0x24755c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24755Cu;
    {
        const bool branch_taken_0x24755c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24755c) {
            ctx->pc = 0x247568u;
            goto label_247568;
        }
    }
    ctx->pc = 0x247564u;
label_247564:
    // 0x247564: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247568:
    // 0x247568: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x247568u;
    {
        const bool branch_taken_0x247568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x247568) {
            ctx->pc = 0x247588u;
            goto label_247588;
        }
    }
    ctx->pc = 0x247570u;
    // 0x247570: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x247570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x247574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x247578: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24757c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247580: 0x3863004d  xori        $v1, $v1, 0x4D
    ctx->pc = 0x247580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)77);
    // 0x247584: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x247584u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_247588:
    // 0x247588: 0x56600021  bnel        $s3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x247588u;
    {
        const bool branch_taken_0x247588 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x247588) {
            ctx->pc = 0x24758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247588u;
            // 0x24758c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247610u;
            goto label_247610;
        }
    }
    ctx->pc = 0x247590u;
    // 0x247590: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x247594: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247598: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x247598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24759c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x24759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2475a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2475a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2475a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2475A4u;
    {
        const bool branch_taken_0x2475a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2475A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475A4u;
        // 0x2475a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475a4) {
            ctx->pc = 0x2475E0u;
            goto label_2475e0;
        }
    }
    ctx->pc = 0x2475ACu;
    // 0x2475ac: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2475b0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2475B0u;
    {
        const bool branch_taken_0x2475b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2475b0) {
            ctx->pc = 0x2475B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2475B0u;
            // 0x2475b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2475E4u;
            goto label_2475e4;
        }
    }
    ctx->pc = 0x2475B8u;
    // 0x2475b8: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2475B8u;
    SET_GPR_U32(ctx, 31, 0x2475C0u);
    ctx->pc = 0x2475BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475B8u;
    // 0x2475bc: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2475B8u, 0x2475C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475C0u;
label_2475c0:
    // 0x2475c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2475C0u;
    {
        const bool branch_taken_0x2475c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2475c0) {
            ctx->pc = 0x2475C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2475C0u;
            // 0x2475c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2475E4u;
            goto label_2475e4;
        }
    }
    ctx->pc = 0x2475C8u;
    // 0x2475c8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2475cc: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2475d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2475D0u;
    {
        const bool branch_taken_0x2475d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2475D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475D0u;
        // 0x2475d4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475d0) {
            ctx->pc = 0x2475E0u;
            goto label_2475e0;
        }
    }
    ctx->pc = 0x2475D8u;
    // 0x2475d8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2475D8u;
    {
        const bool branch_taken_0x2475d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2475d8) {
            ctx->pc = 0x2475E4u;
            goto label_2475e4;
        }
    }
    ctx->pc = 0x2475E0u;
label_2475e0:
    // 0x2475e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2475e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2475e4:
    // 0x2475e4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2475E4u;
    {
        const bool branch_taken_0x2475e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2475e4) {
            ctx->pc = 0x247608u;
            goto label_247608;
        }
    }
    ctx->pc = 0x2475ECu;
    // 0x2475ec: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2475ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2475f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2475f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2475f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2475f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2475f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2475fc: 0x28430055  slti        $v1, $v0, 0x55
    ctx->pc = 0x2475fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)85) ? 1 : 0);
    // 0x247600: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x247600u;
    {
        const bool branch_taken_0x247600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247600) {
            ctx->pc = 0x247604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247600u;
            // 0x247604: 0x28530059  slti        $s3, $v0, 0x59 (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x247608u;
            goto label_247608;
        }
    }
    ctx->pc = 0x247608u;
label_247608:
    // 0x247608: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x247608u;
    {
        const bool branch_taken_0x247608 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247608u;
        // 0x24760c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247608) {
            ctx->pc = 0x247628u;
            goto label_247628;
        }
    }
    ctx->pc = 0x247610u;
label_247610:
    // 0x247610: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x247610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247614: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x247614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x247618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24761c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24761cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247620: 0xc046642  jal         func_119908
    ctx->pc = 0x247620u;
    SET_GPR_U32(ctx, 31, 0x247628u);
    ctx->pc = 0x247624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247620u;
    // 0x247624: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x247620u, 0x247628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247628u;
label_247628:
    // 0x247628: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x247628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24762c:
    // 0x24762c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24762cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247630: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x247630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247634: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x247634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247638: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x247638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24763c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x24763cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x247640: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x247640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247644: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x247644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x247648: 0x3e00008  jr          $ra
    ctx->pc = 0x247648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247648u;
        // 0x24764c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247650u;
}
