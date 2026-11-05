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

// Function: sub_0026A3D8
// Address: 0x26a3d8 - 0x26a5a8
void sub_0026A3D8_0x26a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A3D8_0x26a3d8");
#endif

    switch (ctx->pc) {
        case 0x26a3d8u: goto label_26a3d8;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a3e4u: goto label_26a3e4;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3ecu: goto label_26a3ec;
        case 0x26a3f0u: goto label_26a3f0;
        case 0x26a3f4u: goto label_26a3f4;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a3fcu: goto label_26a3fc;
        case 0x26a400u: goto label_26a400;
        case 0x26a404u: goto label_26a404;
        case 0x26a408u: goto label_26a408;
        case 0x26a40cu: goto label_26a40c;
        case 0x26a410u: goto label_26a410;
        case 0x26a414u: goto label_26a414;
        case 0x26a418u: goto label_26a418;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a420u: goto label_26a420;
        case 0x26a424u: goto label_26a424;
        case 0x26a428u: goto label_26a428;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a430u: goto label_26a430;
        case 0x26a434u: goto label_26a434;
        case 0x26a438u: goto label_26a438;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a440u: goto label_26a440;
        case 0x26a444u: goto label_26a444;
        case 0x26a448u: goto label_26a448;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a450u: goto label_26a450;
        case 0x26a454u: goto label_26a454;
        case 0x26a458u: goto label_26a458;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a460u: goto label_26a460;
        case 0x26a464u: goto label_26a464;
        case 0x26a468u: goto label_26a468;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a470u: goto label_26a470;
        case 0x26a474u: goto label_26a474;
        case 0x26a478u: goto label_26a478;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a480u: goto label_26a480;
        case 0x26a484u: goto label_26a484;
        case 0x26a488u: goto label_26a488;
        case 0x26a48cu: goto label_26a48c;
        case 0x26a490u: goto label_26a490;
        case 0x26a494u: goto label_26a494;
        case 0x26a498u: goto label_26a498;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4a4u: goto label_26a4a4;
        case 0x26a4a8u: goto label_26a4a8;
        case 0x26a4acu: goto label_26a4ac;
        case 0x26a4b0u: goto label_26a4b0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4b8u: goto label_26a4b8;
        case 0x26a4bcu: goto label_26a4bc;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4c4u: goto label_26a4c4;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4ccu: goto label_26a4cc;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4d4u: goto label_26a4d4;
        case 0x26a4d8u: goto label_26a4d8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4e0u: goto label_26a4e0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4e8u: goto label_26a4e8;
        case 0x26a4ecu: goto label_26a4ec;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a4f8u: goto label_26a4f8;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a500u: goto label_26a500;
        case 0x26a504u: goto label_26a504;
        case 0x26a508u: goto label_26a508;
        case 0x26a50cu: goto label_26a50c;
        case 0x26a510u: goto label_26a510;
        case 0x26a514u: goto label_26a514;
        case 0x26a518u: goto label_26a518;
        case 0x26a51cu: goto label_26a51c;
        case 0x26a520u: goto label_26a520;
        case 0x26a524u: goto label_26a524;
        case 0x26a528u: goto label_26a528;
        case 0x26a52cu: goto label_26a52c;
        case 0x26a530u: goto label_26a530;
        case 0x26a534u: goto label_26a534;
        case 0x26a538u: goto label_26a538;
        case 0x26a53cu: goto label_26a53c;
        case 0x26a540u: goto label_26a540;
        case 0x26a544u: goto label_26a544;
        case 0x26a548u: goto label_26a548;
        case 0x26a54cu: goto label_26a54c;
        case 0x26a550u: goto label_26a550;
        case 0x26a554u: goto label_26a554;
        case 0x26a558u: goto label_26a558;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a560u: goto label_26a560;
        case 0x26a564u: goto label_26a564;
        case 0x26a568u: goto label_26a568;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a570u: goto label_26a570;
        case 0x26a574u: goto label_26a574;
        case 0x26a578u: goto label_26a578;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a580u: goto label_26a580;
        case 0x26a584u: goto label_26a584;
        case 0x26a588u: goto label_26a588;
        case 0x26a58cu: goto label_26a58c;
        case 0x26a590u: goto label_26a590;
        case 0x26a594u: goto label_26a594;
        case 0x26a598u: goto label_26a598;
        case 0x26a59cu: goto label_26a59c;
        case 0x26a5a0u: goto label_26a5a0;
        case 0x26a5a4u: goto label_26a5a4;
        default: break;
    }

    ctx->pc = 0x26a3d8u;

