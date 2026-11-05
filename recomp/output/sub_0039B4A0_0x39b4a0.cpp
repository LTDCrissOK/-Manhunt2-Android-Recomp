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

// Function: sub_0039B4A0
// Address: 0x39b4a0 - 0x39b5a8
void sub_0039B4A0_0x39b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B4A0_0x39b4a0");
#endif

    switch (ctx->pc) {
        case 0x39b4a0u: goto label_39b4a0;
        case 0x39b4a4u: goto label_39b4a4;
        case 0x39b4a8u: goto label_39b4a8;
        case 0x39b4acu: goto label_39b4ac;
        case 0x39b4b0u: goto label_39b4b0;
        case 0x39b4b4u: goto label_39b4b4;
        case 0x39b4b8u: goto label_39b4b8;
        case 0x39b4bcu: goto label_39b4bc;
        case 0x39b4c0u: goto label_39b4c0;
        case 0x39b4c4u: goto label_39b4c4;
        case 0x39b4c8u: goto label_39b4c8;
        case 0x39b4ccu: goto label_39b4cc;
        case 0x39b4d0u: goto label_39b4d0;
        case 0x39b4d4u: goto label_39b4d4;
        case 0x39b4d8u: goto label_39b4d8;
        case 0x39b4dcu: goto label_39b4dc;
        case 0x39b4e0u: goto label_39b4e0;
        case 0x39b4e4u: goto label_39b4e4;
        case 0x39b4e8u: goto label_39b4e8;
        case 0x39b4ecu: goto label_39b4ec;
        case 0x39b4f0u: goto label_39b4f0;
        case 0x39b4f4u: goto label_39b4f4;
        case 0x39b4f8u: goto label_39b4f8;
        case 0x39b4fcu: goto label_39b4fc;
        case 0x39b500u: goto label_39b500;
        case 0x39b504u: goto label_39b504;
        case 0x39b508u: goto label_39b508;
        case 0x39b50cu: goto label_39b50c;
        case 0x39b510u: goto label_39b510;
        case 0x39b514u: goto label_39b514;
        case 0x39b518u: goto label_39b518;
        case 0x39b51cu: goto label_39b51c;
        case 0x39b520u: goto label_39b520;
        case 0x39b524u: goto label_39b524;
        case 0x39b528u: goto label_39b528;
        case 0x39b52cu: goto label_39b52c;
        case 0x39b530u: goto label_39b530;
        case 0x39b534u: goto label_39b534;
        case 0x39b538u: goto label_39b538;
        case 0x39b53cu: goto label_39b53c;
        case 0x39b540u: goto label_39b540;
        case 0x39b544u: goto label_39b544;
        case 0x39b548u: goto label_39b548;
        case 0x39b54cu: goto label_39b54c;
        case 0x39b550u: goto label_39b550;
        case 0x39b554u: goto label_39b554;
        case 0x39b558u: goto label_39b558;
        case 0x39b55cu: goto label_39b55c;
        case 0x39b560u: goto label_39b560;
        case 0x39b564u: goto label_39b564;
        case 0x39b568u: goto label_39b568;
        case 0x39b56cu: goto label_39b56c;
        case 0x39b570u: goto label_39b570;
        case 0x39b574u: goto label_39b574;
        case 0x39b578u: goto label_39b578;
        case 0x39b57cu: goto label_39b57c;
        case 0x39b580u: goto label_39b580;
        case 0x39b584u: goto label_39b584;
        case 0x39b588u: goto label_39b588;
        case 0x39b58cu: goto label_39b58c;
        case 0x39b590u: goto label_39b590;
        case 0x39b594u: goto label_39b594;
        case 0x39b598u: goto label_39b598;
        case 0x39b59cu: goto label_39b59c;
        case 0x39b5a0u: goto label_39b5a0;
        case 0x39b5a4u: goto label_39b5a4;
        default: break;
    }

    ctx->pc = 0x39b4a0u;

label_39b4a0:
    // 0x39b4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39b4a4:
    // 0x39b4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39b4a8:
    // 0x39b4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b4ac:
    // 0x39b4ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39b4b0:
    // 0x39b4b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39b4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b4b4:
    // 0x39b4b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_39b4b8:
    // 0x39b4b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39b4bc:
    // 0x39b4bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39b4c0:
    // 0x39b4c0: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x39b4c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_39b4c4:
    // 0x39b4c4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_39b4c8:
    if (ctx->pc == 0x39B4C8u) {
        ctx->pc = 0x39B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4C4u;
        // 0x39b4c8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4CCu;
        goto label_39b4cc;
    }
    ctx->pc = 0x39B4C4u;
    {
        const bool branch_taken_0x39b4c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4C4u;
        // 0x39b4c8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b4c4) {
            ctx->pc = 0x39B4FCu;
            goto label_39b4fc;
        }
    }
    ctx->pc = 0x39B4CCu;
label_39b4cc:
    // 0x39b4cc: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x39b4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_39b4d0:
    // 0x39b4d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39b4d4:
    // 0x39b4d4: 0x0  nop
    ctx->pc = 0x39b4d4u;
    // NOP
label_39b4d8:
    // 0x39b4d8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39b4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_39b4dc:
    // 0x39b4dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b4e0:
    // 0x39b4e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x39b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_39b4e4:
    // 0x39b4e4: 0x60f809  jalr        $v1
label_39b4e8:
    if (ctx->pc == 0x39B4E8u) {
        ctx->pc = 0x39B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4E4u;
        // 0x39b4e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4ECu;
        goto label_39b4ec;
    }
    ctx->pc = 0x39B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39B4ECu);
        ctx->pc = 0x39B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4E4u;
        // 0x39b4e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B4E4u, 0x39B4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B4ECu;
