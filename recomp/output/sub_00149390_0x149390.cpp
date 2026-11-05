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

// Function: sub_00149390
// Address: 0x149390 - 0x149578
void sub_00149390_0x149390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149390_0x149390");
#endif

    switch (ctx->pc) {
        case 0x1493c0u: goto label_1493c0;
        case 0x1493ccu: goto label_1493cc;
        case 0x1493dcu: goto label_1493dc;
        case 0x149424u: goto label_149424;
        case 0x14943cu: goto label_14943c;
        case 0x149454u: goto label_149454;
        case 0x149478u: goto label_149478;
        case 0x14948cu: goto label_14948c;
        case 0x149498u: goto label_149498;
        case 0x1494b0u: goto label_1494b0;
        case 0x1494bcu: goto label_1494bc;
        case 0x1494d8u: goto label_1494d8;
        case 0x1494ecu: goto label_1494ec;
        case 0x149504u: goto label_149504;
        case 0x14951cu: goto label_14951c;
        case 0x149528u: goto label_149528;
        case 0x149534u: goto label_149534;
        case 0x149548u: goto label_149548;
        case 0x149554u: goto label_149554;
        default: break;
    }

    ctx->pc = 0x149390u;

    // 0x149390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149394: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x149394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x149398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14939c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1493a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1493a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1493a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1493a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1493a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1493ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1493acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1493b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1493b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1493b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1493b8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1493B8u;
    SET_GPR_U32(ctx, 31, 0x1493C0u);
    ctx->pc = 0x1493BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493B8u;
    // 0x1493bc: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1493B8u, 0x1493C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493C0u;
label_1493c0:
    // 0x1493c0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1493c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1493c4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1493C4u;
    SET_GPR_U32(ctx, 31, 0x1493CCu);
    ctx->pc = 0x1493C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493C4u;
    // 0x1493c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1493C4u, 0x1493CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493CCu;
label_1493cc:
    // 0x1493cc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1493ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1493d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1493d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493d4: 0xc052434  jal         func_1490D0
    ctx->pc = 0x1493D4u;
    SET_GPR_U32(ctx, 31, 0x1493DCu);
    ctx->pc = 0x1493D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493D4u;
    // 0x1493d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490D0u, 0x1493D4u, 0x1493DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493DCu;
label_1493dc:
    // 0x1493dc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1493dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1493e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1493e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1493e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1493e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1493e8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1493ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1493ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1493f0: 0x8e2606e8  lw          $a2, 0x6E8($s1)
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    // 0x1493f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1493f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1493f8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1493fc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x149400: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x149404: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x149404u;
    {
        const bool branch_taken_0x149404 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x149408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149404u;
        // 0x149408: 0x8c94020c  lw          $s4, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149404) {
            ctx->pc = 0x14942Cu;
            goto label_14942c;
        }
    }
    ctx->pc = 0x14940Cu;
    // 0x14940c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149410: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x149410u;
    {
        const bool branch_taken_0x149410 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x149414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149410u;
        // 0x149414: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149410) {
            ctx->pc = 0x149444u;
            goto label_149444;
        }
    }
    ctx->pc = 0x149418u;
    // 0x149418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14941c: 0xc052388  jal         func_148E20
    ctx->pc = 0x14941Cu;
    SET_GPR_U32(ctx, 31, 0x149424u);
    ctx->pc = 0x149420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14941Cu;
    // 0x149420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x14941Cu, 0x149424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149424u;
label_149424:
    // 0x149424: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149424u;
    {
        const bool branch_taken_0x149424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149424u;
        // 0x149428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149424) {
            ctx->pc = 0x149440u;
            goto label_149440;
        }
    }
    ctx->pc = 0x14942Cu;
label_14942c:
    // 0x14942c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149434: 0xc052388  jal         func_148E20
    ctx->pc = 0x149434u;
    SET_GPR_U32(ctx, 31, 0x14943Cu);
    ctx->pc = 0x149438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149434u;
    // 0x149438: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x149434u, 0x14943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14943Cu;
label_14943c:
    // 0x14943c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149440:
    // 0x149440: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x149440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_149444:
    // 0x149444: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x149444u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x149448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14944c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14944Cu;
    SET_GPR_U32(ctx, 31, 0x149454u);
    ctx->pc = 0x149450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14944Cu;
    // 0x149450: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14944Cu, 0x149454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149454u;
label_149454:
    // 0x149454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149458: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14945c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14945cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149460: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x149460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149464: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x149464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149468: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x149468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14946c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149470: 0xc04daca  jal         func_136B28
    ctx->pc = 0x149470u;
    SET_GPR_U32(ctx, 31, 0x149478u);
    ctx->pc = 0x149474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149470u;
    // 0x149474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x149470u, 0x149478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149478u;
label_149478:
    // 0x149478: 0x8e2204c4  lw          $v0, 0x4C4($s1)
    ctx->pc = 0x149478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1220)));
    // 0x14947c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149480: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x149480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x149484: 0xc046104  jal         func_118410
    ctx->pc = 0x149484u;
    SET_GPR_U32(ctx, 31, 0x14948Cu);
    ctx->pc = 0x149488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149484u;
    // 0x149488: 0x8e2506e8  lw          $a1, 0x6E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x149484u, 0x14948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14948Cu;
label_14948c:
    // 0x14948c: 0xc62c06e4  lwc1        $f12, 0x6E4($s1)
    ctx->pc = 0x14948cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149490: 0xc046290  jal         func_118A40
    ctx->pc = 0x149490u;
    SET_GPR_U32(ctx, 31, 0x149498u);
    ctx->pc = 0x149494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149490u;
    // 0x149494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x149490u, 0x149498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149498u;
