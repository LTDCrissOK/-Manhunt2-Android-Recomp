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

// Function: sub_00337678
// Address: 0x337678 - 0x3377b0
void sub_00337678_0x337678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337678_0x337678");
#endif

    switch (ctx->pc) {
        case 0x337734u: goto label_337734;
        case 0x337750u: goto label_337750;
        case 0x337788u: goto label_337788;
        default: break;
    }

    ctx->pc = 0x337678u;

    // 0x337678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33767c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x337688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33768c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337690: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337694: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x337694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x337698: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x337698u;
    {
        const bool branch_taken_0x337698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337698u;
        // 0x33769c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337698) {
            ctx->pc = 0x337748u;
            goto label_337748;
        }
    }
    ctx->pc = 0x3376A0u;
    // 0x3376a0: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x3376a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3376a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3376A4u;
    {
        const bool branch_taken_0x3376a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376A4u;
        // 0x3376a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376a4) {
            ctx->pc = 0x3376BCu;
            goto label_3376bc;
        }
    }
    ctx->pc = 0x3376ACu;
    // 0x3376ac: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3376ACu;
    {
        const bool branch_taken_0x3376ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3376B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376ACu;
        // 0x3376b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376ac) {
            ctx->pc = 0x3376D8u;
            goto label_3376d8;
        }
    }
    ctx->pc = 0x3376B4u;
    // 0x3376b4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3376B4u;
    {
        const bool branch_taken_0x3376b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376B4u;
        // 0x3376b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376b4) {
            ctx->pc = 0x337798u;
            goto label_337798;
        }
    }
    ctx->pc = 0x3376BCu;
label_3376bc:
    // 0x3376bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3376bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3376c0: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3376C0u;
    {
        const bool branch_taken_0x3376c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3376C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376C0u;
        // 0x3376c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376c0) {
            ctx->pc = 0x337780u;
            goto label_337780;
        }
    }
    ctx->pc = 0x3376C8u;
    // 0x3376c8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3376C8u;
    {
        const bool branch_taken_0x3376c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3376CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376C8u;
        // 0x3376cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376c8) {
            ctx->pc = 0x337700u;
            goto label_337700;
        }
    }
    ctx->pc = 0x3376D0u;
    // 0x3376d0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3376D0u;
    {
        const bool branch_taken_0x3376d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376D0u;
        // 0x3376d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376d0) {
            ctx->pc = 0x337798u;
            goto label_337798;
        }
    }
    ctx->pc = 0x3376D8u;
label_3376d8:
    // 0x3376d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3376dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3376e0: 0x8c512c84  lw          $s1, 0x2C84($v0)
    ctx->pc = 0x3376e0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x482C84u));
    // 0x3376e4: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3376E4u;
    {
        const bool branch_taken_0x3376e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3376E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376E4u;
        // 0x3376e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376e4) {
            ctx->pc = 0x337708u;
            goto label_337708;
        }
    }
    ctx->pc = 0x3376ECu;
    // 0x3376ec: 0x8e030488  lw          $v1, 0x488($s0)
    ctx->pc = 0x3376ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
    // 0x3376f0: 0x8c44bee4  lw          $a0, -0x411C($v0)
    ctx->pc = 0x3376f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x3376f4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x3376f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3376f8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3376F8u;
    {
        const bool branch_taken_0x3376f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376F8u;
        // 0x3376fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376f8) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337700u;
label_337700:
    // 0x337700: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x337700u;
    {
        const bool branch_taken_0x337700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337700u;
        // 0x337704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337700) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337708u;
label_337708:
    // 0x337708: 0x16240022  bne         $s1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x337708u;
    {
        const bool branch_taken_0x337708 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x33770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337708u;
        // 0x33770c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337708) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337710u;
    // 0x337710: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x337710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x337714: 0x8c62bf3c  lw          $v0, -0x40C4($v1)
    ctx->pc = 0x337714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBF3Cu));
    // 0x337718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33771c: 0xac62bf3c  sw          $v0, -0x40C4($v1)
    ctx->pc = 0x33771cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBF3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBF3Cu, _value); } while (0);
    // 0x337720: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x337720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x337724: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x337724u;
    {
        const bool branch_taken_0x337724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337724u;
        // 0x337728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337724) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x33772Cu;
    // 0x33772c: 0xc0d75f8  jal         func_35D7E0
    ctx->pc = 0x33772Cu;
    SET_GPR_U32(ctx, 31, 0x337734u);
    ctx->pc = 0x337730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33772Cu;
    // 0x337730: 0x26040490  addiu       $a0, $s0, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7E0u, 0x33772Cu, 0x337734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337734u;
label_337734:
    // 0x337734: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x337734u;
    {
        const bool branch_taken_0x337734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337734u;
        // 0x337738: 0x52182b  sltu        $v1, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337734) {
            ctx->pc = 0x337790u;
            goto label_337790;
        }
    }
    ctx->pc = 0x33773Cu;
    // 0x33773c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33773cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337740: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x337740u;
    {
        const bool branch_taken_0x337740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337740u;
        // 0x337744: 0x223100b  movn        $v0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337740) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337748u;
label_337748:
    // 0x337748: 0xc0760d6  jal         func_1D8358
    ctx->pc = 0x337748u;
    SET_GPR_U32(ctx, 31, 0x337750u);
    ctx->pc = 0x1D8358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8358u, 0x337748u, 0x337750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337750u;
label_337750:
    // 0x337750: 0x8e0304a4  lw          $v1, 0x4A4($s0)
    ctx->pc = 0x337750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1188)));
    // 0x337754: 0x8e0404a0  lw          $a0, 0x4A0($s0)
    ctx->pc = 0x337754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1184)));
    // 0x337758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x337758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33775c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x33775cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x337760: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x337760u;
    {
        const bool branch_taken_0x337760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337760u;
        // 0x337764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337760) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337768u;
    // 0x337768: 0x8e03049c  lw          $v1, 0x49C($s0)
    ctx->pc = 0x337768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x33776c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337770: 0xae00049c  sw          $zero, 0x49C($s0)
    ctx->pc = 0x337770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 0));
    // 0x337774: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x337774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
    // 0x337778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x337778u;
    {
        const bool branch_taken_0x337778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337778u;
        // 0x33777c: 0xae0004a0  sw          $zero, 0x4A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337778) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337780u;
label_337780:
    // 0x337780: 0xc0d7600  jal         func_35D800
    ctx->pc = 0x337780u;
    SET_GPR_U32(ctx, 31, 0x337788u);
    ctx->pc = 0x337784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337780u;
    // 0x337784: 0x26040490  addiu       $a0, $s0, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D800u, 0x337780u, 0x337788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337788u;
label_337788:
    // 0x337788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x337788u;
    {
        const bool branch_taken_0x337788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337788u;
        // 0x33778c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337788) {
            ctx->pc = 0x337794u;
            goto label_337794;
        }
    }
    ctx->pc = 0x337790u;
label_337790:
    // 0x337790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337794:
    // 0x337794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337798:
    // 0x337798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33779c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33779cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3377a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3377a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3377a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3377A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3377A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377A4u;
        // 0x3377a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3377A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3377ACu;
    // 0x3377ac: 0x0  nop
    ctx->pc = 0x3377acu;
    // NOP
    ctx->pc = 0x3377b0u;
}
