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

// Function: sub_002CA310
// Address: 0x2ca310 - 0x2ca3a0
void sub_002CA310_0x2ca310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA310_0x2ca310");
#endif

    switch (ctx->pc) {
        case 0x2ca310u: goto label_2ca310;
        case 0x2ca314u: goto label_2ca314;
        case 0x2ca318u: goto label_2ca318;
        case 0x2ca31cu: goto label_2ca31c;
        case 0x2ca320u: goto label_2ca320;
        case 0x2ca324u: goto label_2ca324;
        case 0x2ca328u: goto label_2ca328;
        case 0x2ca32cu: goto label_2ca32c;
        case 0x2ca330u: goto label_2ca330;
        case 0x2ca334u: goto label_2ca334;
        case 0x2ca338u: goto label_2ca338;
        case 0x2ca33cu: goto label_2ca33c;
        case 0x2ca340u: goto label_2ca340;
        case 0x2ca344u: goto label_2ca344;
        case 0x2ca348u: goto label_2ca348;
        case 0x2ca34cu: goto label_2ca34c;
        case 0x2ca350u: goto label_2ca350;
        case 0x2ca354u: goto label_2ca354;
        case 0x2ca358u: goto label_2ca358;
        case 0x2ca35cu: goto label_2ca35c;
        case 0x2ca360u: goto label_2ca360;
        case 0x2ca364u: goto label_2ca364;
        case 0x2ca368u: goto label_2ca368;
        case 0x2ca36cu: goto label_2ca36c;
        case 0x2ca370u: goto label_2ca370;
        case 0x2ca374u: goto label_2ca374;
        case 0x2ca378u: goto label_2ca378;
        case 0x2ca37cu: goto label_2ca37c;
        case 0x2ca380u: goto label_2ca380;
        case 0x2ca384u: goto label_2ca384;
        case 0x2ca388u: goto label_2ca388;
        case 0x2ca38cu: goto label_2ca38c;
        case 0x2ca390u: goto label_2ca390;
        case 0x2ca394u: goto label_2ca394;
        case 0x2ca398u: goto label_2ca398;
        case 0x2ca39cu: goto label_2ca39c;
        default: break;
    }

    ctx->pc = 0x2ca310u;

label_2ca310:
    // 0x2ca310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ca314:
    // 0x2ca314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ca314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca318:
    // 0x2ca318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ca31c:
    // 0x2ca31c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ca320:
    // 0x2ca320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ca324:
    // 0x2ca324: 0xc0b2a12  jal         func_2CA848
label_2ca328:
    if (ctx->pc == 0x2CA328u) {
        ctx->pc = 0x2CA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA324u;
        // 0x2ca328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA32Cu;
        goto label_2ca32c;
    }
    ctx->pc = 0x2CA324u;
    SET_GPR_U32(ctx, 31, 0x2CA32Cu);
    ctx->pc = 0x2CA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA324u;
    // 0x2ca328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA848u, 0x2CA324u, 0x2CA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA32Cu;
label_2ca32c:
    // 0x2ca32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca330:
    // 0x2ca330: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2ca330u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ca334:
    // 0x2ca334: 0xc0b2a12  jal         func_2CA848
label_2ca338:
    if (ctx->pc == 0x2CA338u) {
        ctx->pc = 0x2CA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA334u;
        // 0x2ca338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA33Cu;
        goto label_2ca33c;
    }
    ctx->pc = 0x2CA334u;
    SET_GPR_U32(ctx, 31, 0x2CA33Cu);
    ctx->pc = 0x2CA338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA334u;
    // 0x2ca338: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA848u, 0x2CA334u, 0x2CA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA33Cu;
label_2ca33c:
    // 0x2ca33c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2ca33cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ca340:
    // 0x2ca340: 0x8e031868  lw          $v1, 0x1868($s0)
    ctx->pc = 0x2ca340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6248)));
label_2ca344:
    // 0x2ca344: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x2ca344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_2ca348:
    // 0x2ca348: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2ca34c:
    if (ctx->pc == 0x2CA34Cu) {
        ctx->pc = 0x2CA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA348u;
        // 0x2ca34c: 0xac432308  sw          $v1, 0x2308($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8968), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA350u;
        goto label_2ca350;
    }
    ctx->pc = 0x2CA348u;
    {
        const bool branch_taken_0x2ca348 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA348u;
        // 0x2ca34c: 0xac432308  sw          $v1, 0x2308($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8968), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca348) {
            ctx->pc = 0x2CA358u;
            goto label_2ca358;
        }
    }
    ctx->pc = 0x2CA350u;
label_2ca350:
    // 0x2ca350: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2ca354:
    if (ctx->pc == 0x2CA354u) {
        ctx->pc = 0x2CA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA350u;
        // 0x2ca354: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA358u;
        goto label_2ca358;
    }
    ctx->pc = 0x2CA350u;
    {
        const bool branch_taken_0x2ca350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA350u;
        // 0x2ca354: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca350) {
            ctx->pc = 0x2CA390u;
            goto label_2ca390;
        }
    }
    ctx->pc = 0x2CA358u;
label_2ca358:
    // 0x2ca358: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ca358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2ca35c:
    // 0x2ca35c: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x2ca35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_2ca360:
    // 0x2ca360: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ca360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ca364:
    // 0x2ca364: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ca368:
    // 0x2ca368: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ca368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ca36c:
    // 0x2ca36c: 0x40f809  jalr        $v0
label_2ca370:
    if (ctx->pc == 0x2CA370u) {
        ctx->pc = 0x2CA374u;
        goto label_2ca374;
    }
    ctx->pc = 0x2CA36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CA374u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA36Cu, 0x2CA374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA374u;
label_2ca374:
    // 0x2ca374: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x2ca374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_2ca378:
    // 0x2ca378: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2ca378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ca37c:
    // 0x2ca37c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2ca37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ca380:
    // 0x2ca380: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2ca384:
    // 0x2ca384: 0x40f809  jalr        $v0
label_2ca388:
    if (ctx->pc == 0x2CA388u) {
        ctx->pc = 0x2CA38Cu;
        goto label_2ca38c;
    }
    ctx->pc = 0x2CA384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CA38Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA384u, 0x2CA38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CA38Cu;
label_2ca38c:
    // 0x2ca38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca390:
    // 0x2ca390: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ca394:
    // 0x2ca394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca398:
    // 0x2ca398: 0x3e00008  jr          $ra
label_2ca39c:
    if (ctx->pc == 0x2CA39Cu) {
        ctx->pc = 0x2CA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA398u;
        // 0x2ca39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA3A0u;
        goto label_fallthrough_0x2ca398;
    }
    ctx->pc = 0x2CA398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA398u;
        // 0x2ca39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ca398:
    ctx->pc = 0x2CA3A0u;
}
