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

// Function: sub_001AD900
// Address: 0x1ad900 - 0x1ada18
void sub_001AD900_0x1ad900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD900_0x1ad900");
#endif

    switch (ctx->pc) {
        case 0x1ad9f4u: goto label_1ad9f4;
        default: break;
    }

    ctx->pc = 0x1ad900u;

    // 0x1ad900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad90c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ad910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ad914: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1ad914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad918: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD918u;
    {
        const bool branch_taken_0x1ad918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD918u;
        // 0x1ad91c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad918) {
            ctx->pc = 0x1AD930u;
            goto label_1ad930;
        }
    }
    ctx->pc = 0x1AD920u;
    // 0x1ad920: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1ad920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ad924: 0x28620292  slti        $v0, $v1, 0x292
    ctx->pc = 0x1ad924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)658) ? 1 : 0);
    // 0x1ad928: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD928u;
    {
        const bool branch_taken_0x1ad928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad928) {
            ctx->pc = 0x1AD92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD928u;
            // 0x1ad92c: 0x2865033b  slti        $a1, $v1, 0x33B (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)827) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD930u;
            goto label_1ad930;
        }
    }
    ctx->pc = 0x1AD930u;
label_1ad930:
    // 0x1ad930: 0x54a00033  bnel        $a1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1AD930u;
    {
        const bool branch_taken_0x1ad930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad930) {
            ctx->pc = 0x1AD934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD930u;
            // 0x1ad934: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA00u;
            goto label_1ada00;
        }
    }
    ctx->pc = 0x1AD938u;
    // 0x1ad938: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x1ad938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad93c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad940: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD940u;
    {
        const bool branch_taken_0x1ad940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD940u;
        // 0x1ad944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad940) {
            ctx->pc = 0x1AD958u;
            goto label_1ad958;
        }
    }
    ctx->pc = 0x1AD948u;
    // 0x1ad948: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1ad948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ad94c: 0x2862033b  slti        $v0, $v1, 0x33B
    ctx->pc = 0x1ad94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)827) ? 1 : 0);
    // 0x1ad950: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD950u;
    {
        const bool branch_taken_0x1ad950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad950) {
            ctx->pc = 0x1AD954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD950u;
            // 0x1ad954: 0x2866035c  slti        $a2, $v1, 0x35C (Delay Slot)
            SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)860) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD958u;
            goto label_1ad958;
        }
    }
    ctx->pc = 0x1AD958u;
