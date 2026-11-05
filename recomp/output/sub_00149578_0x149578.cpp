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

// Function: sub_00149578
// Address: 0x149578 - 0x1496e8
void sub_00149578_0x149578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149578_0x149578");
#endif

    switch (ctx->pc) {
        case 0x1495a4u: goto label_1495a4;
        case 0x1495b0u: goto label_1495b0;
        case 0x1495c0u: goto label_1495c0;
        case 0x1495e4u: goto label_1495e4;
        case 0x1495fcu: goto label_1495fc;
        case 0x14961cu: goto label_14961c;
        case 0x149640u: goto label_149640;
        case 0x149654u: goto label_149654;
        case 0x149660u: goto label_149660;
        case 0x14966cu: goto label_14966c;
        case 0x149684u: goto label_149684;
        case 0x1496a0u: goto label_1496a0;
        case 0x1496b4u: goto label_1496b4;
        case 0x1496c8u: goto label_1496c8;
        default: break;
    }

    ctx->pc = 0x149578u;

    // 0x149578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14957c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x149580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x149588: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14958c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x149590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149594: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x149594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x149598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x149598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14959c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14959Cu;
    SET_GPR_U32(ctx, 31, 0x1495A4u);
    ctx->pc = 0x1495A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14959Cu;
    // 0x1495a0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14959Cu, 0x1495A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495A4u;
label_1495a4:
    // 0x1495a4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1495a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1495a8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1495A8u;
    SET_GPR_U32(ctx, 31, 0x1495B0u);
    ctx->pc = 0x1495ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495A8u;
    // 0x1495ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1495A8u, 0x1495B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495B0u;
label_1495b0:
    // 0x1495b0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1495b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1495b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1495b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495b8: 0xc052434  jal         func_1490D0
    ctx->pc = 0x1495B8u;
    SET_GPR_U32(ctx, 31, 0x1495C0u);
    ctx->pc = 0x1495BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495B8u;
    // 0x1495bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490D0u, 0x1495B8u, 0x1495C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495C0u;
label_1495c0:
    // 0x1495c0: 0x8e2306e8  lw          $v1, 0x6E8($s1)
    ctx->pc = 0x1495c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    // 0x1495c4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1495C4u;
    {
        const bool branch_taken_0x1495c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495C4u;
        // 0x1495c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495c4) {
            ctx->pc = 0x1495ECu;
            goto label_1495ec;
        }
    }
    ctx->pc = 0x1495CCu;
    // 0x1495cc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1495D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495CCu;
        // 0x1495d0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x149600u;
            goto label_149600;
        }
    }
    ctx->pc = 0x1495D4u;
    // 0x1495d4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1495d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1495d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1495d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495dc: 0xc052388  jal         func_148E20
    ctx->pc = 0x1495DCu;
    SET_GPR_U32(ctx, 31, 0x1495E4u);
    ctx->pc = 0x1495E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495DCu;
    // 0x1495e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x1495DCu, 0x1495E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495E4u;
label_1495e4:
    // 0x1495e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1495E4u;
    {
        const bool branch_taken_0x1495e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495E4u;
        // 0x1495e8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e4) {
            ctx->pc = 0x149600u;
            goto label_149600;
        }
    }
    ctx->pc = 0x1495ECu;
label_1495ec:
    // 0x1495ec: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1495ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1495f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1495f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495f4: 0xc052388  jal         func_148E20
    ctx->pc = 0x1495F4u;
    SET_GPR_U32(ctx, 31, 0x1495FCu);
    ctx->pc = 0x1495F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495F4u;
    // 0x1495f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x1495F4u, 0x1495FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495FCu;
label_1495fc:
    // 0x1495fc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1495fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_149600:
    // 0x149600: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x149604: 0x24739a08  addiu       $s3, $v1, -0x65F8
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x149608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14960c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x14960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x149610: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x149610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x149614: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x149614u;
    SET_GPR_U32(ctx, 31, 0x14961Cu);
    ctx->pc = 0x149618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149614u;
    // 0x149618: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x149614u, 0x14961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14961Cu;
