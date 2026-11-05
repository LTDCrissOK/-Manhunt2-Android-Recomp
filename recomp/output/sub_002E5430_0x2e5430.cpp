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

// Function: sub_002E5430
// Address: 0x2e5430 - 0x2e5558
void sub_002E5430_0x2e5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5430_0x2e5430");
#endif

    switch (ctx->pc) {
        case 0x2e5430u: goto label_2e5430;
        case 0x2e5434u: goto label_2e5434;
        case 0x2e5438u: goto label_2e5438;
        case 0x2e543cu: goto label_2e543c;
        case 0x2e5440u: goto label_2e5440;
        case 0x2e5444u: goto label_2e5444;
        case 0x2e5448u: goto label_2e5448;
        case 0x2e544cu: goto label_2e544c;
        case 0x2e5450u: goto label_2e5450;
        case 0x2e5454u: goto label_2e5454;
        case 0x2e5458u: goto label_2e5458;
        case 0x2e545cu: goto label_2e545c;
        case 0x2e5460u: goto label_2e5460;
        case 0x2e5464u: goto label_2e5464;
        case 0x2e5468u: goto label_2e5468;
        case 0x2e546cu: goto label_2e546c;
        case 0x2e5470u: goto label_2e5470;
        case 0x2e5474u: goto label_2e5474;
        case 0x2e5478u: goto label_2e5478;
        case 0x2e547cu: goto label_2e547c;
        case 0x2e5480u: goto label_2e5480;
        case 0x2e5484u: goto label_2e5484;
        case 0x2e5488u: goto label_2e5488;
        case 0x2e548cu: goto label_2e548c;
        case 0x2e5490u: goto label_2e5490;
        case 0x2e5494u: goto label_2e5494;
        case 0x2e5498u: goto label_2e5498;
        case 0x2e549cu: goto label_2e549c;
        case 0x2e54a0u: goto label_2e54a0;
        case 0x2e54a4u: goto label_2e54a4;
        case 0x2e54a8u: goto label_2e54a8;
        case 0x2e54acu: goto label_2e54ac;
        case 0x2e54b0u: goto label_2e54b0;
        case 0x2e54b4u: goto label_2e54b4;
        case 0x2e54b8u: goto label_2e54b8;
        case 0x2e54bcu: goto label_2e54bc;
        case 0x2e54c0u: goto label_2e54c0;
        case 0x2e54c4u: goto label_2e54c4;
        case 0x2e54c8u: goto label_2e54c8;
        case 0x2e54ccu: goto label_2e54cc;
        case 0x2e54d0u: goto label_2e54d0;
        case 0x2e54d4u: goto label_2e54d4;
        case 0x2e54d8u: goto label_2e54d8;
        case 0x2e54dcu: goto label_2e54dc;
        case 0x2e54e0u: goto label_2e54e0;
        case 0x2e54e4u: goto label_2e54e4;
        case 0x2e54e8u: goto label_2e54e8;
        case 0x2e54ecu: goto label_2e54ec;
        case 0x2e54f0u: goto label_2e54f0;
        case 0x2e54f4u: goto label_2e54f4;
        case 0x2e54f8u: goto label_2e54f8;
        case 0x2e54fcu: goto label_2e54fc;
        case 0x2e5500u: goto label_2e5500;
        case 0x2e5504u: goto label_2e5504;
        case 0x2e5508u: goto label_2e5508;
        case 0x2e550cu: goto label_2e550c;
        case 0x2e5510u: goto label_2e5510;
        case 0x2e5514u: goto label_2e5514;
        case 0x2e5518u: goto label_2e5518;
        case 0x2e551cu: goto label_2e551c;
        case 0x2e5520u: goto label_2e5520;
        case 0x2e5524u: goto label_2e5524;
        case 0x2e5528u: goto label_2e5528;
        case 0x2e552cu: goto label_2e552c;
        case 0x2e5530u: goto label_2e5530;
        case 0x2e5534u: goto label_2e5534;
        case 0x2e5538u: goto label_2e5538;
        case 0x2e553cu: goto label_2e553c;
        case 0x2e5540u: goto label_2e5540;
        case 0x2e5544u: goto label_2e5544;
        case 0x2e5548u: goto label_2e5548;
        case 0x2e554cu: goto label_2e554c;
        case 0x2e5550u: goto label_2e5550;
        case 0x2e5554u: goto label_2e5554;
        default: break;
    }

    ctx->pc = 0x2e5430u;

