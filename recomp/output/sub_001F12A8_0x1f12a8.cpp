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

// Function: sub_001F12A8
// Address: 0x1f12a8 - 0x1f1490
void sub_001F12A8_0x1f12a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F12A8_0x1f12a8");
#endif

    switch (ctx->pc) {
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f13f4u: goto label_1f13f4;
        case 0x1f1414u: goto label_1f1414;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1454u: goto label_1f1454;
        default: break;
    }

    ctx->pc = 0x1f12a8u;

    // 0x1f12a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f12a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f12ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f12acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f12b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f12b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f12b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f12b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f12bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f12bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f12c4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1F12C4u;
    SET_GPR_U32(ctx, 31, 0x1F12CCu);
    ctx->pc = 0x1F12C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12C4u;
    // 0x1f12c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1F12C4u, 0x1F12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12CCu;
label_1f12cc:
    // 0x1f12cc: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1f12ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1f12d0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F12D0u;
    {
        const bool branch_taken_0x1f12d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D0u;
        // 0x1f12d4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d0) {
            ctx->pc = 0x1F130Cu;
            goto label_1f130c;
        }
    }
    ctx->pc = 0x1F12D8u;
    // 0x1f12d8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1F12D8u;
    SET_GPR_U32(ctx, 31, 0x1F12E0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1F12D8u, 0x1F12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12E0u;
label_1f12e0:
    // 0x1f12e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f12e4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F12E4u;
    {
        const bool branch_taken_0x1f12e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12E4u;
        // 0x1f12e8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12e4) {
            ctx->pc = 0x1F130Cu;
            goto label_1f130c;
        }
    }
    ctx->pc = 0x1F12ECu;
    // 0x1f12ec: 0xc0a7ada  jal         func_29EB68
    ctx->pc = 0x1F12ECu;
    SET_GPR_U32(ctx, 31, 0x1F12F4u);
    ctx->pc = 0x29EB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB68u, 0x1F12ECu, 0x1F12F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12F4u;
label_1f12f4:
    // 0x1f12f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1f12f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f12f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1F12FCu;
    SET_GPR_U32(ctx, 31, 0x1F1304u);
    ctx->pc = 0x1F1300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12FCu;
    // 0x1f1300: 0x24a5ed00  addiu       $a1, $a1, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1F12FCu, 0x1F1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1304u;
label_1f1304:
    // 0x1f1304: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1f1304u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f1308: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f1308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f130c:
    // 0x1f130c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f1310: 0x8c4315e8  lw          $v1, 0x15E8($v0)
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5608)));
    // 0x1f1314: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1314u;
    {
        const bool branch_taken_0x1f1314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1314u;
        // 0x1f1318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1314) {
            ctx->pc = 0x1F1334u;
            goto label_1f1334;
        }
    }
    ctx->pc = 0x1F131Cu;
    // 0x1f131c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F131Cu;
    {
        const bool branch_taken_0x1f131c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f131c) {
            ctx->pc = 0x1F1334u;
            goto label_1f1334;
        }
    }
    ctx->pc = 0x1F1324u;
    // 0x1f1324: 0xc07dbb6  jal         func_1F6ED8
    ctx->pc = 0x1F1324u;
    SET_GPR_U32(ctx, 31, 0x1F132Cu);
    ctx->pc = 0x1F1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1324u;
    // 0x1f1328: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6ED8u, 0x1F1324u, 0x1F132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F132Cu;
label_1f132c:
    // 0x1f132c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F132Cu;
    {
        const bool branch_taken_0x1f132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f132c) {
            ctx->pc = 0x1F133Cu;
            goto label_1f133c;
        }
    }
    ctx->pc = 0x1F1334u;
label_1f1334:
    // 0x1f1334: 0xc07dbb6  jal         func_1F6ED8
    ctx->pc = 0x1F1334u;
    SET_GPR_U32(ctx, 31, 0x1F133Cu);
    ctx->pc = 0x1F1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1334u;
    // 0x1f1338: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6ED8u, 0x1F1334u, 0x1F133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F133Cu;
label_1f133c:
    // 0x1f133c: 0xc07c524  jal         func_1F1490
    ctx->pc = 0x1F133Cu;
    SET_GPR_U32(ctx, 31, 0x1F1344u);
    ctx->pc = 0x1F1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F133Cu;
    // 0x1f1340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1490u, 0x1F133Cu, 0x1F1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1344u;
label_1f1344:
    // 0x1f1344: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1348: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x1f1348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f134c: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f1350: 0x8c624f9c  lw          $v0, 0x4F9C($v1)
    ctx->pc = 0x1f1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20380)));
    // 0x1f1354: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1F1354u;
    {
        const bool branch_taken_0x1f1354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1354u;
        // 0x1f1358: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1354) {
            ctx->pc = 0x1F1478u;
            goto label_1f1478;
        }
    }
    ctx->pc = 0x1F135Cu;
    // 0x1f135c: 0x90424fb8  lbu         $v0, 0x4FB8($v0)
    ctx->pc = 0x1f135cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20408)));
    // 0x1f1360: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1F1360u;
    {
        const bool branch_taken_0x1f1360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1360) {
            ctx->pc = 0x1F1364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1360u;
            // 0x1f1364: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F147Cu;
            goto label_1f147c;
        }
    }
    ctx->pc = 0x1F1368u;
    // 0x1f1368: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F1368u;
    {
        const bool branch_taken_0x1f1368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1368u;
        // 0x1f136c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1368) {
            ctx->pc = 0x1F1478u;
            goto label_1f1478;
        }
    }
    ctx->pc = 0x1F1370u;
    // 0x1f1370: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1374: 0x0  nop
    ctx->pc = 0x1f1374u;
    // NOP
