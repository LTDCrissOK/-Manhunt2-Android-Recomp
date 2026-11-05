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

// Function: sub_002CE588
// Address: 0x2ce588 - 0x2ce988
void sub_002CE588_0x2ce588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE588_0x2ce588");
#endif

    switch (ctx->pc) {
        case 0x2ce5ecu: goto label_2ce5ec;
        case 0x2ce620u: goto label_2ce620;
        case 0x2ce660u: goto label_2ce660;
        case 0x2ce670u: goto label_2ce670;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce698u: goto label_2ce698;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6e4u: goto label_2ce6e4;
        case 0x2ce764u: goto label_2ce764;
        case 0x2ce76cu: goto label_2ce76c;
        case 0x2ce7e0u: goto label_2ce7e0;
        case 0x2ce7f8u: goto label_2ce7f8;
        case 0x2ce808u: goto label_2ce808;
        case 0x2ce810u: goto label_2ce810;
        case 0x2ce820u: goto label_2ce820;
        case 0x2ce844u: goto label_2ce844;
        case 0x2ce864u: goto label_2ce864;
        default: break;
    }

    ctx->pc = 0x2ce588u;

    // 0x2ce588: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x2ce58c: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x2ce58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
    // 0x2ce590: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x2ce590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x2ce594: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2ce594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2ce598: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x2ce598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x2ce59c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2ce59cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5a0: 0xffb702e8  sd          $s7, 0x2E8($sp)
    ctx->pc = 0x2ce5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 23));
    // 0x2ce5a4: 0x24844ef0  addiu       $a0, $a0, 0x4EF0
    ctx->pc = 0x2ce5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20208));
    // 0x2ce5a8: 0xe7b50308  swc1        $f21, 0x308($sp)
    ctx->pc = 0x2ce5a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x2ce5ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ce5acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5b0: 0xffb002b0  sd          $s0, 0x2B0($sp)
    ctx->pc = 0x2ce5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    // 0x2ce5b4: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x2ce5b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x2ce5b8: 0xffb102b8  sd          $s1, 0x2B8($sp)
    ctx->pc = 0x2ce5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 17));
    // 0x2ce5bc: 0xffb202c0  sd          $s2, 0x2C0($sp)
    ctx->pc = 0x2ce5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
    // 0x2ce5c0: 0xffb302c8  sd          $s3, 0x2C8($sp)
    ctx->pc = 0x2ce5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 19));
    // 0x2ce5c4: 0xffb502d8  sd          $s5, 0x2D8($sp)
    ctx->pc = 0x2ce5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 21));
    // 0x2ce5c8: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x2ce5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
    // 0x2ce5cc: 0xffbf02f8  sd          $ra, 0x2F8($sp)
    ctx->pc = 0x2ce5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 760), GPR_U64(ctx, 31));
    // 0x2ce5d0: 0xe7ba0330  swc1        $f26, 0x330($sp)
    ctx->pc = 0x2ce5d0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x2ce5d4: 0xe7b90328  swc1        $f25, 0x328($sp)
    ctx->pc = 0x2ce5d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
    // 0x2ce5d8: 0xe7b80320  swc1        $f24, 0x320($sp)
    ctx->pc = 0x2ce5d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x2ce5dc: 0xe7b70318  swc1        $f23, 0x318($sp)
    ctx->pc = 0x2ce5dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x2ce5e0: 0xe7b60310  swc1        $f22, 0x310($sp)
    ctx->pc = 0x2ce5e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x2ce5e4: 0xc0aed32  jal         func_2BB4C8
    ctx->pc = 0x2CE5E4u;
    SET_GPR_U32(ctx, 31, 0x2CE5ECu);
    ctx->pc = 0x2CE5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE5E4u;
    // 0x2ce5e8: 0xe7b40300  swc1        $f20, 0x300($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB4C8u, 0x2CE5E4u, 0x2CE5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5ECu;
