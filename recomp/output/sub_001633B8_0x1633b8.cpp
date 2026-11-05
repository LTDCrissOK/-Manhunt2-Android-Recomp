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

// Function: sub_001633B8
// Address: 0x1633b8 - 0x1634b8
void sub_001633B8_0x1633b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001633B8_0x1633b8");
#endif

    switch (ctx->pc) {
        case 0x1633b8u: goto label_1633b8;
        case 0x1633bcu: goto label_1633bc;
        case 0x1633c0u: goto label_1633c0;
        case 0x1633c4u: goto label_1633c4;
        case 0x1633c8u: goto label_1633c8;
        case 0x1633ccu: goto label_1633cc;
        case 0x1633d0u: goto label_1633d0;
        case 0x1633d4u: goto label_1633d4;
        case 0x1633d8u: goto label_1633d8;
        case 0x1633dcu: goto label_1633dc;
        case 0x1633e0u: goto label_1633e0;
        case 0x1633e4u: goto label_1633e4;
        case 0x1633e8u: goto label_1633e8;
        case 0x1633ecu: goto label_1633ec;
        case 0x1633f0u: goto label_1633f0;
        case 0x1633f4u: goto label_1633f4;
        case 0x1633f8u: goto label_1633f8;
        case 0x1633fcu: goto label_1633fc;
        case 0x163400u: goto label_163400;
        case 0x163404u: goto label_163404;
        case 0x163408u: goto label_163408;
        case 0x16340cu: goto label_16340c;
        case 0x163410u: goto label_163410;
        case 0x163414u: goto label_163414;
        case 0x163418u: goto label_163418;
        case 0x16341cu: goto label_16341c;
        case 0x163420u: goto label_163420;
        case 0x163424u: goto label_163424;
        case 0x163428u: goto label_163428;
        case 0x16342cu: goto label_16342c;
        case 0x163430u: goto label_163430;
        case 0x163434u: goto label_163434;
        case 0x163438u: goto label_163438;
        case 0x16343cu: goto label_16343c;
        case 0x163440u: goto label_163440;
        case 0x163444u: goto label_163444;
        case 0x163448u: goto label_163448;
        case 0x16344cu: goto label_16344c;
        case 0x163450u: goto label_163450;
        case 0x163454u: goto label_163454;
        case 0x163458u: goto label_163458;
        case 0x16345cu: goto label_16345c;
        case 0x163460u: goto label_163460;
        case 0x163464u: goto label_163464;
        case 0x163468u: goto label_163468;
        case 0x16346cu: goto label_16346c;
        case 0x163470u: goto label_163470;
        case 0x163474u: goto label_163474;
        case 0x163478u: goto label_163478;
        case 0x16347cu: goto label_16347c;
        case 0x163480u: goto label_163480;
        case 0x163484u: goto label_163484;
        case 0x163488u: goto label_163488;
        case 0x16348cu: goto label_16348c;
        case 0x163490u: goto label_163490;
        case 0x163494u: goto label_163494;
        case 0x163498u: goto label_163498;
        case 0x16349cu: goto label_16349c;
        case 0x1634a0u: goto label_1634a0;
        case 0x1634a4u: goto label_1634a4;
        case 0x1634a8u: goto label_1634a8;
        case 0x1634acu: goto label_1634ac;
        case 0x1634b0u: goto label_1634b0;
        case 0x1634b4u: goto label_1634b4;
        default: break;
    }

    ctx->pc = 0x1633b8u;

label_1633b8:
    // 0x1633b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1633b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1633bc:
    // 0x1633bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1633bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1633c0:
    // 0x1633c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1633c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1633c4:
    // 0x1633c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1633c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1633c8:
    // 0x1633c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1633c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1633cc:
    // 0x1633cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1633ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1633d0:
    // 0x1633d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1633d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1633d4:
    // 0x1633d4: 0xc058f44  jal         func_163D10