label_26a3d8:
    // 0x26a3d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26a3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26a3dc:
    // 0x26a3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26a3e0:
    // 0x26a3e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_26a3e4:
    // 0x26a3e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26a3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26a3e8:
    // 0x26a3e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_26a3ec:
    // 0x26a3ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a3f0:
    // 0x26a3f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_26a3f4:
    // 0x26a3f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26a3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26a3f8:
    // 0x26a3f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_26a3fc:
    // 0x26a3fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26a3fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a400:
    // 0x26a400: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26a404:
    // 0x26a404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_26a408:
    // 0x26a408: 0x8e320220  lw          $s2, 0x220($s1)
    ctx->pc = 0x26a408u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_26a40c:
    // 0x26a40c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x26a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_26a410:
    // 0x26a410: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x26a410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26a414:
    // 0x26a414: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_26a418:
    if (ctx->pc == 0x26A418u) {
        ctx->pc = 0x26A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A414u;
        // 0x26a418: 0x8e550034  lw          $s5, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A41Cu;
        goto label_26a41c;
    }
    ctx->pc = 0x26A414u;
    {
        const bool branch_taken_0x26a414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A414u;
        // 0x26a418: 0x8e550034  lw          $s5, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a414) {
            ctx->pc = 0x26A480u;
            goto label_26a480;
        }
    }
    ctx->pc = 0x26A41Cu;
label_26a41c:
    // 0x26a41c: 0xc097f26  jal         func_25FC98
label_26a420:
    if (ctx->pc == 0x26A420u) {
        ctx->pc = 0x26A424u;
        goto label_26a424;
    }
    ctx->pc = 0x26A41Cu;
    SET_GPR_U32(ctx, 31, 0x26A424u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26A41Cu, 0x26A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A424u;
label_26a424:
    // 0x26a424: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a428:
    // 0x26a428: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x26a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_26a42c:
    // 0x26a42c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_26a430:
    if (ctx->pc == 0x26A430u) {
        ctx->pc = 0x26A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A42Cu;
        // 0x26a430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A434u;
        goto label_26a434;
    }
    ctx->pc = 0x26A42Cu;
    {
        const bool branch_taken_0x26a42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A42Cu;
        // 0x26a430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a42c) {
            ctx->pc = 0x26A450u;
            goto label_26a450;
        }
    }
    ctx->pc = 0x26A434u;
label_26a434:
    // 0x26a434: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x26a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_26a438:
    // 0x26a438: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_26a43c:
    if (ctx->pc == 0x26A43Cu) {
        ctx->pc = 0x26A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A438u;
        // 0x26a43c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A440u;
        goto label_26a440;
    }
    ctx->pc = 0x26A438u;
    {
        const bool branch_taken_0x26a438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A438u;
        // 0x26a43c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a438) {
            ctx->pc = 0x26A450u;
            goto label_26a450;
        }
    }
    ctx->pc = 0x26A440u;
label_26a440:
    // 0x26a440: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_26a444:
    if (ctx->pc == 0x26A444u) {
        ctx->pc = 0x26A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A440u;
        // 0x26a444: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A448u;
        goto label_26a448;
    }
    ctx->pc = 0x26A440u;
    {
        const bool branch_taken_0x26a440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A440u;
        // 0x26a444: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a440) {
            ctx->pc = 0x26A450u;
            goto label_26a450;
        }
    }
    ctx->pc = 0x26A448u;
label_26a448:
    // 0x26a448: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_26a44c:
    if (ctx->pc == 0x26A44Cu) {
        ctx->pc = 0x26A450u;
        goto label_26a450;
    }
    ctx->pc = 0x26A448u;
    {
        const bool branch_taken_0x26a448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a448) {
            ctx->pc = 0x26A454u;
            goto label_26a454;
        }
    }
    ctx->pc = 0x26A450u;
label_26a450:
    // 0x26a450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a454:
    // 0x26a454: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_26a458:
    if (ctx->pc == 0x26A458u) {
        ctx->pc = 0x26A45Cu;
        goto label_26a45c;
    }
    ctx->pc = 0x26A454u;
    {
        const bool branch_taken_0x26a454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a454) {
            ctx->pc = 0x26A480u;
            goto label_26a480;
        }
    }
    ctx->pc = 0x26A45Cu;