label_1f1378:
    // 0x1f1378: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1f1378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f137c: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1f137cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f1380: 0x26034fa0  addiu       $v1, $s0, 0x4FA0
    ctx->pc = 0x1f1380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20384));
    // 0x1f1384: 0x400013  mtlo        $v0
    ctx->pc = 0x1f1384u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1f1388: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f1388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f138c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f1390: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1394: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1f1394u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1398: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1f1398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1f139c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F139Cu;
    {
        const bool branch_taken_0x1f139c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F139Cu;
        // 0x1f13a0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f139c) {
            ctx->pc = 0x1F1454u;
            goto label_1f1454;
        }
    }
    ctx->pc = 0x1F13A4u;
    // 0x1f13a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f13a8: 0x2442ed20  addiu       $v0, $v0, -0x12E0
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962464));
    // 0x1f13ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f13b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f13b4: 0x800008  jr          $a0
    ctx->pc = 0x1F13B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F13BCu: goto label_1f13bc;
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13FCu: goto label_1f13fc;
            case 0x1F141Cu: goto label_1f141c;
            case 0x1F143Cu: goto label_1f143c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F13B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F13BCu;
label_1f13bc:
    // 0x1f13bc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f13c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f13c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13c4: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x1f13c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f13c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f13cc: 0xc07c582  jal         func_1F1608
    ctx->pc = 0x1F13CCu;
    SET_GPR_U32(ctx, 31, 0x1F13D4u);
    ctx->pc = 0x1F13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13CCu;
    // 0x1f13d0: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1608u, 0x1F13CCu, 0x1F13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13D4u;
label_1f13d4:
    // 0x1f13d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F13D4u;
    {
        const bool branch_taken_0x1f13d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13D4u;
        // 0x1f13d8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13d4) {
            ctx->pc = 0x1F1458u;
            goto label_1f1458;
        }
    }
    ctx->pc = 0x1F13DCu;
label_1f13dc:
    // 0x1f13dc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f13e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13e4: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x1f13e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f13e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f13ec: 0xc07c5de  jal         func_1F1778
    ctx->pc = 0x1F13ECu;
    SET_GPR_U32(ctx, 31, 0x1F13F4u);
    ctx->pc = 0x1F13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13ECu;
    // 0x1f13f0: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1778u, 0x1F13ECu, 0x1F13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13F4u;
label_1f13f4:
    // 0x1f13f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F13F4u;
    {
        const bool branch_taken_0x1f13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13F4u;
        // 0x1f13f8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13f4) {
            ctx->pc = 0x1F1458u;
            goto label_1f1458;
        }
    }
    ctx->pc = 0x1F13FCu;
label_1f13fc:
    // 0x1f13fc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1404: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x1f1404u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1408: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f140c: 0xc07c5fe  jal         func_1F17F8
    ctx->pc = 0x1F140Cu;
    SET_GPR_U32(ctx, 31, 0x1F1414u);
    ctx->pc = 0x1F1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F140Cu;
    // 0x1f1410: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F17F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F17F8u, 0x1F140Cu, 0x1F1414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1414u;
label_1f1414:
    // 0x1f1414: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1414u;
    {
        const bool branch_taken_0x1f1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1414u;
        // 0x1f1418: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1414) {
            ctx->pc = 0x1F1458u;
            goto label_1f1458;
        }
    }
    ctx->pc = 0x1F141Cu;
label_1f141c:
    // 0x1f141c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1424: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x1f1424u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1428: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f142c: 0xc07c60c  jal         func_1F1830
    ctx->pc = 0x1F142Cu;
    SET_GPR_U32(ctx, 31, 0x1F1434u);
    ctx->pc = 0x1F1430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F142Cu;
    // 0x1f1430: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1830u, 0x1F142Cu, 0x1F1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1434u;
label_1f1434:
    // 0x1f1434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1434u;
    {
        const bool branch_taken_0x1f1434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1434u;
        // 0x1f1438: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1434) {
            ctx->pc = 0x1F1458u;
            goto label_1f1458;
        }
    }
    ctx->pc = 0x1F143Cu;
label_1f143c:
    // 0x1f143c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f1440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1444: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x1f1444u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1448: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f144c: 0xc07c60e  jal         func_1F1838
    ctx->pc = 0x1F144Cu;
    SET_GPR_U32(ctx, 31, 0x1F1454u);
    ctx->pc = 0x1F1450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F144Cu;
    // 0x1f1450: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1838u, 0x1F144Cu, 0x1F1454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1454u;
label_1f1454:
    // 0x1f1454: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1f1458:
    // 0x1f1458: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1f1458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f145c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x1f145cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f1460: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x1f1460u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f1464: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1f1468: 0x90434fb8  lbu         $v1, 0x4FB8($v0)
    ctx->pc = 0x1f1468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20408)));
    // 0x1f146c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1f146cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f1470: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1F1470u;
    {
        const bool branch_taken_0x1f1470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1470u;
        // 0x1f1474: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1470) {
            ctx->pc = 0x1F1378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1378;
        }
    }
    ctx->pc = 0x1F1478u;
label_1f1478:
    // 0x1f1478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f147c:
    // 0x1f147c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f147cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1484: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f1484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1488: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1488u;
        // 0x1f148c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1490u;
}
