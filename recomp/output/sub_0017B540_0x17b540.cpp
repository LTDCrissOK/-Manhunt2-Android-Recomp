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

// Function: sub_0017B540
// Address: 0x17b540 - 0x17b5f8
void sub_0017B540_0x17b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B540_0x17b540");
#endif

    switch (ctx->pc) {
        case 0x17b578u: goto label_17b578;
        case 0x17b57cu: goto label_17b57c;
        case 0x17b5a8u: goto label_17b5a8;
        case 0x17b5c8u: goto label_17b5c8;
        default: break;
    }

    ctx->pc = 0x17b540u;

    // 0x17b540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b548: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b54c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b55c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x17b55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17b560: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17B560u;
    {
        const bool branch_taken_0x17b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B560u;
        // 0x17b564: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b560) {
            ctx->pc = 0x17B5DCu;
            goto label_17b5dc;
        }
    }
    ctx->pc = 0x17B568u;
    // 0x17b568: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17b568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b56c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B56Cu;
    {
        const bool branch_taken_0x17b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B56Cu;
        // 0x17b570: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b56c) {
            ctx->pc = 0x17B580u;
            goto label_17b580;
        }
    }
    ctx->pc = 0x17B574u;
    // 0x17b574: 0x0  nop
    ctx->pc = 0x17b574u;
    // NOP
label_17b578:
    // 0x17b578: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17b57c:
    // 0x17b57c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17b57cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17b580:
    // 0x17b580: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x17b580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17b584: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17B584u;
    {
        const bool branch_taken_0x17b584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B584u;
        // 0x17b588: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b584) {
            ctx->pc = 0x17B5DCu;
            goto label_17b5dc;
        }
    }
    ctx->pc = 0x17B58Cu;
    // 0x17b58c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17b590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b598: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17B598u;
    {
        const bool branch_taken_0x17b598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B598u;
        // 0x17b59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b598) {
            ctx->pc = 0x17B578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b578;
        }
    }
    ctx->pc = 0x17B5A0u;
    // 0x17b5a0: 0xc05eb06  jal         func_17AC18
    ctx->pc = 0x17B5A0u;
    SET_GPR_U32(ctx, 31, 0x17B5A8u);
    ctx->pc = 0x17B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5A0u;
    // 0x17b5a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17B5A0u, 0x17B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5A8u;
label_17b5a8:
    // 0x17b5a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B5A8u;
    {
        const bool branch_taken_0x17b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b5a8) {
            ctx->pc = 0x17B5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B5A8u;
            // 0x17b5ac: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B5CCu;
            goto label_17b5cc;
        }
    }
    ctx->pc = 0x17B5B0u;
    // 0x17b5b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17b5b4: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B5B4u;
    {
        const bool branch_taken_0x17b5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x17B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5B4u;
        // 0x17b5b8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5b4) {
            ctx->pc = 0x17B5CCu;
            goto label_17b5cc;
        }
    }
    ctx->pc = 0x17B5BCu;
    // 0x17b5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b5c0: 0xc05eb56  jal         func_17AD58
    ctx->pc = 0x17B5C0u;
    SET_GPR_U32(ctx, 31, 0x17B5C8u);
    ctx->pc = 0x17B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5C0u;
    // 0x17b5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x17B5C0u, 0x17B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B5C8u;
label_17b5c8:
    // 0x17b5c8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17b5cc:
    // 0x17b5cc: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x17b5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17b5d0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17b5d4: 0x1643ffe9  bne         $s2, $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17B5D4u;
    {
        const bool branch_taken_0x17b5d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5D4u;
        // 0x17b5d8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5d4) {
            ctx->pc = 0x17B57Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b57c;
        }
    }
    ctx->pc = 0x17B5DCu;
label_17b5dc:
    // 0x17b5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b5e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b5e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b5e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b5ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17B5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5F0u;
        // 0x17b5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B5F8u;
}