label_2ce5ec:
    // 0x2ce5ec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2ce5f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ce5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ce5f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ce5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ce5f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ce600: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2ce600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce604: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x2ce604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ce608: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2ce608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce60c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CE60Cu;
    {
        const bool branch_taken_0x2ce60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE60Cu;
        // 0x2ce610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce60c) {
            ctx->pc = 0x2CE644u;
            goto label_2ce644;
        }
    }
    ctx->pc = 0x2CE614u;
    // 0x2ce614: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ce614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce618: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ce618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce61c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ce61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2ce620:
    // 0x2ce620: 0x28e20200  slti        $v0, $a3, 0x200
    ctx->pc = 0x2ce620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2ce624: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE624u;
    {
        const bool branch_taken_0x2ce624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE624u;
        // 0x2ce628: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce624) {
            ctx->pc = 0x2CE644u;
            goto label_2ce644;
        }
    }
    ctx->pc = 0x2CE62Cu;
    // 0x2ce62c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2ce62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ce630: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x2ce630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2ce634: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2ce634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ce638: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2ce638u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ce63c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CE63Cu;
    {
        const bool branch_taken_0x2ce63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE63Cu;
        // 0x2ce640: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce63c) {
            ctx->pc = 0x2CE620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce620;
        }
    }
    ctx->pc = 0x2CE644u;
label_2ce644:
    // 0x2ce644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ce644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce648: 0xa3a0021f  sb          $zero, 0x21F($sp)
    ctx->pc = 0x2ce648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce64c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ce64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ce650: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x2ce650u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x2ce654: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2ce654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x2ce658: 0x27b50220  addiu       $s5, $sp, 0x220
    ctx->pc = 0x2ce658u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2ce65c: 0x0  nop
    ctx->pc = 0x2ce65cu;
    // NOP
label_2ce660:
    // 0x2ce660: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x2ce660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ce664: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ce664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ce668: 0xc0efb2d  jal         func_3BECB4
    ctx->pc = 0x2CE668u;
    SET_GPR_U32(ctx, 31, 0x2CE670u);
    ctx->pc = 0x2CE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE668u;
    // 0x2ce66c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BECB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BECB4u, 0x2CE668u, 0x2CE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE670u;
label_2ce670:
    // 0x2ce670: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce678: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x2CE678u;
    SET_GPR_U32(ctx, 31, 0x2CE680u);
    ctx->pc = 0x2CE67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE678u;
    // 0x2ce67c: 0x26e50aa0  addiu       $a1, $s7, 0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 2720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x2CE678u, 0x2CE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE680u;
label_2ce680:
    // 0x2ce680: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce684: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE684u;
    {
        const bool branch_taken_0x2ce684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE684u;
        // 0x2ce688: 0x72102b  sltu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce684) {
            ctx->pc = 0x2CE6A0u;
            goto label_2ce6a0;
        }
    }
    ctx->pc = 0x2CE68Cu;
    // 0x2ce68c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ce68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce690: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x2CE690u;
    SET_GPR_U32(ctx, 31, 0x2CE698u);
    ctx->pc = 0x2CE694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE690u;
    // 0x2ce694: 0x26c50aa8  addiu       $a1, $s6, 0xAA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x2CE690u, 0x2CE698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE698u;
label_2ce698:
    // 0x2ce698: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce69c: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x2ce69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2ce6a0:
    // 0x2ce6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE6A0u;
    {
        const bool branch_taken_0x2ce6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6a0) {
            ctx->pc = 0x2CE6B0u;
            goto label_2ce6b0;
        }
    }
    ctx->pc = 0x2CE6A8u;
    // 0x2ce6a8: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CE6A8u;
    {
        const bool branch_taken_0x2ce6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6a8) {
            ctx->pc = 0x2CE6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6A8u;
            // 0x2ce6ac: 0x24710004  addiu       $s1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE718u;
            goto label_2ce718;
        }
    }
    ctx->pc = 0x2CE6B0u;