label_26a45c:
    // 0x26a45c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x26a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_26a460:
    // 0x26a460: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x26a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_26a464:
    // 0x26a464: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26a468:
    if (ctx->pc == 0x26A468u) {
        ctx->pc = 0x26A46Cu;
        goto label_26a46c;
    }
    ctx->pc = 0x26A464u;
    {
        const bool branch_taken_0x26a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a464) {
            ctx->pc = 0x26A480u;
            goto label_26a480;
        }
    }
    ctx->pc = 0x26A46Cu;
label_26a46c:
    // 0x26a46c: 0xc07a8e4  jal         func_1EA390
label_26a470:
    if (ctx->pc == 0x26A470u) {
        ctx->pc = 0x26A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A46Cu;
        // 0x26a470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A474u;
        goto label_26a474;
    }
    ctx->pc = 0x26A46Cu;
    SET_GPR_U32(ctx, 31, 0x26A474u);
    ctx->pc = 0x26A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A46Cu;
    // 0x26a470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x26A46Cu, 0x26A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A474u;
label_26a474:
    // 0x26a474: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x26a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_26a478:
    // 0x26a478: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
label_26a47c:
    if (ctx->pc == 0x26A47Cu) {
        ctx->pc = 0x26A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A478u;
        // 0x26a47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A480u;
        goto label_26a480;
    }
    ctx->pc = 0x26A478u;
    {
        const bool branch_taken_0x26a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A478u;
        // 0x26a47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a478) {
            ctx->pc = 0x26A584u;
            goto label_26a584;
        }
    }
    ctx->pc = 0x26A480u;
label_26a480:
    // 0x26a480: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_26a484:
    if (ctx->pc == 0x26A484u) {
        ctx->pc = 0x26A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A480u;
        // 0x26a484: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A488u;
        goto label_26a488;
    }
    ctx->pc = 0x26A480u;
    {
        const bool branch_taken_0x26a480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a480) {
            ctx->pc = 0x26A484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A480u;
            // 0x26a484: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A488u;
label_26a488:
    // 0x26a488: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x26a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_26a48c:
    // 0x26a48c: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x26a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_26a490:
    // 0x26a490: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x26a490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_26a494:
    // 0x26a494: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_26a498:
    if (ctx->pc == 0x26A498u) {
        ctx->pc = 0x26A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A494u;
        // 0x26a498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A49Cu;
        goto label_26a49c;
    }
    ctx->pc = 0x26A494u;
    {
        const bool branch_taken_0x26a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a494) {
            ctx->pc = 0x26A498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A494u;
            // 0x26a498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A4BCu;
            goto label_26a4bc;
        }
    }
    ctx->pc = 0x26A49Cu;
label_26a49c:
    // 0x26a49c: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x26a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_26a4a0:
    // 0x26a4a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_26a4a4:
    if (ctx->pc == 0x26A4A4u) {
        ctx->pc = 0x26A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A0u;
        // 0x26a4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4A8u;
        goto label_26a4a8;
    }
    ctx->pc = 0x26A4A0u;
    {
        const bool branch_taken_0x26a4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a4a0) {
            ctx->pc = 0x26A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4A0u;
            // 0x26a4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A4BCu;
            goto label_26a4bc;
        }
    }
    ctx->pc = 0x26A4A8u;
label_26a4a8:
    // 0x26a4a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_26a4ac:
    // 0x26a4ac: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x26a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_26a4b0:
    // 0x26a4b0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_26a4b4:
    if (ctx->pc == 0x26A4B4u) {
        ctx->pc = 0x26A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4B0u;
        // 0x26a4b4: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4B8u;
        goto label_26a4b8;
    }
    ctx->pc = 0x26A4B0u;
    {
        const bool branch_taken_0x26a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26a4b0) {
            ctx->pc = 0x26A4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4B0u;
            // 0x26a4b4: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A4C8u;
            goto label_26a4c8;
        }
    }
    ctx->pc = 0x26A4B8u;
label_26a4b8:
    // 0x26a4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a4bc:
    // 0x26a4bc: 0xc0837b4  jal         func_20DED0
