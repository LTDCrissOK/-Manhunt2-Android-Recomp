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

// Function: sub_003D14E8
// Address: 0x3d14e8 - 0x3d1590
void sub_003D14E8_0x3d14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D14E8_0x3d14e8");
#endif

    switch (ctx->pc) {
        case 0x3d14e8u: goto label_3d14e8;
        case 0x3d14ecu: goto label_3d14ec;
        case 0x3d14f0u: goto label_3d14f0;
        case 0x3d14f4u: goto label_3d14f4;
        case 0x3d14f8u: goto label_3d14f8;
        case 0x3d14fcu: goto label_3d14fc;
        case 0x3d1500u: goto label_3d1500;
        case 0x3d1504u: goto label_3d1504;
        case 0x3d1508u: goto label_3d1508;
        case 0x3d150cu: goto label_3d150c;
        case 0x3d1510u: goto label_3d1510;
        case 0x3d1514u: goto label_3d1514;
        case 0x3d1518u: goto label_3d1518;
        case 0x3d151cu: goto label_3d151c;
        case 0x3d1520u: goto label_3d1520;
        case 0x3d1524u: goto label_3d1524;
        case 0x3d1528u: goto label_3d1528;
        case 0x3d152cu: goto label_3d152c;
        case 0x3d1530u: goto label_3d1530;
        case 0x3d1534u: goto label_3d1534;
        case 0x3d1538u: goto label_3d1538;
        case 0x3d153cu: goto label_3d153c;
        case 0x3d1540u: goto label_3d1540;
        case 0x3d1544u: goto label_3d1544;
        case 0x3d1548u: goto label_3d1548;
        case 0x3d154cu: goto label_3d154c;
        case 0x3d1550u: goto label_3d1550;
        case 0x3d1554u: goto label_3d1554;
        case 0x3d1558u: goto label_3d1558;
        case 0x3d155cu: goto label_3d155c;
        case 0x3d1560u: goto label_3d1560;
        case 0x3d1564u: goto label_3d1564;
        case 0x3d1568u: goto label_3d1568;
        case 0x3d156cu: goto label_3d156c;
        case 0x3d1570u: goto label_3d1570;
        case 0x3d1574u: goto label_3d1574;
        case 0x3d1578u: goto label_3d1578;
        case 0x3d157cu: goto label_3d157c;
        case 0x3d1580u: goto label_3d1580;
        case 0x3d1584u: goto label_3d1584;
        case 0x3d1588u: goto label_3d1588;
        case 0x3d158cu: goto label_3d158c;
        default: break;
    }

    ctx->pc = 0x3d14e8u;

label_3d14e8:
    // 0x3d14e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d14e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d14ec:
    // 0x3d14ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d14ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3d14f0:
    // 0x3d14f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d14f4:
    // 0x3d14f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d14f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d14f8:
    // 0x3d14f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3d14fc:
    // 0x3d14fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d14fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d1500:
    // 0x3d1500: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3d1504:
    if (ctx->pc == 0x3D1504u) {
        ctx->pc = 0x3D1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1500u;
        // 0x3d1504: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1508u;
        goto label_3d1508;
    }
    ctx->pc = 0x3D1500u;
    {
        const bool branch_taken_0x3d1500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1500u;
        // 0x3d1504: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1500) {
            ctx->pc = 0x3D1518u;
            goto label_3d1518;
        }
    }
    ctx->pc = 0x3D1508u;
label_3d1508:
    // 0x3d1508: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d1508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d150c:
    // 0x3d150c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3d150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d1510:
    // 0x3d1510: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d1514:
    if (ctx->pc == 0x3D1514u) {
        ctx->pc = 0x3D1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1510u;
        // 0x3d1514: 0x244279c8  addiu       $v0, $v0, 0x79C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1518u;
        goto label_3d1518;
    }
    ctx->pc = 0x3D1510u;
    {
        const bool branch_taken_0x3d1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1510u;
        // 0x3d1514: 0x244279c8  addiu       $v0, $v0, 0x79C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1510) {
            ctx->pc = 0x3D1528u;
            goto label_3d1528;
        }
    }
    ctx->pc = 0x3D1518u;
