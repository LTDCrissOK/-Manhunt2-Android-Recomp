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

// Function: sub_003D1290
// Address: 0x3d1290 - 0x3d14e8
void sub_003D1290_0x3d1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1290_0x3d1290");
#endif

    switch (ctx->pc) {
        case 0x3d12d8u: goto label_3d12d8;
        case 0x3d1304u: goto label_3d1304;
        case 0x3d1318u: goto label_3d1318;
        case 0x3d1344u: goto label_3d1344;
        case 0x3d136cu: goto label_3d136c;
        case 0x3d1374u: goto label_3d1374;
        case 0x3d1384u: goto label_3d1384;
        case 0x3d13c0u: goto label_3d13c0;
        case 0x3d1430u: goto label_3d1430;
        case 0x3d1474u: goto label_3d1474;
        case 0x3d147cu: goto label_3d147c;
        case 0x3d14b0u: goto label_3d14b0;
        default: break;
    }

    ctx->pc = 0x3d1290u;

    // 0x3d1290: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3d1294: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3d1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3d1298: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3d129c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3d129cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d12a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3d12a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3d12a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d12a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d12a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3d12ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d12acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d12b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d12b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d12b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d12b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d12b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d12bc: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D12BCu;
    {
        const bool branch_taken_0x3d12bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12BCu;
        // 0x3d12c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d12bc) {
            ctx->pc = 0x3D12D0u;
            goto label_3d12d0;
        }
    }
    ctx->pc = 0x3D12C4u;
    // 0x3d12c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d12c8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3D12C8u;
    {
        const bool branch_taken_0x3d12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12C8u;
        // 0x3d12cc: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d12c8) {
            ctx->pc = 0x3D1394u;
            goto label_3d1394;
        }
    }
    ctx->pc = 0x3D12D0u;
label_3d12d0:
    // 0x3d12d0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3D12D0u;
    SET_GPR_U32(ctx, 31, 0x3D12D8u);
    ctx->pc = 0x3D12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D12D0u;
    // 0x3d12d4: 0x3c120066  lui         $s2, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3D12D0u, 0x3D12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D12D8u;
label_3d12d8:
    // 0x3d12d8: 0x8e5079c0  lw          $s0, 0x79C0($s2)
    ctx->pc = 0x3d12d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31168)));
    // 0x3d12dc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D12DCu;
    {
        const bool branch_taken_0x3d12dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D12DCu;
        // 0x3d12e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d12dc) {
            ctx->pc = 0x3D12ECu;
            goto label_3d12ec;
        }
    }
    ctx->pc = 0x3D12E4u;
    // 0x3d12e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d12e8: 0xae4279c0  sw          $v0, 0x79C0($s2)
    ctx->pc = 0x3d12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31168), GPR_U32(ctx, 2));
label_3d12ec:
    // 0x3d12ec: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D12ECu;
    {
        const bool branch_taken_0x3d12ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d12ec) {
            ctx->pc = 0x3D1310u;
            goto label_3d1310;
        }
    }
    ctx->pc = 0x3D12F4u;
    // 0x3d12f4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D12F4u;
    {
        const bool branch_taken_0x3d12f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d12f4) {
            ctx->pc = 0x3D1304u;
            goto label_3d1304;
        }
    }
    ctx->pc = 0x3D12FCu;
    // 0x3d12fc: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D12FCu;
    SET_GPR_U32(ctx, 31, 0x3D1304u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D12FCu, 0x3D1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1304u;
label_3d1304:
    // 0x3d1304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d1308: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D1308u;
    {
        const bool branch_taken_0x3d1308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1308u;
        // 0x3d130c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1308) {
            ctx->pc = 0x3D1394u;
            goto label_3d1394;
        }
    }
    ctx->pc = 0x3D1310u;
label_3d1310:
    // 0x3d1310: 0xc0f4398  jal         func_3D0E60
    ctx->pc = 0x3D1310u;
    SET_GPR_U32(ctx, 31, 0x3D1318u);
    ctx->pc = 0x3D0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0E60u, 0x3D1310u, 0x3D1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1318u;
