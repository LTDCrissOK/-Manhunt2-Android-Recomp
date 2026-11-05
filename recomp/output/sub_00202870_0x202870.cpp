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

// Function: sub_00202870
// Address: 0x202870 - 0x2029c0
void sub_00202870_0x202870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202870_0x202870");
#endif

    ctx->pc = 0x202870u;

    // 0x202870: 0x240234c5  addiu       $v0, $zero, 0x34C5
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13509));
    // 0x202874: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x202874u;
    {
        const bool branch_taken_0x202874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x202878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202874u;
        // 0x202878: 0x2ca234c6  sltiu       $v0, $a1, 0x34C6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13510) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202874) {
            ctx->pc = 0x2028F8u;
            goto label_2028f8;
        }
    }
    ctx->pc = 0x20287Cu;
    // 0x20287c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20287Cu;
    {
        const bool branch_taken_0x20287c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20287Cu;
        // 0x202880: 0x24023466  addiu       $v0, $zero, 0x3466 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13414));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20287c) {
            ctx->pc = 0x2028B8u;
            goto label_2028b8;
        }
    }
    ctx->pc = 0x202884u;
    // 0x202884: 0x10a2002a  beq         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x202884u;
    {
        const bool branch_taken_0x202884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x202888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202884u;
        // 0x202888: 0x2ca23467  sltiu       $v0, $a1, 0x3467 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13415) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202884) {
            ctx->pc = 0x202930u;
            goto label_202930;
        }
    }
    ctx->pc = 0x20288Cu;
    // 0x20288c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20288Cu;
    {
        const bool branch_taken_0x20288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20288Cu;
        // 0x202890: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20288c) {
            ctx->pc = 0x2028A4u;
            goto label_2028a4;
        }
    }
    ctx->pc = 0x202894u;
    // 0x202894: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x202894u;
    {
        const bool branch_taken_0x202894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202894u;
        // 0x202898: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202894) {
            ctx->pc = 0x202948u;
            goto label_202948;
        }
    }
    ctx->pc = 0x20289Cu;
    // 0x20289c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20289Cu;
    {
        const bool branch_taken_0x20289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20289Cu;
        // 0x2028a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20289c) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x2028A4u;
label_2028a4:
    // 0x2028a4: 0x240234a3  addiu       $v0, $zero, 0x34A3
    ctx->pc = 0x2028a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13475));
    // 0x2028a8: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2028A8u;
    {
        const bool branch_taken_0x2028a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2028ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028A8u;
        // 0x2028ac: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028a8) {
            ctx->pc = 0x202918u;
            goto label_202918;
        }
    }
    ctx->pc = 0x2028B0u;
    // 0x2028b0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2028B0u;
    {
        const bool branch_taken_0x2028b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028B0u;
        // 0x2028b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028b0) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x2028B8u;
label_2028b8:
    // 0x2028b8: 0x2402352b  addiu       $v0, $zero, 0x352B
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13611));
    // 0x2028bc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2028BCu;
    {
        const bool branch_taken_0x2028bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2028C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028BCu;
        // 0x2028c0: 0x2ca2352c  sltiu       $v0, $a1, 0x352C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028bc) {
            ctx->pc = 0x202918u;
            goto label_202918;
        }
    }
    ctx->pc = 0x2028C4u;
    // 0x2028c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2028C4u;
    {
        const bool branch_taken_0x2028c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028C4u;
        // 0x2028c8: 0x240234ee  addiu       $v0, $zero, 0x34EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028c4) {
            ctx->pc = 0x2028DCu;
            goto label_2028dc;
        }
    }
    ctx->pc = 0x2028CCu;
    // 0x2028cc: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2028CCu;
    {
        const bool branch_taken_0x2028cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2028D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028CCu;
        // 0x2028d0: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028cc) {
            ctx->pc = 0x202930u;
            goto label_202930;
        }
    }
    ctx->pc = 0x2028D4u;
    // 0x2028d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2028D4u;
    {
        const bool branch_taken_0x2028d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028D4u;
        // 0x2028d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028d4) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x2028DCu;
label_2028dc:
    // 0x2028dc: 0x2402354d  addiu       $v0, $zero, 0x354D
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13645));
    // 0x2028e0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2028E0u;
    {
        const bool branch_taken_0x2028e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2028E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028E0u;
        // 0x2028e4: 0x240235b2  addiu       $v0, $zero, 0x35B2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13746));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028e0) {
            ctx->pc = 0x2028F8u;
            goto label_2028f8;
        }
    }
    ctx->pc = 0x2028E8u;
    // 0x2028e8: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2028E8u;
    {
        const bool branch_taken_0x2028e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2028ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028E8u;
        // 0x2028ec: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028e8) {
            ctx->pc = 0x202910u;
            goto label_202910;
        }
    }
    ctx->pc = 0x2028F0u;
    // 0x2028f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2028F0u;
    {
        const bool branch_taken_0x2028f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2028F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028F0u;
        // 0x2028f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028f0) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x2028F8u;
label_2028f8:
    // 0x2028f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2028f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2028fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2028fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x202900: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202900u;
    {
        const bool branch_taken_0x202900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202900) {
            ctx->pc = 0x202904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202900u;
            // 0x202904: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202908u;
            goto label_202908;
        }
    }
    ctx->pc = 0x202908u;
