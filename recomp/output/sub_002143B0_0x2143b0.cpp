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

// Function: sub_002143B0
// Address: 0x2143b0 - 0x214488
void sub_002143B0_0x2143b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002143B0_0x2143b0");
#endif

    switch (ctx->pc) {
        case 0x2143b0u: goto label_2143b0;
        case 0x2143b4u: goto label_2143b4;
        case 0x2143b8u: goto label_2143b8;
        case 0x2143bcu: goto label_2143bc;
        case 0x2143c0u: goto label_2143c0;
        case 0x2143c4u: goto label_2143c4;
        case 0x2143c8u: goto label_2143c8;
        case 0x2143ccu: goto label_2143cc;
        case 0x2143d0u: goto label_2143d0;
        case 0x2143d4u: goto label_2143d4;
        case 0x2143d8u: goto label_2143d8;
        case 0x2143dcu: goto label_2143dc;
        case 0x2143e0u: goto label_2143e0;
        case 0x2143e4u: goto label_2143e4;
        case 0x2143e8u: goto label_2143e8;
        case 0x2143ecu: goto label_2143ec;
        case 0x2143f0u: goto label_2143f0;
        case 0x2143f4u: goto label_2143f4;
        case 0x2143f8u: goto label_2143f8;
        case 0x2143fcu: goto label_2143fc;
        case 0x214400u: goto label_214400;
        case 0x214404u: goto label_214404;
        case 0x214408u: goto label_214408;
        case 0x21440cu: goto label_21440c;
        case 0x214410u: goto label_214410;
        case 0x214414u: goto label_214414;
        case 0x214418u: goto label_214418;
        case 0x21441cu: goto label_21441c;
        case 0x214420u: goto label_214420;
        case 0x214424u: goto label_214424;
        case 0x214428u: goto label_214428;
        case 0x21442cu: goto label_21442c;
        case 0x214430u: goto label_214430;
        case 0x214434u: goto label_214434;
        case 0x214438u: goto label_214438;
        case 0x21443cu: goto label_21443c;
        case 0x214440u: goto label_214440;
        case 0x214444u: goto label_214444;
        case 0x214448u: goto label_214448;
        case 0x21444cu: goto label_21444c;
        case 0x214450u: goto label_214450;
        case 0x214454u: goto label_214454;
        case 0x214458u: goto label_214458;
        case 0x21445cu: goto label_21445c;
        case 0x214460u: goto label_214460;
        case 0x214464u: goto label_214464;
        case 0x214468u: goto label_214468;
        case 0x21446cu: goto label_21446c;
        case 0x214470u: goto label_214470;
        case 0x214474u: goto label_214474;
        case 0x214478u: goto label_214478;
        case 0x21447cu: goto label_21447c;
        case 0x214480u: goto label_214480;
        case 0x214484u: goto label_214484;
        default: break;
    }

    ctx->pc = 0x2143b0u;

label_2143b0:
    // 0x2143b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2143b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2143b4:
    // 0x2143b4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2143b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2143b8:
    // 0x2143b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2143b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2143bc:
    // 0x2143bc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2143bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2143c0:
    // 0x2143c0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2143c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_2143c4:
    // 0x2143c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2143c8:
    // 0x2143c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2143cc:
    // 0x2143cc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2143ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_2143d0:
    // 0x2143d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2143d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2143d4:
    // 0x2143d4: 0xc085d2a  jal         func_2174A8
label_2143d8:
    if (ctx->pc == 0x2143D8u) {
        ctx->pc = 0x2143D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143D4u;
        // 0x2143d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2143DCu;
        goto label_2143dc;
    }
    ctx->pc = 0x2143D4u;
    SET_GPR_U32(ctx, 31, 0x2143DCu);
    ctx->pc = 0x2143D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2143D4u;
    // 0x2143d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x2143D4u, 0x2143DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143DCu;
label_2143dc:
    // 0x2143dc: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_2143e0:
    if (ctx->pc == 0x2143E0u) {
        ctx->pc = 0x2143E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143DCu;
        // 0x2143e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2143E4u;
        goto label_2143e4;
    }
    ctx->pc = 0x2143DCu;
    {
        const bool branch_taken_0x2143dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2143dc) {
            ctx->pc = 0x2143E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2143DCu;
            // 0x2143e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214468u;
            goto label_214468;
        }
    }
    ctx->pc = 0x2143E4u;
label_2143e4:
    // 0x2143e4: 0xc083072  jal         func_20C1C8
label_2143e8:
    if (ctx->pc == 0x2143E8u) {
        ctx->pc = 0x2143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143E4u;
        // 0x2143e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2143ECu;
        goto label_2143ec;
    }
    ctx->pc = 0x2143E4u;
    SET_GPR_U32(ctx, 31, 0x2143ECu);
    ctx->pc = 0x2143E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2143E4u;
    // 0x2143e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x2143E4u, 0x2143ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143ECu;
label_2143ec:
    // 0x2143ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2143ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2143f0:
    // 0x2143f0: 0xc0b1488  jal         func_2C5220
