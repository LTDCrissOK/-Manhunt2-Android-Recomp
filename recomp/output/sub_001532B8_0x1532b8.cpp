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

// Function: sub_001532B8
// Address: 0x1532b8 - 0x153368
void sub_001532B8_0x1532b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001532B8_0x1532b8");
#endif

    switch (ctx->pc) {
        case 0x1532b8u: goto label_1532b8;
        case 0x1532bcu: goto label_1532bc;
        case 0x1532c0u: goto label_1532c0;
        case 0x1532c4u: goto label_1532c4;
        case 0x1532c8u: goto label_1532c8;
        case 0x1532ccu: goto label_1532cc;
        case 0x1532d0u: goto label_1532d0;
        case 0x1532d4u: goto label_1532d4;
        case 0x1532d8u: goto label_1532d8;
        case 0x1532dcu: goto label_1532dc;
        case 0x1532e0u: goto label_1532e0;
        case 0x1532e4u: goto label_1532e4;
        case 0x1532e8u: goto label_1532e8;
        case 0x1532ecu: goto label_1532ec;
        case 0x1532f0u: goto label_1532f0;
        case 0x1532f4u: goto label_1532f4;
        case 0x1532f8u: goto label_1532f8;
        case 0x1532fcu: goto label_1532fc;
        case 0x153300u: goto label_153300;
        case 0x153304u: goto label_153304;
        case 0x153308u: goto label_153308;
        case 0x15330cu: goto label_15330c;
        case 0x153310u: goto label_153310;
        case 0x153314u: goto label_153314;
        case 0x153318u: goto label_153318;
        case 0x15331cu: goto label_15331c;
        case 0x153320u: goto label_153320;
        case 0x153324u: goto label_153324;
        case 0x153328u: goto label_153328;
        case 0x15332cu: goto label_15332c;
        case 0x153330u: goto label_153330;
        case 0x153334u: goto label_153334;
        case 0x153338u: goto label_153338;
        case 0x15333cu: goto label_15333c;
        case 0x153340u: goto label_153340;
        case 0x153344u: goto label_153344;
        case 0x153348u: goto label_153348;
        case 0x15334cu: goto label_15334c;
        case 0x153350u: goto label_153350;
        case 0x153354u: goto label_153354;
        case 0x153358u: goto label_153358;
        case 0x15335cu: goto label_15335c;
        case 0x153360u: goto label_153360;
        case 0x153364u: goto label_153364;
        default: break;
    }

    ctx->pc = 0x1532b8u;

label_1532b8:
    // 0x1532b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1532b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1532bc:
    // 0x1532bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1532bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1532c0:
    // 0x1532c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1532c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1532c4:
    // 0x1532c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1532c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1532c8:
    // 0x1532c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1532c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1532cc:
    // 0x1532cc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1532ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1532d0:
    // 0x1532d0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1532d4:
    if (ctx->pc == 0x1532D4u) {
        ctx->pc = 0x1532D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532D0u;
        // 0x1532d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532D8u;
        goto label_1532d8;
    }
    ctx->pc = 0x1532D0u;
    {
        const bool branch_taken_0x1532d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532d0) {
            ctx->pc = 0x1532D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1532D0u;
            // 0x1532d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153358u;
            goto label_153358;
        }
    }
    ctx->pc = 0x1532D8u;
label_1532d8:
    // 0x1532d8: 0xc04db02  jal         func_136C08
label_1532dc:
    if (ctx->pc == 0x1532DCu) {
        ctx->pc = 0x1532DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532D8u;
        // 0x1532dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532E0u;
        goto label_1532e0;
    }
    ctx->pc = 0x1532D8u;
    SET_GPR_U32(ctx, 31, 0x1532E0u);
    ctx->pc = 0x1532DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1532D8u;
    // 0x1532dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x1532D8u, 0x1532E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532E0u;
label_1532e0:
    // 0x1532e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1532e4:
    if (ctx->pc == 0x1532E4u) {
        ctx->pc = 0x1532E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532E0u;
        // 0x1532e4: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532E8u;
        goto label_1532e8;
    }
    ctx->pc = 0x1532E0u;
    {
        const bool branch_taken_0x1532e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532E0u;
        // 0x1532e4: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532e0) {
            ctx->pc = 0x1532F0u;
            goto label_1532f0;
        }
    }
    ctx->pc = 0x1532E8u;
