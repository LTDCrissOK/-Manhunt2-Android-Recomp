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

// Function: sub_00335510
// Address: 0x335510 - 0x3355d0
void sub_00335510_0x335510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335510_0x335510");
#endif

    switch (ctx->pc) {
        case 0x335578u: goto label_335578;
        case 0x33559cu: goto label_33559c;
        case 0x3355b0u: goto label_3355b0;
        default: break;
    }

    ctx->pc = 0x335510u;

    // 0x335510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33551c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335528: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33552c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x33552cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x335530: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x335530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x335534: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x335534u;
    {
        const bool branch_taken_0x335534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335534u;
        // 0x335538: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335534) {
            ctx->pc = 0x33557Cu;
            goto label_33557c;
        }
    }
    ctx->pc = 0x33553Cu;
    // 0x33553c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x33553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x335540: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x335540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x335544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335544u;
    {
        const bool branch_taken_0x335544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335544u;
        // 0x335548: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335544) {
            ctx->pc = 0x335554u;
            goto label_335554;
        }
    }
    ctx->pc = 0x33554Cu;
    // 0x33554c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33554Cu;
    {
        const bool branch_taken_0x33554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33554Cu;
        // 0x335550: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33554c) {
            ctx->pc = 0x335558u;
            goto label_335558;
        }
    }
    ctx->pc = 0x335554u;
label_335554:
    // 0x335554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335558:
    // 0x335558: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x335558u;
    {
        const bool branch_taken_0x335558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335558) {
            ctx->pc = 0x33555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335558u;
            // 0x33555c: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335580u;
            goto label_335580;
        }
    }
    ctx->pc = 0x335560u;
    // 0x335560: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x335560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x335564: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x335564u;
    {
        const bool branch_taken_0x335564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335564) {
            ctx->pc = 0x335568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335564u;
            // 0x335568: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335570u;
            goto label_335570;
        }
    }
    ctx->pc = 0x33556Cu;
    // 0x33556c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x33556cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_335570:
    // 0x335570: 0xc0cd1d6  jal         func_334758
    ctx->pc = 0x335570u;
    SET_GPR_U32(ctx, 31, 0x335578u);
    ctx->pc = 0x335574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335570u;
    // 0x335574: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334758u, 0x335570u, 0x335578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335578u;
label_335578:
    // 0x335578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x335578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33557c:
    // 0x33557c: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x33557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_335580:
    // 0x335580: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x335580u;
    {
        const bool branch_taken_0x335580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335580u;
        // 0x335584: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335580) {
            ctx->pc = 0x3355B8u;
            goto label_3355b8;
        }
    }
    ctx->pc = 0x335588u;
    // 0x335588: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x335588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33558c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33558Cu;
    {
        const bool branch_taken_0x33558c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33558Cu;
        // 0x335590: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33558c) {
            ctx->pc = 0x3355B8u;
            goto label_3355b8;
        }
    }
    ctx->pc = 0x335594u;
    // 0x335594: 0xc0cd20c  jal         func_334830
    ctx->pc = 0x335594u;
    SET_GPR_U32(ctx, 31, 0x33559Cu);
    ctx->pc = 0x334830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334830u, 0x335594u, 0x33559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33559Cu;
label_33559c:
    // 0x33559c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33559Cu;
    {
        const bool branch_taken_0x33559c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3355A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33559Cu;
        // 0x3355a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33559c) {
            ctx->pc = 0x3355B4u;
            goto label_3355b4;
        }
    }
    ctx->pc = 0x3355A4u;
    // 0x3355a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3355a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355a8: 0xc0cd574  jal         func_3355D0
    ctx->pc = 0x3355A8u;
    SET_GPR_U32(ctx, 31, 0x3355B0u);
    ctx->pc = 0x3355ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355A8u;
    // 0x3355ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355D0u, 0x3355A8u, 0x3355B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355B0u;
label_3355b0:
    // 0x3355b0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3355b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3355b4:
    // 0x3355b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3355b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3355b8:
    // 0x3355b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3355b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3355bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3355bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3355c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3355c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3355c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3355c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3355c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3355C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3355CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3355C8u;
        // 0x3355cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3355C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3355D0u;
}