label_2e5430:
    // 0x2e5430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e5434:
    // 0x2e5434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e5438:
    // 0x2e5438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e5438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2e543c:
    // 0x2e543c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e543cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e5440:
    // 0x2e5440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e5440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2e5444:
    // 0x2e5444: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e5444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5448:
    // 0x2e5448: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2e544c:
    // 0x2e544c: 0xc0ac948  jal         func_2B2520
label_2e5450:
    if (ctx->pc == 0x2E5450u) {
        ctx->pc = 0x2E5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E544Cu;
        // 0x2e5450: 0x8e440224  lw          $a0, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5454u;
        goto label_2e5454;
    }
    ctx->pc = 0x2E544Cu;
    SET_GPR_U32(ctx, 31, 0x2E5454u);
    ctx->pc = 0x2E5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E544Cu;
    // 0x2e5450: 0x8e440224  lw          $a0, 0x224($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2520u, 0x2E544Cu, 0x2E5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5454u;
label_2e5454:
    // 0x2e5454: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_2e5458:
    if (ctx->pc == 0x2E5458u) {
        ctx->pc = 0x2E5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5454u;
        // 0x2e5458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E545Cu;
        goto label_2e545c;
    }
    ctx->pc = 0x2E5454u;
    {
        const bool branch_taken_0x2e5454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5454u;
        // 0x2e5458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5454) {
            ctx->pc = 0x2E5534u;
            goto label_2e5534;
        }
    }
    ctx->pc = 0x2E545Cu;
label_2e545c:
    // 0x2e545c: 0xc085d2a  jal         func_2174A8
label_2e5460:
    if (ctx->pc == 0x2E5460u) {
        ctx->pc = 0x2E5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E545Cu;
        // 0x2e5460: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5464u;
        goto label_2e5464;
    }
    ctx->pc = 0x2E545Cu;
    SET_GPR_U32(ctx, 31, 0x2E5464u);
    ctx->pc = 0x2E5460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E545Cu;
    // 0x2e5460: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x2E545Cu, 0x2E5464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5464u;
label_2e5464:
    // 0x2e5464: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_2e5468:
    if (ctx->pc == 0x2E5468u) {
        ctx->pc = 0x2E5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5464u;
        // 0x2e5468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E546Cu;
        goto label_2e546c;
    }
    ctx->pc = 0x2E5464u;
    {
        const bool branch_taken_0x2e5464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5464) {
            ctx->pc = 0x2E5468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5464u;
            // 0x2e5468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5534u;
            goto label_2e5534;
        }
    }
    ctx->pc = 0x2E546Cu;
label_2e546c:
    // 0x2e546c: 0xc083072  jal         func_20C1C8
label_2e5470:
    if (ctx->pc == 0x2E5470u) {
        ctx->pc = 0x2E5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E546Cu;
        // 0x2e5470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5474u;
        goto label_2e5474;
    }
    ctx->pc = 0x2E546Cu;
    SET_GPR_U32(ctx, 31, 0x2E5474u);
    ctx->pc = 0x2E5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E546Cu;
    // 0x2e5470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x2E546Cu, 0x2E5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5474u;
label_2e5474:
    // 0x2e5474: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5478:
    // 0x2e5478: 0xc0899bc  jal         func_2266F0
label_2e547c:
    if (ctx->pc == 0x2E547Cu) {
        ctx->pc = 0x2E547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5478u;
        // 0x2e547c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5480u;
        goto label_2e5480;
    }
    ctx->pc = 0x2E5478u;
    SET_GPR_U32(ctx, 31, 0x2E5480u);
    ctx->pc = 0x2E547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5478u;
    // 0x2e547c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E5478u, 0x2E5480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5480u;
label_2e5480:
    // 0x2e5480: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2e5484:
    if (ctx->pc == 0x2E5484u) {
        ctx->pc = 0x2E5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5480u;
        // 0x2e5484: 0x8e500224  lw          $s0, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5488u;
        goto label_2e5488;
    }
    ctx->pc = 0x2E5480u;
    {
        const bool branch_taken_0x2e5480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5480) {
            ctx->pc = 0x2E5484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5480u;
            // 0x2e5484: 0x8e500224  lw          $s0, 0x224($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E549Cu;
            goto label_2e549c;
        }
    }
    ctx->pc = 0x2E5488u;