label_149498:
    // 0x149498: 0x8e2206c0  lw          $v0, 0x6C0($s1)
    ctx->pc = 0x149498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1728)));
    // 0x14949c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14949Cu;
    {
        const bool branch_taken_0x14949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14949c) {
            ctx->pc = 0x1494A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14949Cu;
            // 0x1494a0: 0x8e2206f4  lw          $v0, 0x6F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494C4u;
            goto label_1494c4;
        }
    }
    ctx->pc = 0x1494A4u;
    // 0x1494a4: 0x8e2506a0  lw          $a1, 0x6A0($s1)
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    // 0x1494a8: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x1494A8u;
    SET_GPR_U32(ctx, 31, 0x1494B0u);
    ctx->pc = 0x1494ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494A8u;
    // 0x1494ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1494A8u, 0x1494B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494B0u;
label_1494b0:
    // 0x1494b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1494b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494b4: 0xc046058  jal         func_118160
    ctx->pc = 0x1494B4u;
    SET_GPR_U32(ctx, 31, 0x1494BCu);
    ctx->pc = 0x1494B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494B4u;
    // 0x1494b8: 0x262506b0  addiu       $a1, $s1, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1494B4u, 0x1494BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494BCu;
label_1494bc:
    // 0x1494bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1494BCu;
    {
        const bool branch_taken_0x1494bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494BCu;
        // 0x1494c0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494bc) {
            ctx->pc = 0x14952Cu;
            goto label_14952c;
        }
    }
    ctx->pc = 0x1494C4u;
label_1494c4:
    // 0x1494c4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1494C4u;
    {
        const bool branch_taken_0x1494c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1494C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494C4u;
        // 0x1494c8: 0x8e3006a0  lw          $s0, 0x6A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494c4) {
            ctx->pc = 0x14951Cu;
            goto label_14951c;
        }
    }
    ctx->pc = 0x1494CCu;
    // 0x1494cc: 0x9230046c  lbu         $s0, 0x46C($s1)
    ctx->pc = 0x1494ccu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1494d0: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1494D0u;
    SET_GPR_U32(ctx, 31, 0x1494D8u);
    ctx->pc = 0x1494D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494D0u;
    // 0x1494d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1494D0u, 0x1494D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494D8u;
label_1494d8:
    // 0x1494d8: 0x8e2606a0  lw          $a2, 0x6A0($s1)
    ctx->pc = 0x1494d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    // 0x1494dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1494dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1494e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494e4: 0xc04dda6  jal         func_137698
    ctx->pc = 0x1494E4u;
    SET_GPR_U32(ctx, 31, 0x1494ECu);
    ctx->pc = 0x1494E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494E4u;
    // 0x1494e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137698u, 0x1494E4u, 0x1494ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494ECu;
label_1494ec:
    // 0x1494ec: 0x8e2306a0  lw          $v1, 0x6A0($s1)
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    // 0x1494f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1494f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494f4: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1494F4u;
    {
        const bool branch_taken_0x1494f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1494F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494F4u;
        // 0x1494f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494f4) {
            ctx->pc = 0x149520u;
            goto label_149520;
        }
    }
    ctx->pc = 0x1494FCu;
    // 0x1494fc: 0xc0414a2  jal         func_105288
    ctx->pc = 0x1494FCu;
    SET_GPR_U32(ctx, 31, 0x149504u);
    ctx->pc = 0x149500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494FCu;
    // 0x149500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x1494FCu, 0x149504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149504u;
label_149504:
    // 0x149504: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x149504u;
    {
        const bool branch_taken_0x149504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149504) {
            ctx->pc = 0x149508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149504u;
            // 0x149508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149520u;
            goto label_149520;
        }
    }
    ctx->pc = 0x14950Cu;
    // 0x14950c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x149510: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x149510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149514: 0xc046290  jal         func_118A40
    ctx->pc = 0x149514u;
    SET_GPR_U32(ctx, 31, 0x14951Cu);
    ctx->pc = 0x149518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149514u;
    // 0x149518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x149514u, 0x14951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14951Cu;
label_14951c:
    // 0x14951c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14951cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_149520:
    // 0x149520: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x149520u;
    SET_GPR_U32(ctx, 31, 0x149528u);
    ctx->pc = 0x149524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149520u;
    // 0x149524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x149520u, 0x149528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149528u;
label_149528:
    // 0x149528: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x149528u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_14952c:
    // 0x14952c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14952Cu;
    SET_GPR_U32(ctx, 31, 0x149534u);
    ctx->pc = 0x149530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14952Cu;
    // 0x149530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14952Cu, 0x149534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149534u;
label_149534:
    // 0x149534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x149538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14953c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14953cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149540: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x149540u;
    SET_GPR_U32(ctx, 31, 0x149548u);
    ctx->pc = 0x149544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149540u;
    // 0x149544: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x149540u, 0x149548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149548u;
label_149548:
    // 0x149548: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x149548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14954c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14954Cu;
    SET_GPR_U32(ctx, 31, 0x149554u);
    ctx->pc = 0x149550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14954Cu;
    // 0x149550: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14954Cu, 0x149554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149554u;
label_149554:
    // 0x149554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14955c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14955cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149560: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x149560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149564: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x149564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149568: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x149568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14956c: 0x3e00008  jr          $ra
    ctx->pc = 0x14956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14956Cu;
        // 0x149570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14956Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149574u;
    // 0x149574: 0x0  nop
    ctx->pc = 0x149574u;
    // NOP
    ctx->pc = 0x149578u;
}
