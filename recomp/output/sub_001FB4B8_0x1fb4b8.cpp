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

// Function: sub_001FB4B8
// Address: 0x1fb4b8 - 0x1fb650
void sub_001FB4B8_0x1fb4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB4B8_0x1fb4b8");
#endif

    switch (ctx->pc) {
        case 0x1fb4fcu: goto label_1fb4fc;
        case 0x1fb530u: goto label_1fb530;
        case 0x1fb554u: goto label_1fb554;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb59cu: goto label_1fb59c;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5e0u: goto label_1fb5e0;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb604u: goto label_1fb604;
        default: break;
    }

    ctx->pc = 0x1fb4b8u;

    // 0x1fb4b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fb4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fb4bc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1fb4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1fb4c0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1fb4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1fb4c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fb4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1fb4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1fb4cc: 0x26640298  addiu       $a0, $s3, 0x298
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 664));
    // 0x1fb4d0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1fb4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1fb4d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1fb4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1fb4d8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1fb4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1fb4dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1fb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1fb4e0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1fb4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1fb4e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fb4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fb4e8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1fb4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1fb4ec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB4ECu;
    {
        const bool branch_taken_0x1fb4ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fb4ec) {
            ctx->pc = 0x1FB4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB4ECu;
            // 0x1fb4f0: 0x92630280  lbu         $v1, 0x280($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB500u;
            goto label_1fb500;
        }
    }
    ctx->pc = 0x1FB4F4u;
    // 0x1fb4f4: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x1FB4F4u;
    SET_GPR_U32(ctx, 31, 0x1FB4FCu);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x1FB4F4u, 0x1FB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB4FCu;
label_1fb4fc:
    // 0x1fb4fc: 0x92630280  lbu         $v1, 0x280($s3)
    ctx->pc = 0x1fb4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 640)));
label_1fb500:
    // 0x1fb500: 0x92620281  lbu         $v0, 0x281($s3)
    ctx->pc = 0x1fb500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 641)));
    // 0x1fb504: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb508: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1fb508u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb50c: 0x12a00045  beqz        $s5, . + 4 + (0x45 << 2)
    ctx->pc = 0x1FB50Cu;
    {
        const bool branch_taken_0x1fb50c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB50Cu;
        // 0x1fb510: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb50c) {
            ctx->pc = 0x1FB624u;
            goto label_1fb624;
        }
    }
    ctx->pc = 0x1FB514u;
    // 0x1fb514: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1FB514u;
    {
        const bool branch_taken_0x1fb514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB514u;
        // 0x1fb518: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb514) {
            ctx->pc = 0x1FB5D4u;
            goto label_1fb5d4;
        }
    }
    ctx->pc = 0x1FB51Cu;
    // 0x1fb51c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1fb51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1fb520: 0x3c17004a  lui         $s7, 0x4A
    ctx->pc = 0x1fb520u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)74 << 16));
    // 0x1fb524: 0x24560480  addiu       $s6, $v0, 0x480
    ctx->pc = 0x1fb524u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1fb528: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fb52c: 0x0  nop
    ctx->pc = 0x1fb52cu;
    // NOP
label_1fb530:
    // 0x1fb530: 0x26e49c38  addiu       $a0, $s7, -0x63C8
    ctx->pc = 0x1fb530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941752));
    // 0x1fb534: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fb538: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fb538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb53c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1fb53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fb540: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fb540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb544: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fb548: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb54c: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1FB54Cu;
    SET_GPR_U32(ctx, 31, 0x1FB554u);
    ctx->pc = 0x1FB550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB54Cu;
    // 0x1fb550: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1FB54Cu, 0x1FB554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB554u;
label_1fb554:
    // 0x1fb554: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x1fb554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1fb558: 0x58600004  blezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB558u;
    {
        const bool branch_taken_0x1fb558 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1fb558) {
            ctx->pc = 0x1FB55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB558u;
            // 0x1fb55c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB56Cu;
            goto label_1fb56c;
        }
    }
    ctx->pc = 0x1FB560u;
    // 0x1fb560: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x1FB560u;
    SET_GPR_U32(ctx, 31, 0x1FB568u);
    ctx->pc = 0x1FB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB560u;
    // 0x1fb564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x1FB560u, 0x1FB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB568u;
label_1fb568:
    // 0x1fb568: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1fb568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1fb56c:
    // 0x1fb56c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1fb56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fb570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB570u;
    {
        const bool branch_taken_0x1fb570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB570u;
        // 0x1fb574: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb570) {
            ctx->pc = 0x1FB588u;
            goto label_1fb588;
        }
    }
    ctx->pc = 0x1FB578u;
    // 0x1fb578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB578u;
    {
        const bool branch_taken_0x1fb578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB578u;
        // 0x1fb57c: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb578) {
            ctx->pc = 0x1FB588u;
            goto label_1fb588;
        }
    }
    ctx->pc = 0x1FB580u;
    // 0x1fb580: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB580u;
    {
        const bool branch_taken_0x1fb580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB580u;
        // 0x1fb584: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb580) {
            ctx->pc = 0x1FB5C0u;
            goto label_1fb5c0;
        }
    }
    ctx->pc = 0x1FB588u;
