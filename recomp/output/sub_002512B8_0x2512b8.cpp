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

// Function: sub_002512B8
// Address: 0x2512b8 - 0x251368
void sub_002512B8_0x2512b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002512B8_0x2512b8");
#endif

    switch (ctx->pc) {
        case 0x2512b8u: goto label_2512b8;
        case 0x2512bcu: goto label_2512bc;
        case 0x2512c0u: goto label_2512c0;
        case 0x2512c4u: goto label_2512c4;
        case 0x2512c8u: goto label_2512c8;
        case 0x2512ccu: goto label_2512cc;
        case 0x2512d0u: goto label_2512d0;
        case 0x2512d4u: goto label_2512d4;
        case 0x2512d8u: goto label_2512d8;
        case 0x2512dcu: goto label_2512dc;
        case 0x2512e0u: goto label_2512e0;
        case 0x2512e4u: goto label_2512e4;
        case 0x2512e8u: goto label_2512e8;
        case 0x2512ecu: goto label_2512ec;
        case 0x2512f0u: goto label_2512f0;
        case 0x2512f4u: goto label_2512f4;
        case 0x2512f8u: goto label_2512f8;
        case 0x2512fcu: goto label_2512fc;
        case 0x251300u: goto label_251300;
        case 0x251304u: goto label_251304;
        case 0x251308u: goto label_251308;
        case 0x25130cu: goto label_25130c;
        case 0x251310u: goto label_251310;
        case 0x251314u: goto label_251314;
        case 0x251318u: goto label_251318;
        case 0x25131cu: goto label_25131c;
        case 0x251320u: goto label_251320;
        case 0x251324u: goto label_251324;
        case 0x251328u: goto label_251328;
        case 0x25132cu: goto label_25132c;
        case 0x251330u: goto label_251330;
        case 0x251334u: goto label_251334;
        case 0x251338u: goto label_251338;
        case 0x25133cu: goto label_25133c;
        case 0x251340u: goto label_251340;
        case 0x251344u: goto label_251344;
        case 0x251348u: goto label_251348;
        case 0x25134cu: goto label_25134c;
        case 0x251350u: goto label_251350;
        case 0x251354u: goto label_251354;
        case 0x251358u: goto label_251358;
        case 0x25135cu: goto label_25135c;
        case 0x251360u: goto label_251360;
        case 0x251364u: goto label_251364;
        default: break;
    }

    ctx->pc = 0x2512b8u;

label_2512b8:
    // 0x2512b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2512b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2512bc:
    // 0x2512bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2512bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2512c0:
    // 0x2512c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2512c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2512c4:
    // 0x2512c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2512c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2512c8:
    // 0x2512c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2512c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2512cc:
    // 0x2512cc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2512ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2512d0:
    // 0x2512d0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2512d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2512d4:
    // 0x2512d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2512d8:
    if (ctx->pc == 0x2512D8u) {
        ctx->pc = 0x2512D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D4u;
        // 0x2512d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512DCu;
        goto label_2512dc;
    }
    ctx->pc = 0x2512D4u;
    {
        const bool branch_taken_0x2512d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D4u;
        // 0x2512d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512d4) {
            ctx->pc = 0x25131Cu;
            goto label_25131c;
        }
    }
    ctx->pc = 0x2512DCu;
label_2512dc:
    // 0x2512dc: 0x5620001a  bnel        $s1, $zero, . + 4 + (0x1A << 2)
label_2512e0:
    if (ctx->pc == 0x2512E0u) {
        ctx->pc = 0x2512E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512DCu;
        // 0x2512e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512E4u;
        goto label_2512e4;
    }
    ctx->pc = 0x2512DCu;
    {
        const bool branch_taken_0x2512dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2512dc) {
            ctx->pc = 0x2512E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2512DCu;
            // 0x2512e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251348u;
            goto label_251348;
        }
    }
    ctx->pc = 0x2512E4u;
label_2512e4:
    // 0x2512e4: 0xc09449a  jal         func_251268