label_2e5488:
    // 0x2e5488: 0xc0899bc  jal         func_2266F0
label_2e548c:
    if (ctx->pc == 0x2E548Cu) {
        ctx->pc = 0x2E548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5488u;
        // 0x2e548c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5490u;
        goto label_2e5490;
    }
    ctx->pc = 0x2E5488u;
    SET_GPR_U32(ctx, 31, 0x2E5490u);
    ctx->pc = 0x2E548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5488u;
    // 0x2e548c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E5488u, 0x2E5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5490u;
label_2e5490:
    // 0x2e5490: 0xc097f26  jal         func_25FC98
label_2e5494:
    if (ctx->pc == 0x2E5494u) {
        ctx->pc = 0x2E5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5490u;
        // 0x2e5494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5498u;
        goto label_2e5498;
    }
    ctx->pc = 0x2E5490u;
    SET_GPR_U32(ctx, 31, 0x2E5498u);
    ctx->pc = 0x2E5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5490u;
    // 0x2e5494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2E5490u, 0x2E5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5498u;
label_2e5498:
    // 0x2e5498: 0x8e500224  lw          $s0, 0x224($s2)
    ctx->pc = 0x2e5498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
label_2e549c:
    // 0x2e549c: 0xc097f2a  jal         func_25FCA8
label_2e54a0:
    if (ctx->pc == 0x2E54A0u) {
        ctx->pc = 0x2E54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E549Cu;
        // 0x2e54a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E54A4u;
        goto label_2e54a4;
    }
    ctx->pc = 0x2E549Cu;
    SET_GPR_U32(ctx, 31, 0x2E54A4u);
    ctx->pc = 0x2E54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E549Cu;
    // 0x2e54a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2E549Cu, 0x2E54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54A4u;
label_2e54a4:
    // 0x2e54a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e54a8:
    // 0x2e54a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e54ac:
    // 0x2e54ac: 0x8e270218  lw          $a3, 0x218($s1)
    ctx->pc = 0x2e54acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2e54b0:
    // 0x2e54b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e54b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e54b4:
    // 0x2e54b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e54b8:
    // 0x2e54b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e54b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e54bc:
    // 0x2e54bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e54bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e54c0:
    // 0x2e54c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e54c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e54c4:
    // 0x2e54c4: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x2e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_2e54c8:
    // 0x2e54c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e54c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e54cc:
    // 0x2e54cc: 0x40f809  jalr        $v0
label_2e54d0:
    if (ctx->pc == 0x2E54D0u) {
        ctx->pc = 0x2E54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54CCu;
        // 0x2e54d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E54D4u;
        goto label_2e54d4;
    }
    ctx->pc = 0x2E54CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E54D4u);
        ctx->pc = 0x2E54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54CCu;
        // 0x2e54d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E54CCu, 0x2E54D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E54D4u;
label_2e54d4:
    // 0x2e54d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2e54d8:
    if (ctx->pc == 0x2E54D8u) {
        ctx->pc = 0x2E54DCu;
        goto label_2e54dc;
    }
    ctx->pc = 0x2E54D4u;
    {
        const bool branch_taken_0x2e54d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e54d4) {
            ctx->pc = 0x2E5518u;
            goto label_2e5518;
        }
    }
    ctx->pc = 0x2E54DCu;
label_2e54dc:
    // 0x2e54dc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2e54e0:
    if (ctx->pc == 0x2E54E0u) {
        ctx->pc = 0x2E54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54DCu;
        // 0x2e54e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E54E4u;
        goto label_2e54e4;
    }
    ctx->pc = 0x2E54DCu;
    {
        const bool branch_taken_0x2e54dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54DCu;
        // 0x2e54e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54dc) {
            ctx->pc = 0x2E54F4u;
            goto label_2e54f4;
        }
    }
    ctx->pc = 0x2E54E4u;
label_2e54e4:
    // 0x2e54e4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2e54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2e54e8:
    // 0x2e54e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e54ec:
    // 0x2e54ec: 0x40f809  jalr        $v0
label_2e54f0:
    if (ctx->pc == 0x2E54F0u) {
        ctx->pc = 0x2E54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54ECu;
        // 0x2e54f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E54F4u;
        goto label_2e54f4;
    }
    ctx->pc = 0x2E54ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E54F4u);
        ctx->pc = 0x2E54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54ECu;
        // 0x2e54f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E54ECu, 0x2E54F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E54F4u;
