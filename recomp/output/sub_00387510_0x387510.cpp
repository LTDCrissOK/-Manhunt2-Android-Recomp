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

// Function: sub_00387510
// Address: 0x387510 - 0x387658
void sub_00387510_0x387510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387510_0x387510");
#endif

    ctx->pc = 0x387510u;

    // 0x387510: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x387514: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x387514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x387518: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x387518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x38751c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x38751cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387520: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x387520u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x387524: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x387524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x387528: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x387528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x38752c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x38752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x387530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x387530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x387534: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x387534u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x387538: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x387538u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x38753c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38753Cu;
    {
        const bool branch_taken_0x38753c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38753Cu;
        // 0x387540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38753c) {
            ctx->pc = 0x38755Cu;
            goto label_38755c;
        }
    }
    ctx->pc = 0x387544u;
    // 0x387544: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x387548: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x387548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x38754c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38754cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x387550: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x387550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x387554: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x387554u;
    {
        const bool branch_taken_0x387554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387554u;
        // 0x387558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387554) {
            ctx->pc = 0x387570u;
            goto label_387570;
        }
    }
    ctx->pc = 0x38755Cu;
label_38755c:
    // 0x38755c: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x38755cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x387560: 0xf  sync
    ctx->pc = 0x387560u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x387564: 0x42000038  ei
    ctx->pc = 0x387564u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x387568: 0x3e00008  jr          $ra
    ctx->pc = 0x387568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387568u;
        // 0x38756c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387570u;
label_387570:
    // 0x387570: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x387570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x387574: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x387574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x387578: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x387578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38757c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x38757cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x387580: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x387580u;
    {
        const bool branch_taken_0x387580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387580u;
        // 0x387584: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387580) {
            ctx->pc = 0x3875E4u;
            goto label_3875e4;
        }
    }
    ctx->pc = 0x387588u;
    // 0x387588: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x387588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x38758c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x38758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x387590: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x387590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x387594: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x387594u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x387598: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x387598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38759c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x38759cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3875a0: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x3875a0u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x3875a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3875a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3875a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3875a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3875ac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3875acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3875b0: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x3875b0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x3875b4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3875b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3875b8: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x3875b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x3875bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3875bcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x3875c0: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x3875c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x3875c4: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x3875c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x3875c8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x3875c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x3875cc: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x3875ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3875d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3875d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3875d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3875d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3875d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3875d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3875dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3875DCu;
    {
        const bool branch_taken_0x3875dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3875E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875DCu;
        // 0x3875e0: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3875dc) {
            ctx->pc = 0x387648u;
            goto label_387648;
        }
    }
    ctx->pc = 0x3875E4u;
label_3875e4:
    // 0x3875e4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3875e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3875e8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3875E8u;
    {
        const bool branch_taken_0x3875e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3875ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875E8u;
        // 0x3875ec: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3875e8) {
            ctx->pc = 0x387648u;
            goto label_387648;
        }
    }
    ctx->pc = 0x3875F0u;
    // 0x3875f0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x3875f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3875f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3875f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3875f8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x3875f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3875fc: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x3875fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x387600: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x387600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x387604: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x387604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x387608: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x387608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38760c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x38760cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x387610: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x387610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x387614: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x387614u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x387618: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x387618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x38761c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x38761cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x387620: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x387620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x387624: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x387624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x387628: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x387628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x38762c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x38762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x387630: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x387630u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x387634: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x387634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x387638: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x387638u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x38763c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x38763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x387640: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x387640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x387644: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x387644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_387648:
    // 0x387648: 0xf  sync
    ctx->pc = 0x387648u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x38764c: 0x42000038  ei
    ctx->pc = 0x38764cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x387650: 0x3e00008  jr          $ra
    ctx->pc = 0x387650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387650u;
        // 0x387654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387658u;
}