label_1633d8:
    if (ctx->pc == 0x1633D8u) {
        ctx->pc = 0x1633D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D4u;
        // 0x1633d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633DCu;
        goto label_1633dc;
    }
    ctx->pc = 0x1633D4u;
    SET_GPR_U32(ctx, 31, 0x1633DCu);
    ctx->pc = 0x1633D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633D4u;
    // 0x1633d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D10u, 0x1633D4u, 0x1633DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633DCu;
label_1633dc:
    // 0x1633dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1633e0:
    if (ctx->pc == 0x1633E0u) {
        ctx->pc = 0x1633E4u;
        goto label_1633e4;
    }
    ctx->pc = 0x1633DCu;
    {
        const bool branch_taken_0x1633dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1633dc) {
            ctx->pc = 0x1633FCu;
            goto label_1633fc;
        }
    }
    ctx->pc = 0x1633E4u;
label_1633e4:
    // 0x1633e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1633e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1633e8:
    // 0x1633e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1633e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1633ec:
    // 0x1633ec: 0xc058d90  jal         func_163640
label_1633f0:
    if (ctx->pc == 0x1633F0u) {
        ctx->pc = 0x1633F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633ECu;
        // 0x1633f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633F4u;
        goto label_1633f4;
    }
    ctx->pc = 0x1633ECu;
    SET_GPR_U32(ctx, 31, 0x1633F4u);
    ctx->pc = 0x1633F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633ECu;
    // 0x1633f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163640u, 0x1633ECu, 0x1633F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633F4u;
label_1633f4:
    // 0x1633f4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1633f8:
    if (ctx->pc == 0x1633F8u) {
        ctx->pc = 0x1633F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633F4u;
        // 0x1633f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1633FCu;
        goto label_1633fc;
    }
    ctx->pc = 0x1633F4u;
    {
        const bool branch_taken_0x1633f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633F4u;
        // 0x1633f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633f4) {
            ctx->pc = 0x16349Cu;
            goto label_16349c;
        }
    }
    ctx->pc = 0x1633FCu;
label_1633fc:
    // 0x1633fc: 0xc04f1f4  jal         func_13C7D0
label_163400:
    if (ctx->pc == 0x163400u) {
        ctx->pc = 0x163400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633FCu;
        // 0x163400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163404u;
        goto label_163404;
    }
    ctx->pc = 0x1633FCu;
    SET_GPR_U32(ctx, 31, 0x163404u);
    ctx->pc = 0x163400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633FCu;
    // 0x163400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x1633FCu, 0x163404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163404u;
label_163404:
    // 0x163404: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x163404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163408:
    // 0x163408: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16340c:
    // 0x16340c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163410:
    // 0x163410: 0xc04f33e  jal         func_13CCF8
label_163414:
    if (ctx->pc == 0x163414u) {
        ctx->pc = 0x163414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163410u;
        // 0x163414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163418u;
        goto label_163418;
    }
    ctx->pc = 0x163410u;
    SET_GPR_U32(ctx, 31, 0x163418u);
    ctx->pc = 0x163414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163410u;
    // 0x163414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x163410u, 0x163418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163418u;
label_163418:
    // 0x163418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16341c:
    // 0x16341c: 0xc04f0b6  jal         func_13C2D8
label_163420:
    if (ctx->pc == 0x163420u) {
        ctx->pc = 0x163420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16341Cu;
        // 0x163420: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163424u;
        goto label_163424;
    }
    ctx->pc = 0x16341Cu;
    SET_GPR_U32(ctx, 31, 0x163424u);
    ctx->pc = 0x163420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16341Cu;
    // 0x163420: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x16341Cu, 0x163424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163424u;
label_163424:
    // 0x163424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163428:
    // 0x163428: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_16342c:
    // 0x16342c: 0xc045fea  jal         func_117FA8
label_163430:
    if (ctx->pc == 0x163430u) {
        ctx->pc = 0x163430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16342Cu;
        // 0x163430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163434u;
        goto label_163434;
    }
    ctx->pc = 0x16342Cu;
    SET_GPR_U32(ctx, 31, 0x163434u);
    ctx->pc = 0x163430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16342Cu;
    // 0x163430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x16342Cu, 0x163434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163434u;
