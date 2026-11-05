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

// Function: sub_00212328
// Address: 0x212328 - 0x212410
void sub_00212328_0x212328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212328_0x212328");
#endif

    switch (ctx->pc) {
        case 0x212328u: goto label_212328;
        case 0x21232cu: goto label_21232c;
        case 0x212330u: goto label_212330;
        case 0x212334u: goto label_212334;
        case 0x212338u: goto label_212338;
        case 0x21233cu: goto label_21233c;
        case 0x212340u: goto label_212340;
        case 0x212344u: goto label_212344;
        case 0x212348u: goto label_212348;
        case 0x21234cu: goto label_21234c;
        case 0x212350u: goto label_212350;
        case 0x212354u: goto label_212354;
        case 0x212358u: goto label_212358;
        case 0x21235cu: goto label_21235c;
        case 0x212360u: goto label_212360;
        case 0x212364u: goto label_212364;
        case 0x212368u: goto label_212368;
        case 0x21236cu: goto label_21236c;
        case 0x212370u: goto label_212370;
        case 0x212374u: goto label_212374;
        case 0x212378u: goto label_212378;
        case 0x21237cu: goto label_21237c;
        case 0x212380u: goto label_212380;
        case 0x212384u: goto label_212384;
        case 0x212388u: goto label_212388;
        case 0x21238cu: goto label_21238c;
        case 0x212390u: goto label_212390;
        case 0x212394u: goto label_212394;
        case 0x212398u: goto label_212398;
        case 0x21239cu: goto label_21239c;
        case 0x2123a0u: goto label_2123a0;
        case 0x2123a4u: goto label_2123a4;
        case 0x2123a8u: goto label_2123a8;
        case 0x2123acu: goto label_2123ac;
        case 0x2123b0u: goto label_2123b0;
        case 0x2123b4u: goto label_2123b4;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123bcu: goto label_2123bc;
        case 0x2123c0u: goto label_2123c0;
        case 0x2123c4u: goto label_2123c4;
        case 0x2123c8u: goto label_2123c8;
        case 0x2123ccu: goto label_2123cc;
        case 0x2123d0u: goto label_2123d0;
        case 0x2123d4u: goto label_2123d4;
        case 0x2123d8u: goto label_2123d8;
        case 0x2123dcu: goto label_2123dc;
        case 0x2123e0u: goto label_2123e0;
        case 0x2123e4u: goto label_2123e4;
        case 0x2123e8u: goto label_2123e8;
        case 0x2123ecu: goto label_2123ec;
        case 0x2123f0u: goto label_2123f0;
        case 0x2123f4u: goto label_2123f4;
        case 0x2123f8u: goto label_2123f8;
        case 0x2123fcu: goto label_2123fc;
        case 0x212400u: goto label_212400;
        case 0x212404u: goto label_212404;
        case 0x212408u: goto label_212408;
        case 0x21240cu: goto label_21240c;
        default: break;
    }

    ctx->pc = 0x212328u;

label_212328:
    // 0x212328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21232c:
    // 0x21232c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_212330:
    // 0x212330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_212334:
    // 0x212334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212338:
    // 0x212338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x212338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21233c:
    // 0x21233c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21233cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_212340:
    // 0x212340: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x212340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_212344:
    // 0x212344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x212344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_212348:
    // 0x212348: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x212348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21234c:
    // 0x21234c: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x21234cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_212350:
    // 0x212350: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_212354:
    // 0x212354: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_212358:
    if (ctx->pc == 0x212358u) {
        ctx->pc = 0x212358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212354u;
        // 0x212358: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21235Cu;
        goto label_21235c;
    }
    ctx->pc = 0x212354u;
    {
        const bool branch_taken_0x212354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x212354) {
            ctx->pc = 0x212358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212354u;
            // 0x212358: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2123A0u;
            goto label_2123a0;
        }
    }
    ctx->pc = 0x21235Cu;
label_21235c:
    // 0x21235c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x21235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_212360:
    // 0x212360: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x212360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_212364:
    // 0x212364: 0x40f809  jalr        $v0
label_212368:
    if (ctx->pc == 0x212368u) {
        ctx->pc = 0x21236Cu;
        goto label_21236c;
    }
    ctx->pc = 0x212364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21236Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212364u, 0x21236Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21236Cu;
label_21236c:
    // 0x21236c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x21236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_212370:
    // 0x212370: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x212370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_212374:
    // 0x212374: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x212374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_212378:
    // 0x212378: 0x40f809  jalr        $v0
label_21237c:
    if (ctx->pc == 0x21237Cu) {
        ctx->pc = 0x212380u;
        goto label_212380;
    }
    ctx->pc = 0x212378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212378u, 0x212380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212380u;
label_212380:
    // 0x212380: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_212384:
    if (ctx->pc == 0x212384u) {
        ctx->pc = 0x212384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212380u;
        // 0x212384: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212388u;
        goto label_212388;
    }
    ctx->pc = 0x212380u;
    {
        const bool branch_taken_0x212380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x212380) {
            ctx->pc = 0x212384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212380u;
            // 0x212384: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2123A0u;
            goto label_2123a0;
        }
    }
    ctx->pc = 0x212388u;
