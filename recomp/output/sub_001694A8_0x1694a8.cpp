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

// Function: sub_001694A8
// Address: 0x1694a8 - 0x169568
void sub_001694A8_0x1694a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001694A8_0x1694a8");
#endif

    switch (ctx->pc) {
        case 0x1694f0u: goto label_1694f0;
        case 0x169514u: goto label_169514;
        default: break;
    }

    ctx->pc = 0x1694a8u;

    // 0x1694a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1694a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1694ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1694acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1694b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1694b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1694b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1694b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1694b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1694bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1694bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1694c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1694c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1694c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1694c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1694c8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1694c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1694cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1694CCu;
    {
        const bool branch_taken_0x1694cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1694D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694CCu;
        // 0x1694d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694cc) {
            ctx->pc = 0x1694DCu;
            goto label_1694dc;
        }
    }
    ctx->pc = 0x1694D4u;
    // 0x1694d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1694D4u;
    {
        const bool branch_taken_0x1694d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694D4u;
        // 0x1694d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694d4) {
            ctx->pc = 0x169544u;
            goto label_169544;
        }
    }
    ctx->pc = 0x1694DCu;
label_1694dc:
    // 0x1694dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1694dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694e0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1694e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694e4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1694e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1694ec: 0x0  nop
    ctx->pc = 0x1694ecu;
    // NOP
label_1694f0:
    // 0x1694f0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1694f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1694f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1694f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1694f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1694f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1694fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1694FCu;
    {
        const bool branch_taken_0x1694fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694FCu;
        // 0x169500: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694fc) {
            ctx->pc = 0x169520u;
            goto label_169520;
        }
    }
    ctx->pc = 0x169504u;
    // 0x169504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169508: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x169508u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16950c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x16950Cu;
    SET_GPR_U32(ctx, 31, 0x169514u);
    ctx->pc = 0x169510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16950Cu;
    // 0x169510: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x16950Cu, 0x169514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169514u;
label_169514:
    // 0x169514: 0x10540002  beq         $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x169514u;
    {
        const bool branch_taken_0x169514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x169518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169514u;
        // 0x169518: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169514) {
            ctx->pc = 0x169520u;
            goto label_169520;
        }
    }
    ctx->pc = 0x16951Cu;
    // 0x16951c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x16951cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_169520:
    // 0x169520: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x169520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x169524: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x169524u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x169528: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x169528u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16952c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16952Cu;
    {
        const bool branch_taken_0x16952c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16952Cu;
        // 0x169530: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16952c) {
            ctx->pc = 0x169544u;
            goto label_169544;
        }
    }
    ctx->pc = 0x169534u;
    // 0x169534: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x169534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x169538: 0x5642ffed  bnel        $s2, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x169538u;
    {
        const bool branch_taken_0x169538 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x169538) {
            ctx->pc = 0x16953Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169538u;
            // 0x16953c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1694F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1694f0;
        }
    }
    ctx->pc = 0x169540u;
    // 0x169540: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x169540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_169544:
    // 0x169544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16954c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16954cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169550: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x169550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169554: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x169554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169558: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x169558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16955c: 0x3e00008  jr          $ra
    ctx->pc = 0x16955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16955Cu;
        // 0x169560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16955Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169564u;
    // 0x169564: 0x0  nop
    ctx->pc = 0x169564u;
    // NOP
    ctx->pc = 0x169568u;
}
