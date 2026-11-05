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

// Function: sub_002B93A0
// Address: 0x2b93a0 - 0x2b94c0
void sub_002B93A0_0x2b93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B93A0_0x2b93a0");
#endif

    switch (ctx->pc) {
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b94a4u: goto label_2b94a4;
        default: break;
    }

    ctx->pc = 0x2b93a0u;

    // 0x2b93a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b93a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b93a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b93a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b93ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b93acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b93b0: 0xc0ee34a  jal         func_3B8D28
    ctx->pc = 0x2B93B0u;
    SET_GPR_U32(ctx, 31, 0x2B93B8u);
    ctx->pc = 0x2B93B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B93B0u;
    // 0x2b93b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8D28u, 0x2B93B0u, 0x2B93B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93B8u;
label_2b93b8:
    // 0x2b93b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b93b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93bc: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x2b93bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2b93c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B93C0u;
    {
        const bool branch_taken_0x2b93c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93C0u;
        // 0x2b93c4: 0x2a220010  slti        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93c0) {
            ctx->pc = 0x2B9400u;
            goto label_2b9400;
        }
    }
    ctx->pc = 0x2B93C8u;
    // 0x2b93c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B93C8u;
    {
        const bool branch_taken_0x2b93c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93C8u;
        // 0x2b93cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93c8) {
            ctx->pc = 0x2B9478u;
            goto label_2b9478;
        }
    }
    ctx->pc = 0x2B93D0u;
    // 0x2b93d0: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B93D0u;
    {
        const bool branch_taken_0x2b93d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93D0u;
        // 0x2b93d4: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93d0) {
            ctx->pc = 0x2B9424u;
            goto label_2b9424;
        }
    }
    ctx->pc = 0x2B93D8u;
    // 0x2b93d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B93D8u;
    {
        const bool branch_taken_0x2b93d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93d8) {
            ctx->pc = 0x2B93DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B93D8u;
            // 0x2b93dc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B93F0u;
            goto label_2b93f0;
        }
    }
    ctx->pc = 0x2B93E0u;
    // 0x2b93e0: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B93E0u;
    {
        const bool branch_taken_0x2b93e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93e0) {
            ctx->pc = 0x2B949Cu;
            goto label_2b949c;
        }
    }
    ctx->pc = 0x2B93E8u;
    // 0x2b93e8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B93E8u;
    {
        const bool branch_taken_0x2b93e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93e8) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B93F0u;
label_2b93f0:
    // 0x2b93f0: 0x12220028  beq         $s1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B93F0u;
    {
        const bool branch_taken_0x2b93f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B93F0u;
        // 0x2b93f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93f0) {
            ctx->pc = 0x2B9494u;
            goto label_2b9494;
        }
    }
    ctx->pc = 0x2B93F8u;
    // 0x2b93f8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B93F8u;
    {
        const bool branch_taken_0x2b93f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93f8) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9400u;
label_2b9400:
    // 0x2b9400: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b9400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b9404: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9404u;
    {
        const bool branch_taken_0x2b9404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9404u;
        // 0x2b9408: 0x2a220100  slti        $v0, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9404) {
            ctx->pc = 0x2B9440u;
            goto label_2b9440;
        }
    }
    ctx->pc = 0x2B940Cu;
    // 0x2b940c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B940Cu;
    {
        const bool branch_taken_0x2b940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B940Cu;
        // 0x2b9410: 0x2a2200fd  slti        $v0, $s1, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b940c) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9414u;
    // 0x2b9414: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B9414u;
    {
        const bool branch_taken_0x2b9414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9414u;
        // 0x2b9418: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9414) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B941Cu;
    // 0x2b941c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B941Cu;
    {
        const bool branch_taken_0x2b941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B941Cu;
        // 0x2b9420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b941c) {
            ctx->pc = 0x2B9480u;
            goto label_2b9480;
        }
    }
    ctx->pc = 0x2B9424u;
label_2b9424:
    // 0x2b9424: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b9428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b942c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b942cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b9430: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B9430u;
    SET_GPR_U32(ctx, 31, 0x2B9438u);
    ctx->pc = 0x2B9434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9430u;
    // 0x2b9434: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B9430u, 0x2B9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9438u;
label_2b9438:
    // 0x2b9438: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B9438u;
    {
        const bool branch_taken_0x2b9438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9438) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9440u;
label_2b9440:
    // 0x2b9440: 0xc0ae5a2  jal         func_2B9688
    ctx->pc = 0x2B9440u;
    SET_GPR_U32(ctx, 31, 0x2B9448u);
    ctx->pc = 0x2B9444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9440u;
    // 0x2b9444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9688u, 0x2B9440u, 0x2B9448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9448u;
label_2b9448:
    // 0x2b9448: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b9448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b944c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B944Cu;
    {
        const bool branch_taken_0x2b944c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B944Cu;
        // 0x2b9450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b944c) {
            ctx->pc = 0x2B9460u;
            goto label_2b9460;
        }
    }
    ctx->pc = 0x2B9454u;
    // 0x2b9454: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2b9454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b9458: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B9458u;
    {
        const bool branch_taken_0x2b9458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9458u;
        // 0x2b945c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9458) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9460u;
label_2b9460:
    // 0x2b9460: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9460u;
    {
        const bool branch_taken_0x2b9460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9460u;
        // 0x2b9464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9460) {
            ctx->pc = 0x2B9478u;
            goto label_2b9478;
        }
    }
    ctx->pc = 0x2B9468u;
    // 0x2b9468: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B9468u;
    {
        const bool branch_taken_0x2b9468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9468u;
        // 0x2b946c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9468) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9470u;
    // 0x2b9470: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B9470u;
    {
        const bool branch_taken_0x2b9470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9470u;
        // 0x2b9474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9470) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9478u;
label_2b9478:
    // 0x2b9478: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b9478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b947c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9480:
    // 0x2b9480: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b9480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b9484: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B9484u;
    SET_GPR_U32(ctx, 31, 0x2B948Cu);
    ctx->pc = 0x2B9488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9484u;
    // 0x2b9488: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B9484u, 0x2B948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B948Cu;
label_2b948c:
    // 0x2b948c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B948Cu;
    {
        const bool branch_taken_0x2b948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b948c) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B9494u;
label_2b9494:
    // 0x2b9494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9494u;
    {
        const bool branch_taken_0x2b9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9494u;
        // 0x2b9498: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9494) {
            ctx->pc = 0x2B94A4u;
            goto label_2b94a4;
        }
    }
    ctx->pc = 0x2B949Cu;
label_2b949c:
    // 0x2b949c: 0xc0ae530  jal         func_2B94C0
    ctx->pc = 0x2B949Cu;
    SET_GPR_U32(ctx, 31, 0x2B94A4u);
    ctx->pc = 0x2B94A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B949Cu;
    // 0x2b94a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B94C0u, 0x2B949Cu, 0x2B94A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94A4u;
label_2b94a4:
    // 0x2b94a4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B94A4u;
    {
        const bool branch_taken_0x2b94a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b94a4) {
            ctx->pc = 0x2B94A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B94A4u;
            // 0x2b94a8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B94ACu;
            goto label_2b94ac;
        }
    }
    ctx->pc = 0x2B94ACu;
label_2b94ac:
    // 0x2b94ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b94acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b94b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b94b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b94b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b94b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b94b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B94B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94B8u;
        // 0x2b94bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B94B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B94C0u;
}