label_3d1318:
    // 0x3d1318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d1318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d131c: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3D131Cu;
    {
        const bool branch_taken_0x3d131c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3d131c) {
            ctx->pc = 0x3D1320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D131Cu;
            // 0x3d1320: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D134Cu;
            goto label_3d134c;
        }
    }
    ctx->pc = 0x3D1324u;
    // 0x3d1324: 0x8e4279c0  lw          $v0, 0x79C0($s2)
    ctx->pc = 0x3d1324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31168)));
    // 0x3d1328: 0xae5079c0  sw          $s0, 0x79C0($s2)
    ctx->pc = 0x3d1328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31168), GPR_U32(ctx, 16));
    // 0x3d132c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d132cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d1330: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d1330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3d1334: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D1334u;
    {
        const bool branch_taken_0x3d1334 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1334u;
        // 0x3d1338: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1334) {
            ctx->pc = 0x3D1394u;
            goto label_3d1394;
        }
    }
    ctx->pc = 0x3D133Cu;
    // 0x3d133c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D133Cu;
    SET_GPR_U32(ctx, 31, 0x3D1344u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D133Cu, 0x3D1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1344u;
label_3d1344:
    // 0x3d1344: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D1344u;
    {
        const bool branch_taken_0x3d1344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1344u;
        // 0x3d1348: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1344) {
            ctx->pc = 0x3D1394u;
            goto label_3d1394;
        }
    }
    ctx->pc = 0x3D134Cu;
label_3d134c:
    // 0x3d134c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d134cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3d1350: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x3d1350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x3d1354: 0x24c61230  addiu       $a2, $a2, 0x1230
    ctx->pc = 0x3d1354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4656));
    // 0x3d1358: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3d1358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3d135c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3d135cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1364: 0xc0f4438  jal         func_3D10E0
    ctx->pc = 0x3D1364u;
    SET_GPR_U32(ctx, 31, 0x3D136Cu);
    ctx->pc = 0x3D1368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1364u;
    // 0x3d1368: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D10E0u, 0x3D1364u, 0x3D136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D136Cu;
label_3d136c:
    // 0x3d136c: 0xc0f43da  jal         func_3D0F68
    ctx->pc = 0x3D136Cu;
    SET_GPR_U32(ctx, 31, 0x3D1374u);
    ctx->pc = 0x3D1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D136Cu;
    // 0x3d1370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0F68u, 0x3D136Cu, 0x3D1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1374u;
label_3d1374:
    // 0x3d1374: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1374u;
    {
        const bool branch_taken_0x3d1374 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1374u;
        // 0x3d1378: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1374) {
            ctx->pc = 0x3D1388u;
            goto label_3d1388;
        }
    }
    ctx->pc = 0x3D137Cu;
    // 0x3d137c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D137Cu;
    SET_GPR_U32(ctx, 31, 0x3D1384u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D137Cu, 0x3D1384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1384u;
label_3d1384:
    // 0x3d1384: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3d1384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3d1388:
    // 0x3d1388: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3d1388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x3d138c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1390: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3d1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3d1394:
    // 0x3d1394: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d1394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d1398: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3d1398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d139c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d139cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d13a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d13a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d13a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d13a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d13a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d13a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d13ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d13acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d13b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d13b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d13b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D13B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13B4u;
        // 0x3d13b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D13B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D13BCu;
    // 0x3d13bc: 0x0  nop
    ctx->pc = 0x3d13bcu;
    // NOP
label_3d13c0:
    // 0x3d13c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d13c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d13c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3d13c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d13c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3d13cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d13ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d13d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d13d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d13d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d13d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d13d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d13dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d13dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d13e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d13e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d13e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d13e8: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D13E8u;
    {
        const bool branch_taken_0x3d13e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13E8u;
        // 0x3d13ec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13e8) {
            ctx->pc = 0x3D13FCu;
            goto label_3d13fc;
        }
    }
    ctx->pc = 0x3D13F0u;
    // 0x3d13f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d13f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3D13F4u;
    {
        const bool branch_taken_0x3d13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D13F4u;
        // 0x3d13f8: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d13f4) {
            ctx->pc = 0x3D148Cu;
            goto label_3d148c;
        }
    }
    ctx->pc = 0x3D13FCu;
label_3d13fc:
    // 0x3d13fc: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3d13fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x3d1400: 0x8e5079c0  lw          $s0, 0x79C0($s2)
    ctx->pc = 0x3d1400u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6679C0u));
    // 0x3d1404: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1404u;
    {
        const bool branch_taken_0x3d1404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1404) {
            ctx->pc = 0x3D1414u;
            goto label_3d1414;
        }
    }
    ctx->pc = 0x3D140Cu;
    // 0x3d140c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d1410: 0xae4279c0  sw          $v0, 0x79C0($s2)
    ctx->pc = 0x3d1410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31168), GPR_U32(ctx, 2));