label_26a4c0:
    if (ctx->pc == 0x26A4C0u) {
        ctx->pc = 0x26A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4BCu;
        // 0x26a4c0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4C4u;
        goto label_26a4c4;
    }
    ctx->pc = 0x26A4BCu;
    SET_GPR_U32(ctx, 31, 0x26A4C4u);
    ctx->pc = 0x26A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A4BCu;
    // 0x26a4c0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x26A4BCu, 0x26A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4C4u;
label_26a4c4:
    // 0x26a4c4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x26a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26a4c8:
    // 0x26a4c8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x26a4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_26a4cc:
    // 0x26a4cc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x26a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_26a4d0:
    // 0x26a4d0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_26a4d4:
    if (ctx->pc == 0x26A4D4u) {
        ctx->pc = 0x26A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D0u;
        // 0x26a4d4: 0x8e230224  lw          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4D8u;
        goto label_26a4d8;
    }
    ctx->pc = 0x26A4D0u;
    {
        const bool branch_taken_0x26a4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D0u;
        // 0x26a4d4: 0x8e230224  lw          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4d0) {
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A4D8u;
label_26a4d8:
    // 0x26a4d8: 0x5203001d  beql        $s0, $v1, . + 4 + (0x1D << 2)
label_26a4dc:
    if (ctx->pc == 0x26A4DCu) {
        ctx->pc = 0x26A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D8u;
        // 0x26a4dc: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4E0u;
        goto label_26a4e0;
    }
    ctx->pc = 0x26A4D8u;
    {
        const bool branch_taken_0x26a4d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x26a4d8) {
            ctx->pc = 0x26A4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4D8u;
            // 0x26a4dc: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A4E0u;
label_26a4e0:
    // 0x26a4e0: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
label_26a4e4:
    if (ctx->pc == 0x26A4E4u) {
        ctx->pc = 0x26A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4E0u;
        // 0x26a4e4: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4E8u;
        goto label_26a4e8;
    }
    ctx->pc = 0x26A4E0u;
    {
        const bool branch_taken_0x26a4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4e0) {
            ctx->pc = 0x26A4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4E0u;
            // 0x26a4e4: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A4E8u;
label_26a4e8:
    // 0x26a4e8: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x26a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
label_26a4ec:
    // 0x26a4ec: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_26a4f0:
    if (ctx->pc == 0x26A4F0u) {
        ctx->pc = 0x26A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4ECu;
        // 0x26a4f0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4F4u;
        goto label_26a4f4;
    }
    ctx->pc = 0x26A4ECu;
    {
        const bool branch_taken_0x26a4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a4ec) {
            ctx->pc = 0x26A4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4ECu;
            // 0x26a4f0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A4F4u;
label_26a4f4:
    // 0x26a4f4: 0x3882020f  xori        $v0, $a0, 0x20F
    ctx->pc = 0x26a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)527);
label_26a4f8:
    // 0x26a4f8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_26a4fc:
    if (ctx->pc == 0x26A4FCu) {
        ctx->pc = 0x26A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4F8u;
        // 0x26a4fc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A500u;
        goto label_26a500;
    }
    ctx->pc = 0x26A4F8u;
    {
        const bool branch_taken_0x26a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4f8) {
            ctx->pc = 0x26A4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4F8u;
            // 0x26a4fc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A500u;
label_26a500:
    // 0x26a500: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x26a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_26a504:
    // 0x26a504: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x26a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_26a508:
    // 0x26a508: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_26a50c:
    if (ctx->pc == 0x26A50Cu) {
        ctx->pc = 0x26A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A508u;
        // 0x26a50c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A510u;
        goto label_26a510;
    }
    ctx->pc = 0x26A508u;
    {
        const bool branch_taken_0x26a508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a508) {
            ctx->pc = 0x26A50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A508u;
            // 0x26a50c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A510u;
label_26a510:
    // 0x26a510: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x26a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_26a514:
    // 0x26a514: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26a518:
    // 0x26a518: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_26a51c:
    if (ctx->pc == 0x26A51Cu) {
        ctx->pc = 0x26A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A518u;
        // 0x26a51c: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A520u;
        goto label_26a520;
    }
    ctx->pc = 0x26A518u;
    {
        const bool branch_taken_0x26a518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a518) {
            ctx->pc = 0x26A51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A518u;
            // 0x26a51c: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A528u;
            goto label_26a528;
        }
    }
    ctx->pc = 0x26A520u;
label_26a520:
    // 0x26a520: 0x1000000a  b           . + 4 + (0xA << 2)
label_26a524:
    if (ctx->pc == 0x26A524u) {
        ctx->pc = 0x26A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A520u;
        // 0x26a524: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A528u;
        goto label_26a528;
    }
    ctx->pc = 0x26A520u;
    {
        const bool branch_taken_0x26a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A520u;
        // 0x26a524: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a520) {
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A528u;
label_26a528:
    // 0x26a528: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26a52c:
    if (ctx->pc == 0x26A52Cu) {
        ctx->pc = 0x26A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A528u;
        // 0x26a52c: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A530u;
        goto label_26a530;
    }
    ctx->pc = 0x26A528u;
    {
        const bool branch_taken_0x26a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a528) {
            ctx->pc = 0x26A52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A528u;
            // 0x26a52c: 0x8ea200b8  lw          $v0, 0xB8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A530u;
label_26a530:
    // 0x26a530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a534:
    // 0x26a534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a538:
    // 0x26a538: 0x240603e9  addiu       $a2, $zero, 0x3E9
    ctx->pc = 0x26a538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_26a53c:
    // 0x26a53c: 0xc0d77a8  jal         func_35DEA0
label_26a540:
    if (ctx->pc == 0x26A540u) {
        ctx->pc = 0x26A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A53Cu;
        // 0x26a540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A544u;
        goto label_26a544;
    }
    ctx->pc = 0x26A53Cu;
    SET_GPR_U32(ctx, 31, 0x26A544u);
    ctx->pc = 0x26A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A53Cu;
    // 0x26a540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x26A53Cu, 0x26A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A544u;
label_26a544:
    // 0x26a544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a548:
    // 0x26a548: 0xae23024c  sw          $v1, 0x24C($s1)
    ctx->pc = 0x26a548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 3));
label_26a54c:
    // 0x26a54c: 0x8ea200b8  lw          $v0, 0xB8($s5)
    ctx->pc = 0x26a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
label_26a550:
    // 0x26a550: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x26a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_26a554:
    // 0x26a554: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x26a554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_26a558:
    // 0x26a558: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_26a55c:
    if (ctx->pc == 0x26A55Cu) {
        ctx->pc = 0x26A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A558u;
        // 0x26a55c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A560u;
        goto label_26a560;
    }
    ctx->pc = 0x26A558u;
    {
        const bool branch_taken_0x26a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a558) {
            ctx->pc = 0x26A55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A558u;
            // 0x26a55c: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A570u;
            goto label_26a570;
        }
    }
    ctx->pc = 0x26A560u;
label_26a560:
    // 0x26a560: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_26a564:
    // 0x26a564: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26a568:
    if (ctx->pc == 0x26A568u) {
        ctx->pc = 0x26A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A564u;
        // 0x26a568: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A56Cu;
        goto label_26a56c;
    }
    ctx->pc = 0x26A564u;
    {
        const bool branch_taken_0x26a564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A564u;
        // 0x26a568: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a564) {
            ctx->pc = 0x26A584u;
            goto label_26a584;
        }
    }
    ctx->pc = 0x26A56Cu;
label_26a56c:
    // 0x26a56c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x26a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_26a570:
    // 0x26a570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a574:
    // 0x26a574: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x26a574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_26a578:
    // 0x26a578: 0x40f809  jalr        $v0
label_26a57c:
    if (ctx->pc == 0x26A57Cu) {
        ctx->pc = 0x26A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A578u;
        // 0x26a57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A580u;
        goto label_26a580;
    }
    ctx->pc = 0x26A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A580u);
        ctx->pc = 0x26A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A578u;
        // 0x26a57c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A578u, 0x26A580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A580u;
label_26a580:
    // 0x26a580: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x26a580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26a584:
    // 0x26a584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26a584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26a588:
    // 0x26a588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26a588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_26a58c:
    // 0x26a58c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26a58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26a590:
    // 0x26a590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26a590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26a594:
    // 0x26a594: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26a594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26a598:
    // 0x26a598: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26a598u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_26a59c:
    // 0x26a59c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26a5a0:
    // 0x26a5a0: 0x3e00008  jr          $ra
label_26a5a4:
    if (ctx->pc == 0x26A5A4u) {
        ctx->pc = 0x26A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5A0u;
        // 0x26a5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5A8u;
        goto label_fallthrough_0x26a5a0;
    }
    ctx->pc = 0x26A5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5A0u;
        // 0x26a5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26a5a0:
    ctx->pc = 0x26A5A8u;
}