label_1532e8:
    // 0x1532e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1532e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1532ec:
    // 0x1532ec: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x1532ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_1532f0:
    // 0x1532f0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1532f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1532f4:
    // 0x1532f4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1532f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1532f8:
    // 0x1532f8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1532fc:
    if (ctx->pc == 0x1532FCu) {
        ctx->pc = 0x1532FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F8u;
        // 0x1532fc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153300u;
        goto label_153300;
    }
    ctx->pc = 0x1532F8u;
    {
        const bool branch_taken_0x1532f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532f8) {
            ctx->pc = 0x1532FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1532F8u;
            // 0x1532fc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153348u;
            goto label_153348;
        }
    }
    ctx->pc = 0x153300u;
label_153300:
    // 0x153300: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x153300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_153304:
    // 0x153304: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_153308:
    // 0x153308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15330c:
    // 0x15330c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_153310:
    // 0x153310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153314:
    // 0x153314: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_153318:
    if (ctx->pc == 0x153318u) {
        ctx->pc = 0x153318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153314u;
        // 0x153318: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15331Cu;
        goto label_15331c;
    }
    ctx->pc = 0x153314u;
    {
        const bool branch_taken_0x153314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153314) {
            ctx->pc = 0x153318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153314u;
            // 0x153318: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1532E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1532e8;
        }
    }
    ctx->pc = 0x15331Cu;
label_15331c:
    // 0x15331c: 0xc054d60  jal         func_153580
label_153320:
    if (ctx->pc == 0x153320u) {
        ctx->pc = 0x153320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15331Cu;
        // 0x153320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153324u;
        goto label_153324;
    }
    ctx->pc = 0x15331Cu;
    SET_GPR_U32(ctx, 31, 0x153324u);
    ctx->pc = 0x153320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15331Cu;
    // 0x153320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153580u, 0x15331Cu, 0x153324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153324u;
label_153324:
    // 0x153324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153328:
    // 0x153328: 0xc04d80c  jal         func_136030
label_15332c:
    if (ctx->pc == 0x15332Cu) {
        ctx->pc = 0x15332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153328u;
        // 0x15332c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153330u;
        goto label_153330;
    }
    ctx->pc = 0x153328u;
    SET_GPR_U32(ctx, 31, 0x153330u);
    ctx->pc = 0x15332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153328u;
    // 0x15332c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x153328u, 0x153330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153330u;
label_153330:
    // 0x153330: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x153330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_153334:
    // 0x153334: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x153334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_153338:
    // 0x153338: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x153338u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15333c:
    // 0x15333c: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_153340:
    if (ctx->pc == 0x153340u) {
        ctx->pc = 0x153340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15333Cu;
        // 0x153340: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153344u;
        goto label_153344;
    }
    ctx->pc = 0x15333Cu;
    {
        const bool branch_taken_0x15333c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x15333c) {
            ctx->pc = 0x153340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15333Cu;
            // 0x153340: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1532E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1532e8;
        }
    }
    ctx->pc = 0x153344u;
label_153344:
    // 0x153344: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x153344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_153348:
    // 0x153348: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_15334c:
    // 0x15334c: 0x40f809  jalr        $v0
label_153350:
    if (ctx->pc == 0x153350u) {
        ctx->pc = 0x153350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15334Cu;
        // 0x153350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153354u;
        goto label_153354;
    }
    ctx->pc = 0x15334Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153354u);
        ctx->pc = 0x153350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15334Cu;
        // 0x153350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15334Cu, 0x153354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153354u;
label_153354:
    // 0x153354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_153358:
    // 0x153358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x153358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15335c:
    // 0x15335c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15335cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_153360:
    // 0x153360: 0x3e00008  jr          $ra
label_153364:
    if (ctx->pc == 0x153364u) {
        ctx->pc = 0x153364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153360u;
        // 0x153364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153368u;
        goto label_fallthrough_0x153360;
    }
    ctx->pc = 0x153360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153360u;
        // 0x153364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x153360:
    ctx->pc = 0x153368u;
}