label_1ad958:
    // 0x1ad958: 0x54c00029  bnel        $a2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AD958u;
    {
        const bool branch_taken_0x1ad958 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad958) {
            ctx->pc = 0x1AD95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD958u;
            // 0x1ad95c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA00u;
            goto label_1ada00;
        }
    }
    ctx->pc = 0x1AD960u;
    // 0x1ad960: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad964: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD964u;
    {
        const bool branch_taken_0x1ad964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD964u;
        // 0x1ad968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad964) {
            ctx->pc = 0x1AD98Cu;
            goto label_1ad98c;
        }
    }
    ctx->pc = 0x1AD96Cu;
    // 0x1ad96c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1ad96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ad970: 0x28620292  slti        $v0, $v1, 0x292
    ctx->pc = 0x1ad970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)658) ? 1 : 0);
    // 0x1ad974: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD974u;
    {
        const bool branch_taken_0x1ad974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD974u;
        // 0x1ad978: 0x2862033b  slti        $v0, $v1, 0x33B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)827) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad974) {
            ctx->pc = 0x1AD98Cu;
            goto label_1ad98c;
        }
    }
    ctx->pc = 0x1AD97Cu;
    // 0x1ad97c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD97Cu;
    {
        const bool branch_taken_0x1ad97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD97Cu;
        // 0x1ad980: 0x2462fd6e  addiu       $v0, $v1, -0x292 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad97c) {
            ctx->pc = 0x1AD98Cu;
            goto label_1ad98c;
        }
    }
    ctx->pc = 0x1AD984u;
    // 0x1ad984: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ad984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1ad988: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1ad988u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ad98c:
    // 0x1ad98c: 0x54c0001c  bnel        $a2, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AD98Cu;
    {
        const bool branch_taken_0x1ad98c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad98c) {
            ctx->pc = 0x1AD990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD98Cu;
            // 0x1ad990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA00u;
            goto label_1ada00;
        }
    }
    ctx->pc = 0x1AD994u;
    // 0x1ad994: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ad998: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD998u;
    {
        const bool branch_taken_0x1ad998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD998u;
        // 0x1ad99c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad998) {
            ctx->pc = 0x1AD9ACu;
            goto label_1ad9ac;
        }
    }
    ctx->pc = 0x1AD9A0u;
    // 0x1ad9a0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1ad9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ad9a4: 0x3842033a  xori        $v0, $v0, 0x33A
    ctx->pc = 0x1ad9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)826);
    // 0x1ad9a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ad9ac:
    // 0x1ad9ac: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AD9ACu;
    {
        const bool branch_taken_0x1ad9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9ac) {
            ctx->pc = 0x1AD9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD9ACu;
            // 0x1ad9b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA00u;
            goto label_1ada00;
        }
    }
    ctx->pc = 0x1AD9B4u;
    // 0x1ad9b4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD9B4u;
    {
        const bool branch_taken_0x1ad9b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9B4u;
        // 0x1ad9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9b4) {
            ctx->pc = 0x1AD9C8u;
            goto label_1ad9c8;
        }
    }
    ctx->pc = 0x1AD9BCu;
    // 0x1ad9bc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1ad9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ad9c0: 0x2442fca4  addiu       $v0, $v0, -0x35C
    ctx->pc = 0x1ad9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966436));
    // 0x1ad9c4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1ad9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ad9c8:
    // 0x1ad9c8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AD9C8u;
    {
        const bool branch_taken_0x1ad9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9c8) {
            ctx->pc = 0x1AD9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD9C8u;
            // 0x1ad9cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA00u;
            goto label_1ada00;
        }
    }
    ctx->pc = 0x1AD9D0u;
    // 0x1ad9d0: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD9D0u;
    {
        const bool branch_taken_0x1ad9d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9D0u;
        // 0x1ad9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9d0) {
            ctx->pc = 0x1AD9E4u;
            goto label_1ad9e4;
        }
    }
    ctx->pc = 0x1AD9D8u;
    // 0x1ad9d8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1ad9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ad9dc: 0x2442fca0  addiu       $v0, $v0, -0x360
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966432));
    // 0x1ad9e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ad9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ad9e4:
    // 0x1ad9e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AD9E4u;
    {
        const bool branch_taken_0x1ad9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad9e4) {
            ctx->pc = 0x1AD9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD9E4u;
            // 0x1ad9e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA00u;
            goto label_1ada00;
        }
    }
    ctx->pc = 0x1AD9ECu;
    // 0x1ad9ec: 0xc06b692  jal         func_1ADA48
    ctx->pc = 0x1AD9ECu;
    SET_GPR_U32(ctx, 31, 0x1AD9F4u);
    ctx->pc = 0x1ADA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA48u, 0x1AD9ECu, 0x1AD9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD9F4u;
label_1ad9f4:
    // 0x1ad9f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD9F4u;
    {
        const bool branch_taken_0x1ad9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9F4u;
        // 0x1ad9f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9f4) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD9FCu;
    // 0x1ad9fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ad9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ada00:
    // 0x1ada00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ada00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ada04:
    // 0x1ada04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ada04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ada08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ada08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ada0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA0Cu;
        // 0x1ada10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADA14u;
    // 0x1ada14: 0x0  nop
    ctx->pc = 0x1ada14u;
    // NOP
    ctx->pc = 0x1ada18u;
}