label_39b4ec:
    // 0x39b4ec: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x39b4ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_39b4f0:
    // 0x39b4f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x39b4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39b4f4:
    // 0x39b4f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_39b4f8:
    if (ctx->pc == 0x39B4F8u) {
        ctx->pc = 0x39B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B4F4u;
        // 0x39b4f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B4FCu;
        goto label_39b4fc;
    }
    ctx->pc = 0x39B4F4u;
    {
        const bool branch_taken_0x39b4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b4f4) {
            ctx->pc = 0x39B4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B4F4u;
            // 0x39b4f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b4d8;
        }
    }
    ctx->pc = 0x39B4FCu;
label_39b4fc:
    // 0x39b4fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39b500:
    // 0x39b500: 0xc0e6034  jal         func_3980D0
label_39b504:
    if (ctx->pc == 0x39B504u) {
        ctx->pc = 0x39B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B500u;
        // 0x39b504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B508u;
        goto label_39b508;
    }
    ctx->pc = 0x39B500u;
    SET_GPR_U32(ctx, 31, 0x39B508u);
    ctx->pc = 0x39B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B500u;
    // 0x39b504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980D0u, 0x39B500u, 0x39B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B508u;
label_39b508:
    // 0x39b508: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x39b508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_39b50c:
    // 0x39b50c: 0xc0e6060  jal         func_398180
label_39b510:
    if (ctx->pc == 0x39B510u) {
        ctx->pc = 0x39B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B50Cu;
        // 0x39b510: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B514u;
        goto label_39b514;
    }
    ctx->pc = 0x39B50Cu;
    SET_GPR_U32(ctx, 31, 0x39B514u);
    ctx->pc = 0x39B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B50Cu;
    // 0x39b510: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398180u, 0x39B50Cu, 0x39B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B514u;
label_39b514:
    // 0x39b514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b518:
    // 0x39b518: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x39b518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_39b51c:
    // 0x39b51c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x39b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39b520:
    // 0x39b520: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_39b524:
    // 0x39b524: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x39b524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_39b528:
    // 0x39b528: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x39b528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_39b52c:
    // 0x39b52c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x39b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_39b530:
    // 0x39b530: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x39b530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_39b534:
    // 0x39b534: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39b538:
    // 0x39b538: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x39b538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_39b53c:
    // 0x39b53c: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x39b53cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_39b540:
    // 0x39b540: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x39b540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_39b544:
    // 0x39b544: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x39b544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_39b548:
    // 0x39b548: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x39b548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_39b54c:
    // 0x39b54c: 0x8ca20c20  lw          $v0, 0xC20($a1)
    ctx->pc = 0x39b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3104)));
label_39b550:
    // 0x39b550: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x39b550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_39b554:
    // 0x39b554: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_39b558:
    if (ctx->pc == 0x39B558u) {
        ctx->pc = 0x39B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B554u;
        // 0x39b558: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B55Cu;
        goto label_39b55c;
    }
    ctx->pc = 0x39B554u;
    {
        const bool branch_taken_0x39b554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x39B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B554u;
        // 0x39b558: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b554) {
            ctx->pc = 0x39B568u;
            goto label_39b568;
        }
    }
    ctx->pc = 0x39B55Cu;
label_39b55c:
    // 0x39b55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39b560:
    // 0x39b560: 0xc0e7168  jal         func_39C5A0
label_39b564:
    if (ctx->pc == 0x39B564u) {
        ctx->pc = 0x39B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B560u;
        // 0x39b564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B568u;
        goto label_39b568;
    }
    ctx->pc = 0x39B560u;
    SET_GPR_U32(ctx, 31, 0x39B568u);
    ctx->pc = 0x39B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B560u;
    // 0x39b564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C5A0u, 0x39B560u, 0x39B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B568u;
label_39b568:
    // 0x39b568: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x39b568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39b56c:
    // 0x39b56c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_39b570:
    if (ctx->pc == 0x39B570u) {
        ctx->pc = 0x39B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B56Cu;
        // 0x39b570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B574u;
        goto label_39b574;
    }
    ctx->pc = 0x39B56Cu;
    {
        const bool branch_taken_0x39b56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B56Cu;
        // 0x39b570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b56c) {
            ctx->pc = 0x39B590u;
            goto label_39b590;
        }
    }
    ctx->pc = 0x39B574u;
label_39b574:
    // 0x39b574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b578:
    // 0x39b578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b57c:
    // 0x39b57c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39b57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39b580:
    // 0x39b580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b584:
    // 0x39b584: 0x80eb4dc  j           func_3AD370
label_39b588:
    if (ctx->pc == 0x39B588u) {
        ctx->pc = 0x39B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B584u;
        // 0x39b588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B58Cu;
        goto label_39b58c;
    }
    ctx->pc = 0x39B584u;
    ctx->pc = 0x39B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B584u;
    // 0x39b588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD370u, 0x39B584u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39B58Cu;
label_39b58c:
    // 0x39b58c: 0x0  nop
    ctx->pc = 0x39b58cu;
    // NOP
label_39b590:
    // 0x39b590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b594:
    // 0x39b594: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b598:
    // 0x39b598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39b598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39b59c:
    // 0x39b59c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b5a0:
    // 0x39b5a0: 0x3e00008  jr          $ra
label_39b5a4:
    if (ctx->pc == 0x39B5A4u) {
        ctx->pc = 0x39B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5A0u;
        // 0x39b5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B5A8u;
        goto label_fallthrough_0x39b5a0;
    }
    ctx->pc = 0x39B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B5A0u;
        // 0x39b5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b5a0:
    ctx->pc = 0x39B5A8u;
}