label_2e54f4:
    // 0x2e54f4: 0xc097f2a  jal         func_25FCA8
label_2e54f8:
    if (ctx->pc == 0x2E54F8u) {
        ctx->pc = 0x2E54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54F4u;
        // 0x2e54f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E54FCu;
        goto label_2e54fc;
    }
    ctx->pc = 0x2E54F4u;
    SET_GPR_U32(ctx, 31, 0x2E54FCu);
    ctx->pc = 0x2E54F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54F4u;
    // 0x2e54f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2E54F4u, 0x2E54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54FCu;
label_2e54fc:
    // 0x2e54fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5500:
    // 0x2e5500: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_2e5504:
    if (ctx->pc == 0x2E5504u) {
        ctx->pc = 0x2E5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5500u;
        // 0x2e5504: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5508u;
        goto label_2e5508;
    }
    ctx->pc = 0x2E5500u;
    {
        const bool branch_taken_0x2e5500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5500u;
        // 0x2e5504: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5500) {
            ctx->pc = 0x2E5534u;
            goto label_2e5534;
        }
    }
    ctx->pc = 0x2E5508u;
label_2e5508:
    // 0x2e5508: 0xc0bdbe8  jal         func_2F6FA0
label_2e550c:
    if (ctx->pc == 0x2E550Cu) {
        ctx->pc = 0x2E550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5508u;
        // 0x2e550c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5510u;
        goto label_2e5510;
    }
    ctx->pc = 0x2E5508u;
    SET_GPR_U32(ctx, 31, 0x2E5510u);
    ctx->pc = 0x2E550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5508u;
    // 0x2e550c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6FA0u, 0x2E5508u, 0x2E5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5510u;
label_2e5510:
    // 0x2e5510: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e5514:
    if (ctx->pc == 0x2E5514u) {
        ctx->pc = 0x2E5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5510u;
        // 0x2e5514: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5518u;
        goto label_2e5518;
    }
    ctx->pc = 0x2E5510u;
    {
        const bool branch_taken_0x2e5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5510u;
        // 0x2e5514: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5510) {
            ctx->pc = 0x2E5534u;
            goto label_2e5534;
        }
    }
    ctx->pc = 0x2E5518u;
label_2e5518:
    // 0x2e5518: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2e551c:
    if (ctx->pc == 0x2E551Cu) {
        ctx->pc = 0x2E551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5518u;
        // 0x2e551c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5520u;
        goto label_2e5520;
    }
    ctx->pc = 0x2E5518u;
    {
        const bool branch_taken_0x2e5518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5518u;
        // 0x2e551c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5518) {
            ctx->pc = 0x2E5530u;
            goto label_2e5530;
        }
    }
    ctx->pc = 0x2E5520u;
label_2e5520:
    // 0x2e5520: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2e5520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2e5524:
    // 0x2e5524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e5524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e5528:
    // 0x2e5528: 0x40f809  jalr        $v0
label_2e552c:
    if (ctx->pc == 0x2E552Cu) {
        ctx->pc = 0x2E552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5528u;
        // 0x2e552c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5530u;
        goto label_2e5530;
    }
    ctx->pc = 0x2E5528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5530u);
        ctx->pc = 0x2E552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5528u;
        // 0x2e552c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5528u, 0x2E5530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5530u;
label_2e5530:
    // 0x2e5530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5534:
    // 0x2e5534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5538:
    // 0x2e5538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e5538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e553c:
    // 0x2e553c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e553cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5540:
    // 0x2e5540: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e5540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2e5544:
    // 0x2e5544: 0x3e00008  jr          $ra
label_2e5548:
    if (ctx->pc == 0x2E5548u) {
        ctx->pc = 0x2E5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5544u;
        // 0x2e5548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E554Cu;
        goto label_2e554c;
    }
    ctx->pc = 0x2E5544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5544u;
        // 0x2e5548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E554Cu;
label_2e554c:
    // 0x2e554c: 0x0  nop
    ctx->pc = 0x2e554cu;
    // NOP
label_2e5550:
    // 0x2e5550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e5554:
    // 0x2e5554: 0x0  nop
    ctx->pc = 0x2e5554u;
    // NOP
    ctx->pc = 0x2e5558u;
}
