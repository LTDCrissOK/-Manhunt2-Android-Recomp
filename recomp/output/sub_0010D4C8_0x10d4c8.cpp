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

// Function: sub_0010D4C8
// Address: 0x10d4c8 - 0x10d5a0
void sub_0010D4C8_0x10d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D4C8_0x10d4c8");
#endif

    switch (ctx->pc) {
        case 0x10d4fcu: goto label_10d4fc;
        case 0x10d514u: goto label_10d514;
        case 0x10d524u: goto label_10d524;
        case 0x10d540u: goto label_10d540;
        case 0x10d558u: goto label_10d558;
        default: break;
    }

    ctx->pc = 0x10d4c8u;

    // 0x10d4c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d4cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d4d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10d4d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10d4d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10d4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d4e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d4e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10d4ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10d4f0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10d4f4: 0xc05a618  jal         func_169860
    ctx->pc = 0x10D4F4u;
    SET_GPR_U32(ctx, 31, 0x10D4FCu);
    ctx->pc = 0x10D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4F4u;
    // 0x10d4f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x10D4F4u, 0x10D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4FCu;
label_10d4fc:
    // 0x10d4fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10d4fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d500: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10d500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10d504: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D504u;
    {
        const bool branch_taken_0x10d504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d504) {
            ctx->pc = 0x10D52Cu;
            goto label_10d52c;
        }
    }
    ctx->pc = 0x10D50Cu;
    // 0x10d50c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10D50Cu;
    {
        const bool branch_taken_0x10d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D50Cu;
        // 0x10d510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d50c) {
            ctx->pc = 0x10D578u;
            goto label_10d578;
        }
    }
    ctx->pc = 0x10D514u;
label_10d514:
    // 0x10d514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d51c: 0xc044100  jal         func_110400
    ctx->pc = 0x10D51Cu;
    SET_GPR_U32(ctx, 31, 0x10D524u);
    ctx->pc = 0x10D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D51Cu;
    // 0x10d520: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110400u, 0x10D51Cu, 0x10D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D524u;
label_10d524:
    // 0x10d524: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10D524u;
    {
        const bool branch_taken_0x10d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D524u;
        // 0x10d528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d524) {
            ctx->pc = 0x10D578u;
            goto label_10d578;
        }
    }
    ctx->pc = 0x10D52Cu;
label_10d52c:
    // 0x10d52c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D52Cu;
    {
        const bool branch_taken_0x10d52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D52Cu;
        // 0x10d530: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d52c) {
            ctx->pc = 0x10D574u;
            goto label_10d574;
        }
    }
    ctx->pc = 0x10D534u;
    // 0x10d534: 0x2653000c  addiu       $s3, $s2, 0xC
    ctx->pc = 0x10d534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x10d538: 0x24160021  addiu       $s6, $zero, 0x21
    ctx->pc = 0x10d538u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x10d53c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10d540:
    // 0x10d540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10d540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d544: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10d548: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d54c: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10d54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10d550: 0xc044158  jal         func_110560
    ctx->pc = 0x10D550u;
    SET_GPR_U32(ctx, 31, 0x10D558u);
    ctx->pc = 0x10D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D550u;
    // 0x10d554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110560u, 0x10D550u, 0x10D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D558u;
label_10d558:
    // 0x10d558: 0x1456ffee  bne         $v0, $s6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10D558u;
    {
        const bool branch_taken_0x10d558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x10D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D558u;
        // 0x10d55c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d558) {
            ctx->pc = 0x10D514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d514;
        }
    }
    ctx->pc = 0x10D560u;
    // 0x10d560: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10d560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10d564: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x10d564u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10d568: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10d568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d56c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10D56Cu;
    {
        const bool branch_taken_0x10d56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D56Cu;
        // 0x10d570: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d56c) {
            ctx->pc = 0x10D540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d540;
        }
    }
    ctx->pc = 0x10D574u;
label_10d574:
    // 0x10d574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d578:
    // 0x10d578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10d584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10d588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d58c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10d58cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d590: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10d590u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d594: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10d594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10d598: 0x3e00008  jr          $ra
    ctx->pc = 0x10D598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D598u;
        // 0x10d59c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D5A0u;
}