label_2ce6b0:
    // 0x2ce6b0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CE6B0u;
    {
        const bool branch_taken_0x2ce6b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6B0u;
        // 0x2ce6b4: 0x2518023  subu        $s0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6b0) {
            ctx->pc = 0x2CE710u;
            goto label_2ce710;
        }
    }
    ctx->pc = 0x2CE6B8u;
    // 0x2ce6b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ce6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ce6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6c0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2CE6C0u;
    SET_GPR_U32(ctx, 31, 0x2CE6C8u);
    ctx->pc = 0x2CE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6C0u;
    // 0x2ce6c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2CE6C0u, 0x2CE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6C8u;
label_2ce6c8:
    // 0x2ce6c8: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x2ce6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2ce6cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ce6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce6d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ce6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ce6d4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2ce6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce6d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ce6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6dc: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x2CE6DCu;
    SET_GPR_U32(ctx, 31, 0x2CE6E4u);
    ctx->pc = 0x2CE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE6DCu;
    // 0x2ce6e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x2CE6DCu, 0x2CE6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6E4u;
label_2ce6e4:
    // 0x2ce6e4: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2ce6e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2ce6e8: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x2ce6e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce6ec: 0x0  nop
    ctx->pc = 0x2ce6ecu;
    // NOP
    // 0x2ce6f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE6F0u;
    {
        const bool branch_taken_0x2ce6f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6F0u;
        // 0x2ce6f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6f0) {
            ctx->pc = 0x2CE704u;
            goto label_2ce704;
        }
    }
    ctx->pc = 0x2CE6F8u;
    // 0x2ce6f8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2ce6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce6fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE6FCu;
    {
        const bool branch_taken_0x2ce6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6FCu;
        // 0x2ce700: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6fc) {
            ctx->pc = 0x2CE720u;
            goto label_2ce720;
        }
    }
    ctx->pc = 0x2CE704u;
label_2ce704:
    // 0x2ce704: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2ce704u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x2ce708: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x2CE708u;
    {
        const bool branch_taken_0x2ce708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE708u;
        // 0x2ce70c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce708) {
            ctx->pc = 0x2CE660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce660;
        }
    }
    ctx->pc = 0x2CE710u;
label_2ce710:
    // 0x2ce710: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE710u;
    {
        const bool branch_taken_0x2ce710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE710u;
        // 0x2ce714: 0x24710004  addiu       $s1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce710) {
            ctx->pc = 0x2CE740u;
            goto label_2ce740;
        }
    }
    ctx->pc = 0x2CE718u;
label_2ce718:
    // 0x2ce718: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ce718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce71c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ce71cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ce720:
    // 0x2ce720: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x2ce720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ce724: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE724u;
    {
        const bool branch_taken_0x2ce724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce724) {
            ctx->pc = 0x2CE744u;
            goto label_2ce744;
        }
    }
    ctx->pc = 0x2CE72Cu;
    // 0x2ce72c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ce72cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ce730: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ce734: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2ce738: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x2CE738u;
    {
        const bool branch_taken_0x2ce738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE738u;
        // 0x2ce73c: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce738) {
            ctx->pc = 0x2CE660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce660;
        }
    }
    ctx->pc = 0x2CE740u;
label_2ce740:
    // 0x2ce740: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ce740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2ce744:
    // 0x2ce744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ce744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ce748: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ce748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ce74c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ce74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce750: 0x3c013eac  lui         $at, 0x3EAC
    ctx->pc = 0x2ce750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16044 << 16));
    // 0x2ce754: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ce754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ce758: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2ce758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2ce75c: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2CE75Cu;
    SET_GPR_U32(ctx, 31, 0x2CE764u);
    ctx->pc = 0x2CE760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE75Cu;
    // 0x2ce760: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2CE75Cu, 0x2CE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE764u;
label_2ce764:
    // 0x2ce764: 0xc0a2202  jal         func_288808
    ctx->pc = 0x2CE764u;
    SET_GPR_U32(ctx, 31, 0x2CE76Cu);
    ctx->pc = 0x2CE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE764u;
    // 0x2ce768: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x2CE764u, 0x2CE76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE76Cu;