label_3d1414:
    // 0x3d1414: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1414u;
    {
        const bool branch_taken_0x3d1414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d1414) {
            ctx->pc = 0x3D1428u;
            goto label_3d1428;
        }
    }
    ctx->pc = 0x3D141Cu;
    // 0x3d141c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d1420: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3D1420u;
    {
        const bool branch_taken_0x3d1420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1420u;
        // 0x3d1424: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1420) {
            ctx->pc = 0x3D148Cu;
            goto label_3d148c;
        }
    }
    ctx->pc = 0x3D1428u;
label_3d1428:
    // 0x3d1428: 0xc0f437c  jal         func_3D0DF0
    ctx->pc = 0x3D1428u;
    SET_GPR_U32(ctx, 31, 0x3D1430u);
    ctx->pc = 0x3D0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0DF0u, 0x3D1428u, 0x3D1430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1430u;
label_3d1430:
    // 0x3d1430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d1430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1434: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1434u;
    {
        const bool branch_taken_0x3d1434 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3d1434) {
            ctx->pc = 0x3D1438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1434u;
            // 0x3d1438: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1454u;
            goto label_3d1454;
        }
    }
    ctx->pc = 0x3D143Cu;
    // 0x3d143c: 0x8e4379c0  lw          $v1, 0x79C0($s2)
    ctx->pc = 0x3d143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31168)));
    // 0x3d1440: 0xae5079c0  sw          $s0, 0x79C0($s2)
    ctx->pc = 0x3d1440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31168), GPR_U32(ctx, 16));
    // 0x3d1444: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d1444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d1448: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d1448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3d144c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3D144Cu;
    {
        const bool branch_taken_0x3d144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D144Cu;
        // 0x3d1450: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d144c) {
            ctx->pc = 0x3D1490u;
            goto label_3d1490;
        }
    }
    ctx->pc = 0x3D1454u;
label_3d1454:
    // 0x3d1454: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d1454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3d1458: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x3d1458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x3d145c: 0x24c61230  addiu       $a2, $a2, 0x1230
    ctx->pc = 0x3d145cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4656));
    // 0x3d1460: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3d1460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3d1464: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3d1464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d146c: 0xc0f43fa  jal         func_3D0FE8
    ctx->pc = 0x3D146Cu;
    SET_GPR_U32(ctx, 31, 0x3D1474u);
    ctx->pc = 0x3D1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D146Cu;
    // 0x3d1470: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0FE8u, 0x3D146Cu, 0x3D1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1474u;
label_3d1474:
    // 0x3d1474: 0xc0f43ae  jal         func_3D0EB8
    ctx->pc = 0x3D1474u;
    SET_GPR_U32(ctx, 31, 0x3D147Cu);
    ctx->pc = 0x3D1478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1474u;
    // 0x3d1478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0EB8u, 0x3D1474u, 0x3D147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D147Cu;
label_3d147c:
    // 0x3d147c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3d147cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3d1480: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3d1480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x3d1484: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1488: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3d1488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3d148c:
    // 0x3d148c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d1490:
    // 0x3d1490: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d1490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d1494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d1494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d1498: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d1498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d149c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d149cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d14a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d14a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d14a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d14a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d14a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D14A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D14A8u;
        // 0x3d14ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D14A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D14B0u;
label_3d14b0:
    // 0x3d14b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3d14b4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3d14b8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3d14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3d14bc: 0xac40e660  sw          $zero, -0x19A0($v0)
    ctx->pc = 0x3d14bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x42E660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42E660u, _value); } while (0);
    // 0x3d14c0: 0xac60e664  sw          $zero, -0x199C($v1)
    ctx->pc = 0x3d14c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x42E664u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42E664u, _value); } while (0);
    // 0x3d14c4: 0x248479c8  addiu       $a0, $a0, 0x79C8
    ctx->pc = 0x3d14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31176));
    // 0x3d14c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d14c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d14cc: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3D14CCu;
    ctx->pc = 0x3D14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D14CCu;
    // 0x3d14d0: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3D14D4u;
    // 0x3d14d4: 0x0  nop
    ctx->pc = 0x3d14d4u;
    // NOP
    // 0x3d14d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3d14d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d14dc: 0x0  nop
    ctx->pc = 0x3d14dcu;
    // NOP
    // 0x3d14e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3d14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3d14e4: 0x0  nop
    ctx->pc = 0x3d14e4u;
    // NOP
    ctx->pc = 0x3d14e8u;
}