label_3d1518:
    // 0x3d1518: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d1518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3d151c:
    // 0x3d151c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d151cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d1520:
    // 0x3d1520: 0x8c42e660  lw          $v0, -0x19A0($v0)
    ctx->pc = 0x3d1520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960736)));
label_3d1524:
    // 0x3d1524: 0x8c63e664  lw          $v1, -0x199C($v1)
    ctx->pc = 0x3d1524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960740)));
label_3d1528:
    // 0x3d1528: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x3d1528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3d152c:
    // 0x3d152c: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_3d1530:
    if (ctx->pc == 0x3D1530u) {
        ctx->pc = 0x3D1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D152Cu;
        // 0x3d1530: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1534u;
        goto label_3d1534;
    }
    ctx->pc = 0x3D152Cu;
    {
        const bool branch_taken_0x3d152c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D152Cu;
        // 0x3d1530: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d152c) {
            ctx->pc = 0x3D156Cu;
            goto label_3d156c;
        }
    }
    ctx->pc = 0x3D1534u;
label_3d1534:
    // 0x3d1534: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3d1534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d1538:
    // 0x3d1538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d153c:
    // 0x3d153c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3d1540:
    if (ctx->pc == 0x3D1540u) {
        ctx->pc = 0x3D1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D153Cu;
        // 0x3d1540: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1544u;
        goto label_3d1544;
    }
    ctx->pc = 0x3D153Cu;
    {
        const bool branch_taken_0x3d153c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d153c) {
            ctx->pc = 0x3D1540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D153Cu;
            // 0x3d1540: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1564u;
            goto label_3d1564;
        }
    }
    ctx->pc = 0x3D1544u;
label_3d1544:
    // 0x3d1544: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3d1544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d1548:
    // 0x3d1548: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x3d1548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3d154c:
    // 0x3d154c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x3d154cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1550:
    // 0x3d1550: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3d1550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d1554:
    // 0x3d1554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d1554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d1558:
    // 0x3d1558: 0xc0f809  jalr        $a2
label_3d155c:
    if (ctx->pc == 0x3D155Cu) {
        ctx->pc = 0x3D155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1558u;
        // 0x3d155c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1560u;
        goto label_3d1560;
    }
    ctx->pc = 0x3D1558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3D1560u);
        ctx->pc = 0x3D155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1558u;
        // 0x3d155c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1558u, 0x3D1560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1560u;
label_3d1560:
    // 0x3d1560: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3d1560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3d1564:
    // 0x3d1564: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_3d1568:
    if (ctx->pc == 0x3D1568u) {
        ctx->pc = 0x3D1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1564u;
        // 0x3d1568: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D156Cu;
        goto label_3d156c;
    }
    ctx->pc = 0x3D1564u;
    {
        const bool branch_taken_0x3d1564 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1564u;
        // 0x3d1568: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1564) {
            ctx->pc = 0x3D1538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1538;
        }
    }
    ctx->pc = 0x3D156Cu;
label_3d156c:
    // 0x3d156c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3d156cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3d1570:
    // 0x3d1570: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x3d1570u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d1574:
    // 0x3d1574: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d1574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d1578:
    // 0x3d1578: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d1578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d157c:
    // 0x3d157c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d157cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d1580:
    // 0x3d1580: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d1580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d1584:
    // 0x3d1584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d1584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1588:
    // 0x3d1588: 0x3e00008  jr          $ra
label_3d158c:
    if (ctx->pc == 0x3D158Cu) {
        ctx->pc = 0x3D158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1588u;
        // 0x3d158c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1590u;
        goto label_fallthrough_0x3d1588;
    }
    ctx->pc = 0x3D1588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1588u;
        // 0x3d158c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d1588:
    ctx->pc = 0x3D1590u;
}