label_14961c:
    // 0x14961c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14961cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149620: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x149620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149624: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x149624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149628: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x149628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14962c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14962cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x149630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149638: 0xc04daca  jal         func_136B28
    ctx->pc = 0x149638u;
    SET_GPR_U32(ctx, 31, 0x149640u);
    ctx->pc = 0x14963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149638u;
    // 0x14963c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x149638u, 0x149640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149640u;
label_149640:
    // 0x149640: 0x8e2204c4  lw          $v0, 0x4C4($s1)
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1220)));
    // 0x149644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149648: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x149648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x14964c: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14964Cu;
    SET_GPR_U32(ctx, 31, 0x149654u);
    ctx->pc = 0x149650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14964Cu;
    // 0x149650: 0x8e2506a0  lw          $a1, 0x6A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14964Cu, 0x149654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149654u;
label_149654:
    // 0x149654: 0x8e2506e8  lw          $a1, 0x6E8($s1)
    ctx->pc = 0x149654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    // 0x149658: 0xc046104  jal         func_118410
    ctx->pc = 0x149658u;
    SET_GPR_U32(ctx, 31, 0x149660u);
    ctx->pc = 0x14965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149658u;
    // 0x14965c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x149658u, 0x149660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149660u;
label_149660:
    // 0x149660: 0xc62c06e4  lwc1        $f12, 0x6E4($s1)
    ctx->pc = 0x149660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149664: 0xc046290  jal         func_118A40
    ctx->pc = 0x149664u;
    SET_GPR_U32(ctx, 31, 0x14966Cu);
    ctx->pc = 0x149668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149664u;
    // 0x149668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x149664u, 0x14966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14966Cu;
label_14966c:
    // 0x14966c: 0x8e2206c0  lw          $v0, 0x6C0($s1)
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1728)));
    // 0x149670: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149670u;
    {
        const bool branch_taken_0x149670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149670) {
            ctx->pc = 0x149674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149670u;
            // 0x149674: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149688u;
            goto label_149688;
        }
    }
    ctx->pc = 0x149678u;
    // 0x149678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x149678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14967c: 0xc046058  jal         func_118160
    ctx->pc = 0x14967Cu;
    SET_GPR_U32(ctx, 31, 0x149684u);
    ctx->pc = 0x149680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14967Cu;
    // 0x149680: 0x262506b0  addiu       $a1, $s1, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x14967Cu, 0x149684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149684u;
label_149684:
    // 0x149684: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x149684u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_149688:
    // 0x149688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14968c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149690: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x149690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x149694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149698: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x149698u;
    SET_GPR_U32(ctx, 31, 0x1496A0u);
    ctx->pc = 0x14969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149698u;
    // 0x14969c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x149698u, 0x1496A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496A0u;
label_1496a0:
    // 0x1496a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1496a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1496a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1496a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496ac: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1496ACu;
    SET_GPR_U32(ctx, 31, 0x1496B4u);
    ctx->pc = 0x1496B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496ACu;
    // 0x1496b0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1496ACu, 0x1496B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496B4u;
label_1496b4:
    // 0x1496b4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1496b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1496b8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1496b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1496bc: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1496bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1496c0: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1496C0u;
    SET_GPR_U32(ctx, 31, 0x1496C8u);
    ctx->pc = 0x1496C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496C0u;
    // 0x1496c4: 0x8e04020c  lw          $a0, 0x20C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1496C0u, 0x1496C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496C8u;
label_1496c8:
    // 0x1496c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1496c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1496cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1496ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1496d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1496d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1496d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1496d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1496d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1496dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1496DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1496E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496DCu;
        // 0x1496e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1496DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1496E4u;
    // 0x1496e4: 0x0  nop
    ctx->pc = 0x1496e4u;
    // NOP
    ctx->pc = 0x1496e8u;
}