label_2ce76c:
    // 0x2ce76c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE76Cu;
    {
        const bool branch_taken_0x2ce76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE76Cu;
        // 0x2ce770: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce76c) {
            ctx->pc = 0x2CE780u;
            goto label_2ce780;
        }
    }
    ctx->pc = 0x2CE774u;
    // 0x2ce774: 0x3c013e5e  lui         $at, 0x3E5E
    ctx->pc = 0x2ce774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15966 << 16));
    // 0x2ce778: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x2ce778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x2ce77c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2ce77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2ce780:
    // 0x2ce780: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE780u;
    {
        const bool branch_taken_0x2ce780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE780u;
        // 0x2ce784: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce780) {
            ctx->pc = 0x2CE7A4u;
            goto label_2ce7a4;
        }
    }
    ctx->pc = 0x2CE788u;
    // 0x2ce788: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2ce788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2ce78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce790: 0x0  nop
    ctx->pc = 0x2ce790u;
    // NOP
    // 0x2ce794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ce794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ce798: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2ce798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2ce79c: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x2ce79cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x2ce7a0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2ce7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2ce7a4:
    // 0x2ce7a4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2ce7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2ce7a8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2ce7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce7ac: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x2ce7acu;
    { uint32_t bits = FAST_READ32(0x47004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7b0: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x2ce7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2ce7b4: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x2ce7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2ce7b8: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x2ce7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x2ce7bc: 0xe7a10224  swc1        $f1, 0x224($sp)
    ctx->pc = 0x2ce7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2ce7c0: 0x1a800042  blez        $s4, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CE7C0u;
    {
        const bool branch_taken_0x2ce7c0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2CE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7C0u;
        // 0x2ce7c4: 0xe7a0022c  swc1        $f0, 0x22C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7c0) {
            ctx->pc = 0x2CE8CCu;
            goto label_2ce8cc;
        }
    }
    ctx->pc = 0x2CE7C8u;
    // 0x2ce7c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ce7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ce7cc: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2ce7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2ce7d0: 0x4600a646  mov.s       $f25, $f20
    ctx->pc = 0x2ce7d0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
    // 0x2ce7d4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2ce7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce7d8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2ce7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce7dc: 0x3c120047  lui         $s2, 0x47
    ctx->pc = 0x2ce7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)71 << 16));
label_2ce7e0:
    // 0x2ce7e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce7e4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2ce7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce7e8: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2CE7E8u;
    {
        const bool branch_taken_0x2ce7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7e8) {
            ctx->pc = 0x2CE7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE7E8u;
            // 0x2ce7ec: 0x4618bdc0  add.s       $f23, $f23, $f24 (Delay Slot)
            ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE8C0u;
            goto label_2ce8c0;
        }
    }
    ctx->pc = 0x2CE7F0u;
    // 0x2ce7f0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2CE7F0u;
    SET_GPR_U32(ctx, 31, 0x2CE7F8u);
    ctx->pc = 0x2CE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE7F0u;
    // 0x2ce7f4: 0x26450ab0  addiu       $a1, $s2, 0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2CE7F0u, 0x2CE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7F8u;
label_2ce7f8:
    // 0x2ce7f8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2CE7F8u;
    {
        const bool branch_taken_0x2ce7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7F8u;
        // 0x2ce7fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7f8) {
            ctx->pc = 0x2CE8BCu;
            goto label_2ce8bc;
        }
    }
    ctx->pc = 0x2CE800u;
    // 0x2ce800: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x2CE800u;
    SET_GPR_U32(ctx, 31, 0x2CE808u);
    ctx->pc = 0x2CE804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE800u;
    // 0x2ce804: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x2CE800u, 0x2CE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE808u;
label_2ce808:
    // 0x2ce808: 0xc0f8134  jal         func_3E04D0
    ctx->pc = 0x2CE808u;
    SET_GPR_U32(ctx, 31, 0x2CE810u);
    ctx->pc = 0x2CE80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE808u;
    // 0x2ce80c: 0x461ac582  mul.s       $f22, $f24, $f26 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04D0u, 0x2CE808u, 0x2CE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE810u;