label_163434:
    // 0x163434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163438:
    // 0x163438: 0xc046058  jal         func_118160
label_16343c:
    if (ctx->pc == 0x16343Cu) {
        ctx->pc = 0x16343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163438u;
        // 0x16343c: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163440u;
        goto label_163440;
    }
    ctx->pc = 0x163438u;
    SET_GPR_U32(ctx, 31, 0x163440u);
    ctx->pc = 0x16343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163438u;
    // 0x16343c: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x163438u, 0x163440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163440u;
label_163440:
    // 0x163440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163444:
    // 0x163444: 0xc046104  jal         func_118410
label_163448:
    if (ctx->pc == 0x163448u) {
        ctx->pc = 0x163448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163444u;
        // 0x163448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16344Cu;
        goto label_16344c;
    }
    ctx->pc = 0x163444u;
    SET_GPR_U32(ctx, 31, 0x16344Cu);
    ctx->pc = 0x163448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163444u;
    // 0x163448: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x163444u, 0x16344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16344Cu;
label_16344c:
    // 0x16344c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x16344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_163450:
    // 0x163450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163454:
    // 0x163454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163458:
    // 0x163458: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x163458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16345c:
    // 0x16345c: 0x40f809  jalr        $v0
label_163460:
    if (ctx->pc == 0x163460u) {
        ctx->pc = 0x163460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16345Cu;
        // 0x163460: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163464u;
        goto label_163464;
    }
    ctx->pc = 0x16345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163464u);
        ctx->pc = 0x163460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16345Cu;
        // 0x163460: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16345Cu, 0x163464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163464u;
label_163464:
    // 0x163464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163468:
    // 0x163468: 0xc04d7dc  jal         func_135F70
label_16346c:
    if (ctx->pc == 0x16346Cu) {
        ctx->pc = 0x16346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163468u;
        // 0x16346c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163470u;
        goto label_163470;
    }
    ctx->pc = 0x163468u;
    SET_GPR_U32(ctx, 31, 0x163470u);
    ctx->pc = 0x16346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163468u;
    // 0x16346c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x163468u, 0x163470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163470u;
label_163470:
    // 0x163470: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x163470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_163474:
    // 0x163474: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x163474u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_163478:
    // 0x163478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16347c:
    // 0x16347c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_163480:
    if (ctx->pc == 0x163480u) {
        ctx->pc = 0x163480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16347Cu;
        // 0x163480: 0xae200300  sw          $zero, 0x300($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163484u;
        goto label_163484;
    }
    ctx->pc = 0x16347Cu;
    {
        const bool branch_taken_0x16347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16347c) {
            ctx->pc = 0x163480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16347Cu;
            // 0x163480: 0xae200300  sw          $zero, 0x300($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163498u;
            goto label_163498;
        }
    }
    ctx->pc = 0x163484u;
label_163484:
    // 0x163484: 0x8e2303ac  lw          $v1, 0x3AC($s1)
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
label_163488:
    // 0x163488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16348c:
    // 0x16348c: 0xae4204cc  sw          $v0, 0x4CC($s2)
    ctx->pc = 0x16348cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1228), GPR_U32(ctx, 2));
label_163490:
    // 0x163490: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x163490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
label_163494:
    // 0x163494: 0xae200300  sw          $zero, 0x300($s1)
    ctx->pc = 0x163494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
label_163498:
    // 0x163498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16349c:
    // 0x16349c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16349cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1634a0:
    // 0x1634a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1634a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1634a4:
    // 0x1634a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1634a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1634a8:
    // 0x1634a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1634a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1634ac:
    // 0x1634ac: 0x3e00008  jr          $ra
label_1634b0:
    if (ctx->pc == 0x1634B0u) {
        ctx->pc = 0x1634B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634ACu;
        // 0x1634b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634B4u;
        goto label_1634b4;
    }
    ctx->pc = 0x1634ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1634B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634ACu;
        // 0x1634b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1634ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1634B4u;
label_1634b4:
    // 0x1634b4: 0x0  nop
    ctx->pc = 0x1634b4u;
    // NOP
    ctx->pc = 0x1634b8u;
}