label_2143f4:
    if (ctx->pc == 0x2143F4u) {
        ctx->pc = 0x2143F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143F0u;
        // 0x2143f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2143F8u;
        goto label_2143f8;
    }
    ctx->pc = 0x2143F0u;
    SET_GPR_U32(ctx, 31, 0x2143F8u);
    ctx->pc = 0x2143F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2143F0u;
    // 0x2143f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2143F0u, 0x2143F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143F8u;
label_2143f8:
    // 0x2143f8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2143fc:
    // 0x2143fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2143fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_214400:
    // 0x214400: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x214400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_214404:
    // 0x214404: 0xc0b1680  jal         func_2C5A00
label_214408:
    if (ctx->pc == 0x214408u) {
        ctx->pc = 0x214408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214404u;
        // 0x214408: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21440Cu;
        goto label_21440c;
    }
    ctx->pc = 0x214404u;
    SET_GPR_U32(ctx, 31, 0x21440Cu);
    ctx->pc = 0x214408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214404u;
    // 0x214408: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x214404u, 0x21440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21440Cu;
label_21440c:
    // 0x21440c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_214410:
    // 0x214410: 0xc0b1612  jal         func_2C5848
label_214414:
    if (ctx->pc == 0x214414u) {
        ctx->pc = 0x214414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214410u;
        // 0x214414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214418u;
        goto label_214418;
    }
    ctx->pc = 0x214410u;
    SET_GPR_U32(ctx, 31, 0x214418u);
    ctx->pc = 0x214414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214410u;
    // 0x214414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x214410u, 0x214418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214418u;
label_214418:
    // 0x214418: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x214418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_21441c:
    // 0x21441c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_214420:
    // 0x214420: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_214424:
    // 0x214424: 0x40f809  jalr        $v0
label_214428:
    if (ctx->pc == 0x214428u) {
        ctx->pc = 0x214428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214424u;
        // 0x214428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21442Cu;
        goto label_21442c;
    }
    ctx->pc = 0x214424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21442Cu);
        ctx->pc = 0x214428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214424u;
        // 0x214428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214424u, 0x21442Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21442Cu;
label_21442c:
    // 0x21442c: 0xc083bc0  jal         func_20EF00
label_214430:
    if (ctx->pc == 0x214430u) {
        ctx->pc = 0x214430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21442Cu;
        // 0x214430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214434u;
        goto label_214434;
    }
    ctx->pc = 0x21442Cu;
    SET_GPR_U32(ctx, 31, 0x214434u);
    ctx->pc = 0x214430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21442Cu;
    // 0x214430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x21442Cu, 0x214434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214434u;
label_214434:
    // 0x214434: 0x8e30010c  lw          $s0, 0x10C($s1)
    ctx->pc = 0x214434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_214438:
    // 0x214438: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x214438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_21443c:
    // 0x21443c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x21443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_214440:
    // 0x214440: 0x40f809  jalr        $v0
label_214444:
    if (ctx->pc == 0x214444u) {
        ctx->pc = 0x214444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214440u;
        // 0x214444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214448u;
        goto label_214448;
    }
    ctx->pc = 0x214440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214448u);
        ctx->pc = 0x214444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214440u;
        // 0x214444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214440u, 0x214448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214448u;
label_214448:
    // 0x214448: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x214448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_21444c:
    // 0x21444c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_214450:
    // 0x214450: 0x40f809  jalr        $v0
label_214454:
    if (ctx->pc == 0x214454u) {
        ctx->pc = 0x214454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214450u;
        // 0x214454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214458u;
        goto label_214458;
    }
    ctx->pc = 0x214450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214458u);
        ctx->pc = 0x214454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214450u;
        // 0x214454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214450u, 0x214458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214458u;
label_214458:
    // 0x214458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21445c:
    // 0x21445c: 0xc0b7264  jal         func_2DC990
label_214460:
    if (ctx->pc == 0x214460u) {
        ctx->pc = 0x214460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21445Cu;
        // 0x214460: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214464u;
        goto label_214464;
    }
    ctx->pc = 0x21445Cu;
    SET_GPR_U32(ctx, 31, 0x214464u);
    ctx->pc = 0x214460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21445Cu;
    // 0x214460: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x21445Cu, 0x214464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214464u;
label_214464:
    // 0x214464: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x214464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214468:
    // 0x214468: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x214468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21446c:
    // 0x21446c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x21446cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_214470:
    // 0x214470: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x214470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_214474:
    // 0x214474: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x214474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_214478:
    // 0x214478: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x214478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21447c:
    // 0x21447c: 0x3e00008  jr          $ra
label_214480:
    if (ctx->pc == 0x214480u) {
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214484u;
        goto label_214484;
    }
    ctx->pc = 0x21447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214484u;
label_214484:
    // 0x214484: 0x0  nop
    ctx->pc = 0x214484u;
    // NOP
    ctx->pc = 0x214488u;
}
