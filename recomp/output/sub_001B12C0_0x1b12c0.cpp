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

// Function: sub_001B12C0
// Address: 0x1b12c0 - 0x1b13d0
void sub_001B12C0_0x1b12c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B12C0_0x1b12c0");
#endif

    switch (ctx->pc) {
        case 0x1b1308u: goto label_1b1308;
        case 0x1b1318u: goto label_1b1318;
        case 0x1b134cu: goto label_1b134c;
        case 0x1b1358u: goto label_1b1358;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b1374u: goto label_1b1374;
        case 0x1b1384u: goto label_1b1384;
        default: break;
    }

    ctx->pc = 0x1b12c0u;

    // 0x1b12c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b12c4: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x1b12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x1b12c8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x1b12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x1b12cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b12ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12d0: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x1b12d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x1b12d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b12d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12d8: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1b12d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1b12dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b12e0: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x1b12e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x1b12e4: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1b12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1b12e8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1b12ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b12f0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b12f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b12f4: 0x16600018  bnez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B12F4u;
    {
        const bool branch_taken_0x1b12f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12F4u;
        // 0x1b12f8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12f4) {
            ctx->pc = 0x1B1358u;
            goto label_1b1358;
        }
    }
    ctx->pc = 0x1B12FCu;
    // 0x1b12fc: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1b12fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1300: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1B1300u;
    SET_GPR_U32(ctx, 31, 0x1B1308u);
    ctx->pc = 0x1B1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1300u;
    // 0x1b1304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1B1300u, 0x1B1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1308u;
label_1b1308:
    // 0x1b1308: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b1308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b130c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b130cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1310: 0xc06c056  jal         func_1B0158
    ctx->pc = 0x1B1310u;
    SET_GPR_U32(ctx, 31, 0x1B1318u);
    ctx->pc = 0x1B1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1310u;
    // 0x1b1314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0158u, 0x1B1310u, 0x1B1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1318u;
label_1b1318:
    // 0x1b1318: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b131c: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1b1320: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1b1320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b1324: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1b1328: 0x24637190  addiu       $v1, $v1, 0x7190
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29072));
    // 0x1b132c: 0x8cc800f8  lw          $t0, 0xF8($a2)
    ctx->pc = 0x1b132cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x1b1330: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1b1330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b1334: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b1334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b1338: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b1338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b133c: 0x24a5b2f0  addiu       $a1, $a1, -0x4D10
    ctx->pc = 0x1b133cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947568));
    // 0x1b1340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1344: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1B1344u;
    SET_GPR_U32(ctx, 31, 0x1B134Cu);
    ctx->pc = 0x1B1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1344u;
    // 0x1b1348: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1B1344u, 0x1B134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B134Cu;
label_1b134c:
    // 0x1b134c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1350: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1B1350u;
    SET_GPR_U32(ctx, 31, 0x1B1358u);
    ctx->pc = 0x1B1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1350u;
    // 0x1b1354: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1B1350u, 0x1B1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1358u;
label_1b1358:
    // 0x1b1358: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1b135c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1360: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x1B1360u;
    SET_GPR_U32(ctx, 31, 0x1B1368u);
    ctx->pc = 0x1B1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1360u;
    // 0x1b1364: 0x2484f1b0  addiu       $a0, $a0, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x1B1360u, 0x1B1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1368u;
label_1b1368:
    // 0x1b1368: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1b136c: 0xc089ede  jal         func_227B78
    ctx->pc = 0x1B136Cu;
    SET_GPR_U32(ctx, 31, 0x1B1374u);
    ctx->pc = 0x1B1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B136Cu;
    // 0x1b1370: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B78u, 0x1B136Cu, 0x1B1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1374u;
label_1b1374:
    // 0x1b1374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1378: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b1378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b137c: 0xc073dee  jal         func_1CF7B8
    ctx->pc = 0x1B137Cu;
    SET_GPR_U32(ctx, 31, 0x1B1384u);
    ctx->pc = 0x1B1380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B137Cu;
    // 0x1b1380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF7B8u, 0x1B137Cu, 0x1B1384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1384u;
label_1b1384:
    // 0x1b1384: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b1388: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1b1388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1b138c: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x1b138cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b1390: 0x24a58658  addiu       $a1, $a1, -0x79A8
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936152));
    // 0x1b1394: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1398: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1b1398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b139c: 0x94c7002a  lhu         $a3, 0x2A($a2)
    ctx->pc = 0x1b139cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x1b13a0: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x1b13a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b13a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b13a8: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x1b13a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b13ac: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1b13acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b13b0: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x1b13b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b13b4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1b13b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1b13b8: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x1b13b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b13bc: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1b13bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1b13c0: 0xa4c3002a  sh          $v1, 0x2A($a2)
    ctx->pc = 0x1b13c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b13c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B13C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B13C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B13CCu;
    // 0x1b13cc: 0x0  nop
    ctx->pc = 0x1b13ccu;
    // NOP
    ctx->pc = 0x1b13d0u;
}
