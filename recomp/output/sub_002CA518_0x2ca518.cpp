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

// Function: sub_002CA518
// Address: 0x2ca518 - 0x2ca660
void sub_002CA518_0x2ca518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA518_0x2ca518");
#endif

    switch (ctx->pc) {
        case 0x2ca57cu: goto label_2ca57c;
        case 0x2ca58cu: goto label_2ca58c;
        case 0x2ca5f0u: goto label_2ca5f0;
        case 0x2ca600u: goto label_2ca600;
        default: break;
    }

    ctx->pc = 0x2ca518u;

    // 0x2ca518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca51c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ca524: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ca524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ca528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca52c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ca52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca530: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca534: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x2ca534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x2ca538: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ca538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ca53c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca540: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ca540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ca544: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ca544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca548: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ca548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ca54c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca550: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x2ca550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ca554: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CA554u;
    {
        const bool branch_taken_0x2ca554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA554u;
        // 0x2ca558: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca554) {
            ctx->pc = 0x2CA5C8u;
            goto label_2ca5c8;
        }
    }
    ctx->pc = 0x2CA55Cu;
    // 0x2ca55c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ca55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ca560: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CA560u;
    {
        const bool branch_taken_0x2ca560 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA560u;
        // 0x2ca564: 0x21783  sra         $v0, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca560) {
            ctx->pc = 0x2CA5C8u;
            goto label_2ca5c8;
        }
    }
    ctx->pc = 0x2CA568u;
    // 0x2ca568: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca56c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA56Cu;
    {
        const bool branch_taken_0x2ca56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca56c) {
            ctx->pc = 0x2CA584u;
            goto label_2ca584;
        }
    }
    ctx->pc = 0x2CA574u;
    // 0x2ca574: 0xc0b2926  jal         func_2CA498
    ctx->pc = 0x2CA574u;
    SET_GPR_U32(ctx, 31, 0x2CA57Cu);
    ctx->pc = 0x2CA578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA574u;
    // 0x2ca578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA498u, 0x2CA574u, 0x2CA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA57Cu;
label_2ca57c:
    // 0x2ca57c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA57Cu;
    {
        const bool branch_taken_0x2ca57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA57Cu;
        // 0x2ca580: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca57c) {
            ctx->pc = 0x2CA590u;
            goto label_2ca590;
        }
    }
    ctx->pc = 0x2CA584u;
label_2ca584:
    // 0x2ca584: 0xc0b289c  jal         func_2CA270
    ctx->pc = 0x2CA584u;
    SET_GPR_U32(ctx, 31, 0x2CA58Cu);
    ctx->pc = 0x2CA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA584u;
    // 0x2ca588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA270u, 0x2CA584u, 0x2CA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA58Cu;
label_2ca58c:
    // 0x2ca58c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ca58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ca590:
    // 0x2ca590: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x2ca590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2ca594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ca594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ca598: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ca598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca59c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ca59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ca5a0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CA5A0u;
    {
        const bool branch_taken_0x2ca5a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5A0u;
        // 0x2ca5a4: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5a0) {
            ctx->pc = 0x2CA610u;
            goto label_2ca610;
        }
    }
    ctx->pc = 0x2CA5A8u;
    // 0x2ca5a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ca5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca5ac: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CA5ACu;
    {
        const bool branch_taken_0x2ca5ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5ACu;
        // 0x2ca5b0: 0x21783  sra         $v0, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5ac) {
            ctx->pc = 0x2CA610u;
            goto label_2ca610;
        }
    }
    ctx->pc = 0x2CA5B4u;
    // 0x2ca5b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca5b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA5B8u;
    {
        const bool branch_taken_0x2ca5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5B8u;
        // 0x2ca5bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5b8) {
            ctx->pc = 0x2CA5E8u;
            goto label_2ca5e8;
        }
    }
    ctx->pc = 0x2CA5C0u;
    // 0x2ca5c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CA5C0u;
    {
        const bool branch_taken_0x2ca5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5c0) {
            ctx->pc = 0x2CA5F8u;
            goto label_2ca5f8;
        }
    }
    ctx->pc = 0x2CA5C8u;
label_2ca5c8:
    // 0x2ca5c8: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CA5C8u;
    {
        const bool branch_taken_0x2ca5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5C8u;
        // 0x2ca5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5c8) {
            ctx->pc = 0x2CA63Cu;
            goto label_2ca63c;
        }
    }
    ctx->pc = 0x2CA5D0u;
    // 0x2ca5d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ca5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ca5d4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA5D4u;
    {
        const bool branch_taken_0x2ca5d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5D4u;
        // 0x2ca5d8: 0x21783  sra         $v0, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5d4) {
            ctx->pc = 0x2CA608u;
            goto label_2ca608;
        }
    }
    ctx->pc = 0x2CA5DCu;
    // 0x2ca5dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca5e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA5E0u;
    {
        const bool branch_taken_0x2ca5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5E0u;
        // 0x2ca5e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5e0) {
            ctx->pc = 0x2CA5F8u;
            goto label_2ca5f8;
        }
    }
    ctx->pc = 0x2CA5E8u;
label_2ca5e8:
    // 0x2ca5e8: 0xc0b2926  jal         func_2CA498
    ctx->pc = 0x2CA5E8u;
    SET_GPR_U32(ctx, 31, 0x2CA5F0u);
    ctx->pc = 0x2CA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5E8u;
    // 0x2ca5ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA498u, 0x2CA5E8u, 0x2CA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5F0u;
label_2ca5f0:
    // 0x2ca5f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA5F0u;
    {
        const bool branch_taken_0x2ca5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5F0u;
        // 0x2ca5f4: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5f0) {
            ctx->pc = 0x2CA610u;
            goto label_2ca610;
        }
    }
    ctx->pc = 0x2CA5F8u;
label_2ca5f8:
    // 0x2ca5f8: 0xc0b289c  jal         func_2CA270
    ctx->pc = 0x2CA5F8u;
    SET_GPR_U32(ctx, 31, 0x2CA600u);
    ctx->pc = 0x2CA5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5F8u;
    // 0x2ca5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA270u, 0x2CA5F8u, 0x2CA600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA600u;
label_2ca600:
    // 0x2ca600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA600u;
    {
        const bool branch_taken_0x2ca600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA600u;
        // 0x2ca604: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca600) {
            ctx->pc = 0x2CA610u;
            goto label_2ca610;
        }
    }
    ctx->pc = 0x2CA608u;
label_2ca608:
    // 0x2ca608: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CA608u;
    {
        const bool branch_taken_0x2ca608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA608u;
        // 0x2ca60c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca608) {
            ctx->pc = 0x2CA63Cu;
            goto label_2ca63c;
        }
    }
    ctx->pc = 0x2CA610u;
label_2ca610:
    // 0x2ca610: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca614: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x2ca614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
    // 0x2ca618: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ca618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca61c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2ca61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2ca620: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ca620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca624: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2ca624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ca628: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x2ca628u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2ca62c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2ca62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2ca630: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2ca630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2ca634: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ca634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ca638: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2ca638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_2ca63c:
    // 0x2ca63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ca648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca64c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca650: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA650u;
        // 0x2ca654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA658u;
    // 0x2ca658: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ca658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ca65c: 0x0  nop
    ctx->pc = 0x2ca65cu;
    // NOP
    ctx->pc = 0x2ca660u;
}