label_2512e8:
    if (ctx->pc == 0x2512E8u) {
        ctx->pc = 0x2512ECu;
        goto label_2512ec;
    }
    ctx->pc = 0x2512E4u;
    SET_GPR_U32(ctx, 31, 0x2512ECu);
    ctx->pc = 0x251268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251268u, 0x2512E4u, 0x2512ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512ECu;
label_2512ec:
    // 0x2512ec: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x2512ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_2512f0:
    // 0x2512f0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2512f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2512f4:
    // 0x2512f4: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x2512f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
label_2512f8:
    // 0x2512f8: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x2512f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2512fc:
    // 0x2512fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2512fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251300:
    // 0x251300: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x251300u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_251304:
    // 0x251304: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x251304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_251308:
    // 0x251308: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x251308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_25130c:
    // 0x25130c: 0x60f809  jalr        $v1
label_251310:
    if (ctx->pc == 0x251310u) {
        ctx->pc = 0x251310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25130Cu;
        // 0x251310: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251314u;
        goto label_251314;
    }
    ctx->pc = 0x25130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x251314u);
        ctx->pc = 0x251310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25130Cu;
        // 0x251310: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25130Cu, 0x251314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251314u;
label_251314:
    // 0x251314: 0x1000000c  b           . + 4 + (0xC << 2)
label_251318:
    if (ctx->pc == 0x251318u) {
        ctx->pc = 0x251318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251314u;
        // 0x251318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25131Cu;
        goto label_25131c;
    }
    ctx->pc = 0x251314u;
    {
        const bool branch_taken_0x251314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251314u;
        // 0x251318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251314) {
            ctx->pc = 0x251348u;
            goto label_251348;
        }
    }
    ctx->pc = 0x25131Cu;
label_25131c:
    // 0x25131c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_251320:
    if (ctx->pc == 0x251320u) {
        ctx->pc = 0x251320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25131Cu;
        // 0x251320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251324u;
        goto label_251324;
    }
    ctx->pc = 0x25131Cu;
    {
        const bool branch_taken_0x25131c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x251320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25131Cu;
        // 0x251320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25131c) {
            ctx->pc = 0x251344u;
            goto label_251344;
        }
    }
    ctx->pc = 0x251324u;
label_251324:
    // 0x251324: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x251324u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_251328:
    // 0x251328: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x251328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_25132c:
    // 0x25132c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x25132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_251330:
    // 0x251330: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x251330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_251334:
    // 0x251334: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x251334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_251338:
    // 0x251338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25133c:
    // 0x25133c: 0xc0944a2  jal         func_251288
label_251340:
    if (ctx->pc == 0x251340u) {
        ctx->pc = 0x251340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25133Cu;
        // 0x251340: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251344u;
        goto label_251344;
    }
    ctx->pc = 0x25133Cu;
    SET_GPR_U32(ctx, 31, 0x251344u);
    ctx->pc = 0x251340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25133Cu;
    // 0x251340: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251288u, 0x25133Cu, 0x251344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251344u;
label_251344:
    // 0x251344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251348:
    // 0x251348: 0xc084c9a  jal         func_213268
label_25134c:
    if (ctx->pc == 0x25134Cu) {
        ctx->pc = 0x25134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251348u;
        // 0x25134c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251350u;
        goto label_251350;
    }
    ctx->pc = 0x251348u;
    SET_GPR_U32(ctx, 31, 0x251350u);
    ctx->pc = 0x25134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251348u;
    // 0x25134c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x251348u, 0x251350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251350u;
label_251350:
    // 0x251350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251354:
    // 0x251354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_251358:
    // 0x251358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25135c:
    // 0x25135c: 0x3e00008  jr          $ra
label_251360:
    if (ctx->pc == 0x251360u) {
        ctx->pc = 0x251360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25135Cu;
        // 0x251360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251364u;
        goto label_251364;
    }
    ctx->pc = 0x25135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25135Cu;
        // 0x251360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251364u;
label_251364:
    // 0x251364: 0x0  nop
    ctx->pc = 0x251364u;
    // NOP
    ctx->pc = 0x251368u;
}