label_212388:
    // 0x212388: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x212388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_21238c:
    // 0x21238c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x21238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_212390:
    // 0x212390: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x212390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_212394:
    // 0x212394: 0x40f809  jalr        $v0
label_212398:
    if (ctx->pc == 0x212398u) {
        ctx->pc = 0x21239Cu;
        goto label_21239c;
    }
    ctx->pc = 0x212394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21239Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212394u, 0x21239Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21239Cu;
label_21239c:
    // 0x21239c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2123a0:
    // 0x2123a0: 0xc0c48da  jal         func_312368
label_2123a4:
    if (ctx->pc == 0x2123A4u) {
        ctx->pc = 0x2123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123A0u;
        // 0x2123a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123A8u;
        goto label_2123a8;
    }
    ctx->pc = 0x2123A0u;
    SET_GPR_U32(ctx, 31, 0x2123A8u);
    ctx->pc = 0x2123A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123A0u;
    // 0x2123a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x2123A0u, 0x2123A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123A8u;
label_2123a8:
    // 0x2123a8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2123ac:
    // 0x2123ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2123b0:
    if (ctx->pc == 0x2123B0u) {
        ctx->pc = 0x2123B4u;
        goto label_2123b4;
    }
    ctx->pc = 0x2123ACu;
    {
        const bool branch_taken_0x2123ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2123ac) {
            ctx->pc = 0x2123C4u;
            goto label_2123c4;
        }
    }
    ctx->pc = 0x2123B4u;
label_2123b4:
    // 0x2123b4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2123b8:
    // 0x2123b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2123b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2123bc:
    // 0x2123bc: 0xc076508  jal         func_1D9420
label_2123c0:
    if (ctx->pc == 0x2123C0u) {
        ctx->pc = 0x2123C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123BCu;
        // 0x2123c0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123C4u;
        goto label_2123c4;
    }
    ctx->pc = 0x2123BCu;
    SET_GPR_U32(ctx, 31, 0x2123C4u);
    ctx->pc = 0x2123C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123BCu;
    // 0x2123c0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9420u, 0x2123BCu, 0x2123C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123C4u;
label_2123c4:
    // 0x2123c4: 0xc0843aa  jal         func_210EA8
label_2123c8:
    if (ctx->pc == 0x2123C8u) {
        ctx->pc = 0x2123C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123C4u;
        // 0x2123c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123CCu;
        goto label_2123cc;
    }
    ctx->pc = 0x2123C4u;
    SET_GPR_U32(ctx, 31, 0x2123CCu);
    ctx->pc = 0x2123C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123C4u;
    // 0x2123c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x2123C4u, 0x2123CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123CCu;
label_2123cc:
    // 0x2123cc: 0xc0843ea  jal         func_210FA8
label_2123d0:
    if (ctx->pc == 0x2123D0u) {
        ctx->pc = 0x2123D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123CCu;
        // 0x2123d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123D4u;
        goto label_2123d4;
    }
    ctx->pc = 0x2123CCu;
    SET_GPR_U32(ctx, 31, 0x2123D4u);
    ctx->pc = 0x2123D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123CCu;
    // 0x2123d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x2123CCu, 0x2123D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123D4u;
label_2123d4:
    // 0x2123d4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2123d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2123d8:
    // 0x2123d8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2123d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2123dc:
    // 0x2123dc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2123e0:
    if (ctx->pc == 0x2123E0u) {
        ctx->pc = 0x2123E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123DCu;
        // 0x2123e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123E4u;
        goto label_2123e4;
    }
    ctx->pc = 0x2123DCu;
    {
        const bool branch_taken_0x2123dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2123dc) {
            ctx->pc = 0x2123E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2123DCu;
            // 0x2123e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2123FCu;
            goto label_2123fc;
        }
    }
    ctx->pc = 0x2123E4u;
label_2123e4:
    // 0x2123e4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2123e8:
    // 0x2123e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2123e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2123ec:
    // 0x2123ec: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2123ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2123f0:
    // 0x2123f0: 0x40f809  jalr        $v0
label_2123f4:
    if (ctx->pc == 0x2123F4u) {
        ctx->pc = 0x2123F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123F0u;
        // 0x2123f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123F8u;
        goto label_2123f8;
    }
    ctx->pc = 0x2123F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2123F8u);
        ctx->pc = 0x2123F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123F0u;
        // 0x2123f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123F0u, 0x2123F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2123F8u;
label_2123f8:
    // 0x2123f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2123f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2123fc:
    // 0x2123fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2123fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_212400:
    // 0x212400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212404:
    // 0x212404: 0x3e00008  jr          $ra
label_212408:
    if (ctx->pc == 0x212408u) {
        ctx->pc = 0x212408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212404u;
        // 0x212408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21240Cu;
        goto label_21240c;
    }
    ctx->pc = 0x212404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212404u;
        // 0x212408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21240Cu;
label_21240c:
    // 0x21240c: 0x0  nop
    ctx->pc = 0x21240cu;
    // NOP
    ctx->pc = 0x212410u;
}