label_202908:
    // 0x202908: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x202908u;
    {
        const bool branch_taken_0x202908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202908u;
        // 0x20290c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202908) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x202910u;
label_202910:
    // 0x202910: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x202910u;
    {
        const bool branch_taken_0x202910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202910u;
        // 0x202914: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202910) {
            ctx->pc = 0x20294Cu;
            goto label_20294c;
        }
    }
    ctx->pc = 0x202918u;
label_202918:
    // 0x202918: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20291c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202920: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202920u;
    {
        const bool branch_taken_0x202920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202920) {
            ctx->pc = 0x202924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202920u;
            // 0x202924: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202928u;
            goto label_202928;
        }
    }
    ctx->pc = 0x202928u;
label_202928:
    // 0x202928: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x202928u;
    {
        const bool branch_taken_0x202928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202928u;
        // 0x20292c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202928) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x202930u;
label_202930:
    // 0x202930: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x202934: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x202938: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202938u;
    {
        const bool branch_taken_0x202938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202938) {
            ctx->pc = 0x20293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202938u;
            // 0x20293c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202940u;
            goto label_202940;
        }
    }
    ctx->pc = 0x202940u;
label_202940:
    // 0x202940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202940u;
    {
        const bool branch_taken_0x202940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202940u;
        // 0x202944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202940) {
            ctx->pc = 0x202950u;
            goto label_202950;
        }
    }
    ctx->pc = 0x202948u;
label_202948:
    // 0x202948: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x202948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20294c:
    // 0x20294c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202950:
    // 0x202950: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x202950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202954: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x202954u;
    {
        const bool branch_taken_0x202954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202954) {
            ctx->pc = 0x202958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202954u;
            // 0x202958: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x20295Cu;
    // 0x20295c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x20295cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x202960: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202960u;
    {
        const bool branch_taken_0x202960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202960u;
        // 0x202964: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202960) {
            ctx->pc = 0x202990u;
            goto label_202990;
        }
    }
    ctx->pc = 0x202968u;
    // 0x202968: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202968u;
    {
        const bool branch_taken_0x202968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202968) {
            ctx->pc = 0x20296Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202968u;
            // 0x20296c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x202970u;
    // 0x202970: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x202970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x202974: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x202974u;
    {
        const bool branch_taken_0x202974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202974) {
            ctx->pc = 0x202978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202974u;
            // 0x202978: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x20297Cu;
    // 0x20297c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x202980: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202980u;
    {
        const bool branch_taken_0x202980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202980) {
            ctx->pc = 0x202984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202980u;
            // 0x202984: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x202988u;
    // 0x202988: 0x3e00008  jr          $ra
    ctx->pc = 0x202988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202988u;
        // 0x20298c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202990u;
label_202990:
    // 0x202990: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x202990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x202994: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202994u;
    {
        const bool branch_taken_0x202994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202994u;
        // 0x202998: 0x2862000d  slti        $v0, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202994) {
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x20299Cu;
    // 0x20299c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20299Cu;
    {
        const bool branch_taken_0x20299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20299Cu;
        // 0x2029a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20299c) {
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x2029A4u;
    // 0x2029a4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2029A4u;
    {
        const bool branch_taken_0x2029a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2029A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029A4u;
        // 0x2029a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029a4) {
            ctx->pc = 0x2029B4u;
            goto label_2029b4;
        }
    }
    ctx->pc = 0x2029ACu;
    // 0x2029ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2029b0:
    // 0x2029b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2029b4:
    // 0x2029b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2029B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2029B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2029BCu;
    // 0x2029bc: 0x0  nop
    ctx->pc = 0x2029bcu;
    // NOP
    ctx->pc = 0x2029c0u;
}