label_2ce810:
    // 0x2ce810: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce814: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2ce814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2ce818: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x2CE818u;
    SET_GPR_U32(ctx, 31, 0x2CE820u);
    ctx->pc = 0x2CE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE818u;
    // 0x2ce81c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x2CE818u, 0x2CE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE820u;
label_2ce820:
    // 0x2ce820: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ce820u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce824: 0x461aa802  mul.s       $f0, $f21, $f26
    ctx->pc = 0x2ce824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
    // 0x2ce828: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x2CE828u;
    {
        const bool branch_taken_0x2ce828 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE828u;
        // 0x2ce82c: 0x4600d501  sub.s       $f20, $f26, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce828) {
            ctx->pc = 0x2CE864u;
            goto label_2ce864;
        }
    }
    ctx->pc = 0x2CE830u;
    // 0x2ce830: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2ce830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ce834: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2ce834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ce838: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ce83c: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2CE83Cu;
    SET_GPR_U32(ctx, 31, 0x2CE844u);
    ctx->pc = 0x2CE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE83Cu;
    // 0x2ce840: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2CE83Cu, 0x2CE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE844u;
label_2ce844:
    // 0x2ce844: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce848: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ce848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ce84c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2ce84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2ce850: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2ce850u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2ce854: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x2ce854u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x2ce858: 0x4600cbc6  mov.s       $f15, $f25
    ctx->pc = 0x2ce858u;
    ctx->f[15] = FPU_MOV_S(ctx->f[25]);
    // 0x2ce85c: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x2CE85Cu;
    SET_GPR_U32(ctx, 31, 0x2CE864u);
    ctx->pc = 0x2CE860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE85Cu;
    // 0x2ce860: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x2CE85Cu, 0x2CE864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE864u;
label_2ce864:
    // 0x2ce864: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2ce868: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ce868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ce86c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ce86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce870: 0x4616a040  add.s       $f1, $f20, $f22
    ctx->pc = 0x2ce870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2ce874: 0x4616a181  sub.s       $f6, $f20, $f22
    ctx->pc = 0x2ce874u;
    ctx->f[6] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2ce878: 0xc7a50224  lwc1        $f5, 0x224($sp)
    ctx->pc = 0x2ce878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce87c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2ce87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2ce880: 0xc7a40228  lwc1        $f4, 0x228($sp)
    ctx->pc = 0x2ce880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce884: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2ce884u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2ce888: 0xc7a2022c  lwc1        $f2, 0x22C($sp)
    ctx->pc = 0x2ce888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce88c: 0xc7a30230  lwc1        $f3, 0x230($sp)
    ctx->pc = 0x2ce88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce890: 0x46062969  min.s       $f5, $f5, $f6
    ctx->pc = 0x2ce890u;
    ctx->f[5] = std::min(ctx->f[5], ctx->f[6]);
    // 0x2ce894: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x2ce894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x2ce898: 0x46172129  min.s       $f4, $f4, $f23
    ctx->pc = 0x2ce898u;
    ctx->f[4] = std::min(ctx->f[4], ctx->f[23]);
    // 0x2ce89c: 0x460110a8  max.s       $f2, $f2, $f1
    ctx->pc = 0x2ce89cu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[1]);
    // 0x2ce8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce8a4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x2ce8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x2ce8a8: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x2ce8a8u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
    // 0x2ce8ac: 0xe7a50224  swc1        $f5, 0x224($sp)
    ctx->pc = 0x2ce8acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2ce8b0: 0xe7a40228  swc1        $f4, 0x228($sp)
    ctx->pc = 0x2ce8b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2ce8b4: 0xe7a2022c  swc1        $f2, 0x22C($sp)
    ctx->pc = 0x2ce8b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x2ce8b8: 0xe7a30230  swc1        $f3, 0x230($sp)
    ctx->pc = 0x2ce8b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_2ce8bc:
    // 0x2ce8bc: 0x4618bdc0  add.s       $f23, $f23, $f24
    ctx->pc = 0x2ce8bcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