label_1fb588:
    // 0x1fb588: 0x2748021  addu        $s0, $s3, $s4
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1fb58c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fb58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb590: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fb590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fb594: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FB594u;
    SET_GPR_U32(ctx, 31, 0x1FB59Cu);
    ctx->pc = 0x1FB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB594u;
    // 0x1fb598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FB594u, 0x1FB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB59Cu;
label_1fb59c:
    // 0x1fb59c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fb59cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fb5a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fb5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb5a4: 0x9205003c  lbu         $a1, 0x3C($s0)
    ctx->pc = 0x1fb5a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fb5a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fb5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb5ac: 0xc07e70c  jal         func_1F9C30
    ctx->pc = 0x1FB5ACu;
    SET_GPR_U32(ctx, 31, 0x1FB5B4u);
    ctx->pc = 0x1FB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5ACu;
    // 0x1fb5b0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C30u, 0x1FB5ACu, 0x1FB5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5B4u;
label_1fb5b4:
    // 0x1fb5b4: 0xc082662  jal         func_209988
    ctx->pc = 0x1FB5B4u;
    SET_GPR_U32(ctx, 31, 0x1FB5BCu);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x1FB5B4u, 0x1FB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5BCu;
label_1fb5bc:
    // 0x1fb5bc: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fb5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fb5c0:
    // 0x1fb5c0: 0x92620280  lbu         $v0, 0x280($s3)
    ctx->pc = 0x1fb5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 640)));
    // 0x1fb5c4: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1fb5c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb5c8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1fb5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fb5cc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1FB5CCu;
    {
        const bool branch_taken_0x1fb5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5CCu;
        // 0x1fb5d0: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5cc) {
            ctx->pc = 0x1FB530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb530;
        }
    }
    ctx->pc = 0x1FB5D4u;
label_1fb5d4:
    // 0x1fb5d4: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x1fb5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1fb5d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FB5D8u;
    {
        const bool branch_taken_0x1fb5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5D8u;
        // 0x1fb5dc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5d8) {
            ctx->pc = 0x1FB624u;
            goto label_1fb624;
        }
    }
    ctx->pc = 0x1FB5E0u;
label_1fb5e0:
    // 0x1fb5e0: 0x128180  sll         $s0, $s2, 6
    ctx->pc = 0x1fb5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fb5e4: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1fb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1fb5e8: 0x8443000e  lh          $v1, 0xE($v0)
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1fb5ec: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB5ECu;
    {
        const bool branch_taken_0x1fb5ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5ECu;
        // 0x1fb5f0: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5ec) {
            ctx->pc = 0x1FB5FCu;
            goto label_1fb5fc;
        }
    }
    ctx->pc = 0x1FB5F4u;
    // 0x1fb5f4: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x1FB5F4u;
    SET_GPR_U32(ctx, 31, 0x1FB5FCu);
    ctx->pc = 0x1FB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5F4u;
    // 0x1fb5f8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x1FB5F4u, 0x1FB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5FCu;
label_1fb5fc:
    // 0x1fb5fc: 0xc07ed06  jal         func_1FB418
    ctx->pc = 0x1FB5FCu;
    SET_GPR_U32(ctx, 31, 0x1FB604u);
    ctx->pc = 0x1FB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5FCu;
    // 0x1fb600: 0x2702021  addu        $a0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB418u, 0x1FB5FCu, 0x1FB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB604u;
label_1fb604:
    // 0x1fb604: 0x92620281  lbu         $v0, 0x281($s3)
    ctx->pc = 0x1fb604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 641)));
    // 0x1fb608: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fb60c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1fb60cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fb614: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x1fb614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1fb618: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FB618u;
    {
        const bool branch_taken_0x1fb618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB618u;
        // 0x1fb61c: 0xa2620281  sb          $v0, 0x281($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 641), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb618) {
            ctx->pc = 0x1FB5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb5e0;
        }
    }
    ctx->pc = 0x1FB620u;
    // 0x1fb620: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1fb620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb624:
    // 0x1fb624: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1fb624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fb628: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1fb628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb62c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1fb62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fb630: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1fb630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb634: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1fb634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fb638: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1fb638u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb63c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1fb63cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb640: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fb640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fb644: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB644u;
        // 0x1fb648: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB64Cu;
    // 0x1fb64c: 0x0  nop
    ctx->pc = 0x1fb64cu;
    // NOP
    ctx->pc = 0x1fb650u;
}
