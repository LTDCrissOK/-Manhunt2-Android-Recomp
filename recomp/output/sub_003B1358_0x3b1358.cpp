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

// Function: sub_003B1358
// Address: 0x3b1358 - 0x3b1408
void sub_003B1358_0x3b1358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1358_0x3b1358");
#endif

    switch (ctx->pc) {
        case 0x3b1358u: goto label_3b1358;
        case 0x3b135cu: goto label_3b135c;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1364u: goto label_3b1364;
        case 0x3b1368u: goto label_3b1368;
        case 0x3b136cu: goto label_3b136c;
        case 0x3b1370u: goto label_3b1370;
        case 0x3b1374u: goto label_3b1374;
        case 0x3b1378u: goto label_3b1378;
        case 0x3b137cu: goto label_3b137c;
        case 0x3b1380u: goto label_3b1380;
        case 0x3b1384u: goto label_3b1384;
        case 0x3b1388u: goto label_3b1388;
        case 0x3b138cu: goto label_3b138c;
        case 0x3b1390u: goto label_3b1390;
        case 0x3b1394u: goto label_3b1394;
        case 0x3b1398u: goto label_3b1398;
        case 0x3b139cu: goto label_3b139c;
        case 0x3b13a0u: goto label_3b13a0;
        case 0x3b13a4u: goto label_3b13a4;
        case 0x3b13a8u: goto label_3b13a8;
        case 0x3b13acu: goto label_3b13ac;
        case 0x3b13b0u: goto label_3b13b0;
        case 0x3b13b4u: goto label_3b13b4;
        case 0x3b13b8u: goto label_3b13b8;
        case 0x3b13bcu: goto label_3b13bc;
        case 0x3b13c0u: goto label_3b13c0;
        case 0x3b13c4u: goto label_3b13c4;
        case 0x3b13c8u: goto label_3b13c8;
        case 0x3b13ccu: goto label_3b13cc;
        case 0x3b13d0u: goto label_3b13d0;
        case 0x3b13d4u: goto label_3b13d4;
        case 0x3b13d8u: goto label_3b13d8;
        case 0x3b13dcu: goto label_3b13dc;
        case 0x3b13e0u: goto label_3b13e0;
        case 0x3b13e4u: goto label_3b13e4;
        case 0x3b13e8u: goto label_3b13e8;
        case 0x3b13ecu: goto label_3b13ec;
        case 0x3b13f0u: goto label_3b13f0;
        case 0x3b13f4u: goto label_3b13f4;
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b13fcu: goto label_3b13fc;
        case 0x3b1400u: goto label_3b1400;
        case 0x3b1404u: goto label_3b1404;
        default: break;
    }

    ctx->pc = 0x3b1358u;

label_3b1358:
    // 0x3b1358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b135c:
    // 0x3b135c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b1360:
    // 0x3b1360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b1360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1364:
    // 0x3b1364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b1368:
    // 0x3b1368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b1368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b136c:
    // 0x3b136c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b1370:
    // 0x3b1370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1374:
    // 0x3b1374: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_3b1378:
    if (ctx->pc == 0x3B1378u) {
        ctx->pc = 0x3B1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1374u;
        // 0x3b1378: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B137Cu;
        goto label_3b137c;
    }
    ctx->pc = 0x3B1374u;
    {
        const bool branch_taken_0x3b1374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1374u;
        // 0x3b1378: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1374) {
            ctx->pc = 0x3B13ECu;
            goto label_3b13ec;
        }
    }
    ctx->pc = 0x3B137Cu;
label_3b137c:
    // 0x3b137c: 0xc0efab3  jal         func_3BEACC
label_3b1380:
    if (ctx->pc == 0x3B1380u) {
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B137Cu;
        // 0x3b1380: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1384u;
        goto label_3b1384;
    }
    ctx->pc = 0x3B137Cu;
    SET_GPR_U32(ctx, 31, 0x3B1384u);
    ctx->pc = 0x3B1380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B137Cu;
    // 0x3b1380: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B137Cu, 0x3B1384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1384u;
label_3b1384:
    // 0x3b1384: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x3b1384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_3b1388:
    // 0x3b1388: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b1388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b138c:
    // 0x3b138c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b1390:
    // 0x3b1390: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3b1390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3b1394:
    // 0x3b1394: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3b1394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3b1398:
    // 0x3b1398: 0x40f809  jalr        $v0
label_3b139c:
    if (ctx->pc == 0x3B139Cu) {
        ctx->pc = 0x3B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1398u;
        // 0x3b139c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13A0u;
        goto label_3b13a0;
    }
    ctx->pc = 0x3B1398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B13A0u);
        ctx->pc = 0x3B139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1398u;
        // 0x3b139c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1398u, 0x3B13A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B13A0u;
label_3b13a0:
    // 0x3b13a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3b13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b13a4:
    // 0x3b13a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b13a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b13a8:
    // 0x3b13a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b13a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b13ac:
    // 0x3b13ac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3b13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3b13b0:
    // 0x3b13b0: 0x40f809  jalr        $v0
label_3b13b4:
    if (ctx->pc == 0x3B13B4u) {
        ctx->pc = 0x3B13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13B0u;
        // 0x3b13b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13B8u;
        goto label_3b13b8;
    }
    ctx->pc = 0x3B13B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B13B8u);
        ctx->pc = 0x3B13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13B0u;
        // 0x3b13b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B13B0u, 0x3B13B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B13B8u;
label_3b13b8:
    // 0x3b13b8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3b13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_3b13bc:
    // 0x3b13bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b13bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b13c0:
    // 0x3b13c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b13c4:
    // 0x3b13c4: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x3b13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_3b13c8:
    // 0x3b13c8: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x3b13c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_3b13cc:
    // 0x3b13cc: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3b13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_3b13d0:
    // 0x3b13d0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3b13d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3b13d4:
    // 0x3b13d4: 0x108083  sra         $s0, $s0, 2
    ctx->pc = 0x3b13d4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 2));
label_3b13d8:
    // 0x3b13d8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3b13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_3b13dc:
    // 0x3b13dc: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x3b13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_3b13e0:
    // 0x3b13e0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x3b13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_3b13e4:
    // 0x3b13e4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3b13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3b13e8:
    // 0x3b13e8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x3b13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_3b13ec:
    // 0x3b13ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b13ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b13f0:
    // 0x3b13f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b13f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b13f4:
    // 0x3b13f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b13f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b13f8:
    // 0x3b13f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b13f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b13fc:
    // 0x3b13fc: 0x3e00008  jr          $ra
label_3b1400:
    if (ctx->pc == 0x3B1400u) {
        ctx->pc = 0x3B1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13FCu;
        // 0x3b1400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1404u;
        goto label_3b1404;
    }
    ctx->pc = 0x3B13FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13FCu;
        // 0x3b1400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B13FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1404u;
label_3b1404:
    // 0x3b1404: 0x0  nop
    ctx->pc = 0x3b1404u;
    // NOP
    ctx->pc = 0x3b1408u;
}