label_2ce8c0:
    // 0x2ce8c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ce8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce8c4: 0x1620ffc6  bnez        $s1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2CE8C4u;
    {
        const bool branch_taken_0x2ce8c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8C4u;
        // 0x2ce8c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8c4) {
            ctx->pc = 0x2CE7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce7e0;
        }
    }
    ctx->pc = 0x2CE8CCu;
label_2ce8cc:
    // 0x2ce8cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2ce8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2ce8d0: 0xc7a30224  lwc1        $f3, 0x224($sp)
    ctx->pc = 0x2ce8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ce8d4: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x2ce8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x2ce8d8: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x2ce8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce8dc: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x2ce8dcu;
    { uint32_t bits = FAST_READ32(0x6BAC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ce8e0: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x2ce8e0u;
    { uint32_t bits = FAST_READ32(0x6BAC5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ce8e4: 0xc7a2022c  lwc1        $f2, 0x22C($sp)
    ctx->pc = 0x2ce8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ce8e8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ce8e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ce8ec: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x2ce8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce8f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ce8f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ce8f4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2ce8f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ce8f8: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x2ce8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2ce8fc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ce8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ce900: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x2ce900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2ce904: 0xe7a30224  swc1        $f3, 0x224($sp)
    ctx->pc = 0x2ce904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2ce908: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce90c: 0xe7a2022c  swc1        $f2, 0x22C($sp)
    ctx->pc = 0x2ce90cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x2ce910: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x2ce910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2ce914: 0xdfb002b0  ld          $s0, 0x2B0($sp)
    ctx->pc = 0x2ce914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ce918: 0x6ba40227  ldl         $a0, 0x227($sp)
    ctx->pc = 0x2ce918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ce91c: 0x6fa40220  ldr         $a0, 0x220($sp)
    ctx->pc = 0x2ce91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ce920: 0x6ba5022f  ldl         $a1, 0x22F($sp)
    ctx->pc = 0x2ce920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ce924: 0x6fa50228  ldr         $a1, 0x228($sp)
    ctx->pc = 0x2ce924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ce928: 0x8fa60230  lw          $a2, 0x230($sp)
    ctx->pc = 0x2ce928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2ce92c: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2ce92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce930: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2ce930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce934: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2ce934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce938: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2ce938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce93c: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x2ce93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x2ce940: 0xdfb102b8  ld          $s1, 0x2B8($sp)
    ctx->pc = 0x2ce940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2ce944: 0xdfb202c0  ld          $s2, 0x2C0($sp)
    ctx->pc = 0x2ce944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2ce948: 0xdfb302c8  ld          $s3, 0x2C8($sp)
    ctx->pc = 0x2ce948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2ce94c: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x2ce94cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2ce950: 0xdfb502d8  ld          $s5, 0x2D8($sp)
    ctx->pc = 0x2ce950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2ce954: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x2ce954u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2ce958: 0xdfb702e8  ld          $s7, 0x2E8($sp)
    ctx->pc = 0x2ce958u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2ce95c: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x2ce95cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ce960: 0xdfbf02f8  ld          $ra, 0x2F8($sp)
    ctx->pc = 0x2ce960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x2ce964: 0xc7ba0330  lwc1        $f26, 0x330($sp)
    ctx->pc = 0x2ce964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2ce968: 0xc7b90328  lwc1        $f25, 0x328($sp)
    ctx->pc = 0x2ce968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ce96c: 0xc7b80320  lwc1        $f24, 0x320($sp)
    ctx->pc = 0x2ce96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ce970: 0xc7b70318  lwc1        $f23, 0x318($sp)
    ctx->pc = 0x2ce970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ce974: 0xc7b60310  lwc1        $f22, 0x310($sp)
    ctx->pc = 0x2ce974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ce978: 0xc7b50308  lwc1        $f21, 0x308($sp)
    ctx->pc = 0x2ce978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ce97c: 0xc7b40300  lwc1        $f20, 0x300($sp)
    ctx->pc = 0x2ce97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ce980: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE980u;
        // 0x2ce984: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE988u;
}
