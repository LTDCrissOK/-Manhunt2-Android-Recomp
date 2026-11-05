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

// Function: sub_001A1130
// Address: 0x1a1130 - 0x1a1528
void sub_001A1130_0x1a1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1130_0x1a1130");
#endif

    switch (ctx->pc) {
        case 0x1a114cu: goto label_1a114c;
        case 0x1a115cu: goto label_1a115c;
        case 0x1a1164u: goto label_1a1164;
        case 0x1a1178u: goto label_1a1178;
        case 0x1a1194u: goto label_1a1194;
        case 0x1a11a4u: goto label_1a11a4;
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a12b0u: goto label_1a12b0;
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a132cu: goto label_1a132c;
        case 0x1a133cu: goto label_1a133c;
        case 0x1a1354u: goto label_1a1354;
        case 0x1a136cu: goto label_1a136c;
        case 0x1a137cu: goto label_1a137c;
        case 0x1a13a4u: goto label_1a13a4;
        case 0x1a13bcu: goto label_1a13bc;
        case 0x1a13ccu: goto label_1a13cc;
        case 0x1a13d4u: goto label_1a13d4;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a142cu: goto label_1a142c;
        case 0x1a143cu: goto label_1a143c;
        case 0x1a1468u: goto label_1a1468;
        case 0x1a1480u: goto label_1a1480;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a14a0u: goto label_1a14a0;
        case 0x1a14b8u: goto label_1a14b8;
        case 0x1a14c8u: goto label_1a14c8;
        case 0x1a14fcu: goto label_1a14fc;
        case 0x1a150cu: goto label_1a150c;
        default: break;
    }

    ctx->pc = 0x1a1130u;

    // 0x1a1130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1134: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a1138: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a1138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a113c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a1140: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a1140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a1144: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A1144u;
    SET_GPR_U32(ctx, 31, 0x1A114Cu);
    ctx->pc = 0x1A1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1144u;
    // 0x1a1148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A1144u, 0x1A114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A114Cu;
label_1a114c:
    // 0x1a114c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1154: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A1154u;
    SET_GPR_U32(ctx, 31, 0x1A115Cu);
    ctx->pc = 0x1A1158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1154u;
    // 0x1a1158: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A1154u, 0x1A115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A115Cu;
label_1a115c:
    // 0x1a115c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A115Cu;
    SET_GPR_U32(ctx, 31, 0x1A1164u);
    ctx->pc = 0x1A1160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A115Cu;
    // 0x1a1160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A115Cu, 0x1A1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1164u;
label_1a1164:
    // 0x1a1164: 0xc4540138  lwc1        $f20, 0x138($v0)
    ctx->pc = 0x1a1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1168: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a116c: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a1170: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1A1170u;
    SET_GPR_U32(ctx, 31, 0x1A1178u);
    ctx->pc = 0x1A1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1170u;
    // 0x1a1174: 0x8c640ff0  lw          $a0, 0xFF0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1A1170u, 0x1A1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1178u;
label_1a1178:
    // 0x1a1178: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A1178u;
    {
        const bool branch_taken_0x1a1178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1178) {
            ctx->pc = 0x1A117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1178u;
            // 0x1a117c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11E4u;
            goto label_1a11e4;
        }
    }
    ctx->pc = 0x1A1180u;
    // 0x1a1180: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1184: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1184u;
    {
        const bool branch_taken_0x1a1184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1184) {
            ctx->pc = 0x1A1188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1184u;
            // 0x1a1188: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11A8u;
            goto label_1a11a8;
        }
    }
    ctx->pc = 0x1A118Cu;
    // 0x1a118c: 0xc064cfe  jal         func_1933F8
    ctx->pc = 0x1A118Cu;
    SET_GPR_U32(ctx, 31, 0x1A1194u);
    ctx->pc = 0x1A1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A118Cu;
    // 0x1a1190: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1933F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1933F8u, 0x1A118Cu, 0x1A1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1194u;
label_1a1194:
    // 0x1a1194: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1194u;
    {
        const bool branch_taken_0x1a1194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1194) {
            ctx->pc = 0x1A1198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1194u;
            // 0x1a1198: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A11A8u;
            goto label_1a11a8;
        }
    }
    ctx->pc = 0x1A119Cu;
    // 0x1a119c: 0xc068ede  jal         func_1A3B78
    ctx->pc = 0x1A119Cu;
    SET_GPR_U32(ctx, 31, 0x1A11A4u);
    ctx->pc = 0x1A11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A119Cu;
    // 0x1a11a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B78u, 0x1A119Cu, 0x1A11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11A4u;
label_1a11a4:
    // 0x1a11a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a11a8:
    // 0x1a11a8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a11ac: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x1a11acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1a11b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a11b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1a11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1a11b8: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1A11B8u;
    {
        const bool branch_taken_0x1a11b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11B8u;
        // 0x1a11bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11b8) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A11C0u;
    // 0x1a11c0: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A11C0u;
    SET_GPR_U32(ctx, 31, 0x1A11C8u);
    ctx->pc = 0x1A11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11C0u;
    // 0x1a11c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A11C0u, 0x1A11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11C8u;
label_1a11c8:
    // 0x1a11c8: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1a11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1a11cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a11d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a11d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a11d4: 0x146200ce  bne         $v1, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1A11D4u;
    {
        const bool branch_taken_0x1a11d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11D4u;
        // 0x1a11d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11d4) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A11DCu;
    // 0x1a11dc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1A11DCu;
    {
        const bool branch_taken_0x1a11dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11dc) {
            ctx->pc = 0x1A1460u;
            goto label_1a1460;
        }
    }
    ctx->pc = 0x1A11E4u;
label_1a11e4:
    // 0x1a11e4: 0x8c441004  lw          $a0, 0x1004($v0)
    ctx->pc = 0x1a11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a11e8: 0x8c450ff8  lw          $a1, 0xFF8($v0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1a11ec: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1a11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1a11f0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a11f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a11f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a11f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A11F8u;
    {
        const bool branch_taken_0x1a11f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11F8u;
        // 0x1a11fc: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11f8) {
            ctx->pc = 0x1A1244u;
            goto label_1a1244;
        }
    }
    ctx->pc = 0x1A1200u;
    // 0x1a1200: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x1a1204: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a1208: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a120c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A120Cu;
    {
        const bool branch_taken_0x1a120c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a120c) {
            ctx->pc = 0x1A1210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A120Cu;
            // 0x1a1210: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1248u;
            goto label_1a1248;
        }
    }
    ctx->pc = 0x1A1214u;
    // 0x1a1214: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x1a1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1218: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1a121c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a121cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1220: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a1220u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1a1224: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a1224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1228: 0x0  nop
    ctx->pc = 0x1a1228u;
    // NOP
    // 0x1a122c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1A122Cu;
    {
        const bool branch_taken_0x1a122c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a122c) {
            ctx->pc = 0x1A1230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A122Cu;
            // 0x1a1230: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1248u;
            goto label_1a1248;
        }
    }
    ctx->pc = 0x1A1234u;
    // 0x1a1234: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1a1238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a123c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A123Cu;
    {
        const bool branch_taken_0x1a123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A123Cu;
        // 0x1a1240: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a123c) {
            ctx->pc = 0x1A1248u;
            goto label_1a1248;
        }
    }
    ctx->pc = 0x1A1244u;
label_1a1244:
    // 0x1a1244: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1a1244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_1a1248:
    // 0x1a1248: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1a1248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1a124c: 0x2c42005b  sltiu       $v0, $v0, 0x5B
    ctx->pc = 0x1a124cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x1a1250: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1250u;
    {
        const bool branch_taken_0x1a1250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1250) {
            ctx->pc = 0x1A1268u;
            goto label_1a1268;
        }
    }
    ctx->pc = 0x1A1258u;
    // 0x1a1258: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A1258u;
    SET_GPR_U32(ctx, 31, 0x1A1260u);
    ctx->pc = 0x1A125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1258u;
    // 0x1a125c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A1258u, 0x1A1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1A1260u;
    {
        const bool branch_taken_0x1a1260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1260u;
        // 0x1a1264: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1260) {
            ctx->pc = 0x1A150Cu;
            goto label_1a150c;
        }
    }
    ctx->pc = 0x1A1268u;
label_1a1268:
    // 0x1a1268: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a126c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a126cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1270: 0x0  nop
    ctx->pc = 0x1a1270u;
    // NOP
    // 0x1a1274: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a1274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1278: 0x0  nop
    ctx->pc = 0x1a1278u;
    // NOP
    // 0x1a127c: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x1A127Cu;
    {
        const bool branch_taken_0x1a127c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A127Cu;
        // 0x1a1280: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a127c) {
            ctx->pc = 0x1A1410u;
            goto label_1a1410;
        }
    }
    ctx->pc = 0x1A1284u;
    // 0x1a1284: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x1a1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x1a1288: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x1a1288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1a128c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1290: 0x4800064  bltz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1A1290u;
    {
        const bool branch_taken_0x1a1290 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1290u;
        // 0x1a1294: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1290) {
            ctx->pc = 0x1A1424u;
            goto label_1a1424;
        }
    }
    ctx->pc = 0x1A1298u;
    // 0x1a1298: 0x8c62f010  lw          $v0, -0xFF0($v1)
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963216)));
    // 0x1a129c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a129cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a12a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A12A0u;
    {
        const bool branch_taken_0x1a12a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12A0u;
        // 0x1a12a4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12a0) {
            ctx->pc = 0x1A12B8u;
            goto label_1a12b8;
        }
    }
    ctx->pc = 0x1A12A8u;
    // 0x1a12a8: 0xc064c8e  jal         func_193238
    ctx->pc = 0x1A12A8u;
    SET_GPR_U32(ctx, 31, 0x1A12B0u);
    ctx->pc = 0x1A12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12A8u;
    // 0x1a12ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193238u, 0x1A12A8u, 0x1A12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12B0u;
label_1a12b0:
    // 0x1a12b0: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1A12B0u;
    {
        const bool branch_taken_0x1a12b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a12b0) {
            ctx->pc = 0x1A1498u;
            goto label_1a1498;
        }
    }
    ctx->pc = 0x1A12B8u;
label_1a12b8:
    // 0x1a12b8: 0xc064d62  jal         func_193588
    ctx->pc = 0x1A12B8u;
    SET_GPR_U32(ctx, 31, 0x1A12C0u);
    ctx->pc = 0x1A12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12B8u;
    // 0x1a12bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193588u, 0x1A12B8u, 0x1A12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12C0u;
label_1a12c0:
    // 0x1a12c0: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1A12C0u;
    {
        const bool branch_taken_0x1a12c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12C0u;
        // 0x1a12c4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12c0) {
            ctx->pc = 0x1A1460u;
            goto label_1a1460;
        }
    }
    ctx->pc = 0x1A12C8u;
    // 0x1a12c8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1a12cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A12CCu;
    {
        const bool branch_taken_0x1a12cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12CCu;
        // 0x1a12d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12cc) {
            ctx->pc = 0x1A12E8u;
            goto label_1a12e8;
        }
    }
    ctx->pc = 0x1A12D4u;
    // 0x1a12d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a12d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a12d8: 0x0  nop
    ctx->pc = 0x1a12d8u;
    // NOP
    // 0x1a12dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a12dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a12e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A12E0u;
    {
        const bool branch_taken_0x1a12e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12e0) {
            ctx->pc = 0x1A1300u;
            goto label_1a1300;
        }
    }
    ctx->pc = 0x1A12E8u;
label_1a12e8:
    // 0x1a12e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a12e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a12ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a12f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a12f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a12f4: 0x0  nop
    ctx->pc = 0x1a12f4u;
    // NOP
    // 0x1a12f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a12f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a12fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a12fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a1300:
    // 0x1a1300: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a1300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a1304: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a1304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a1308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a130c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1a130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1310: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a1310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a1314: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a1314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1318: 0x0  nop
    ctx->pc = 0x1a1318u;
    // NOP
    // 0x1a131c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1A131Cu;
    {
        const bool branch_taken_0x1a131c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a131c) {
            ctx->pc = 0x1A1320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A131Cu;
            // 0x1a1320: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1344u;
            goto label_1a1344;
        }
    }
    ctx->pc = 0x1A1324u;
    // 0x1a1324: 0xc064c90  jal         func_193240
    ctx->pc = 0x1A1324u;
    SET_GPR_U32(ctx, 31, 0x1A132Cu);
    ctx->pc = 0x1A1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1324u;
    // 0x1a1328: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193240u, 0x1A1324u, 0x1A132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A132Cu;
label_1a132c:
    // 0x1a132c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A132Cu;
    {
        const bool branch_taken_0x1a132c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a132c) {
            ctx->pc = 0x1A1330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A132Cu;
            // 0x1a1330: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1344u;
            goto label_1a1344;
        }
    }
    ctx->pc = 0x1A1334u;
    // 0x1a1334: 0xc069052  jal         func_1A4148
    ctx->pc = 0x1A1334u;
    SET_GPR_U32(ctx, 31, 0x1A133Cu);
    ctx->pc = 0x1A1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1334u;
    // 0x1a1338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4148u, 0x1A1334u, 0x1A133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A133Cu;
label_1a133c:
    // 0x1a133c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A133Cu;
    {
        const bool branch_taken_0x1a133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A133Cu;
        // 0x1a1340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a133c) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1344u;
label_1a1344:
    // 0x1a1344: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A1348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1344u;
            // 0x1a1348: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1360u;
            goto label_1a1360;
        }
    }
    ctx->pc = 0x1A134Cu;
    // 0x1a134c: 0xc064cfe  jal         func_1933F8
    ctx->pc = 0x1A134Cu;
    SET_GPR_U32(ctx, 31, 0x1A1354u);
    ctx->pc = 0x1A1350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A134Cu;
    // 0x1a1350: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1933F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1933F8u, 0x1A134Cu, 0x1A1354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1354u;
label_1a1354:
    // 0x1a1354: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1A1354u;
    {
        const bool branch_taken_0x1a1354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1354) {
            ctx->pc = 0x1A14C0u;
            goto label_1a14c0;
        }
    }
    ctx->pc = 0x1A135Cu;
    // 0x1a135c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1360:
    // 0x1a1360: 0x2625f010  addiu       $a1, $s1, -0xFF0
    ctx->pc = 0x1a1360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963216));
    // 0x1a1364: 0xc064dc2  jal         func_193708
    ctx->pc = 0x1A1364u;
    SET_GPR_U32(ctx, 31, 0x1A136Cu);
    ctx->pc = 0x1A1368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1364u;
    // 0x1a1368: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193708u, 0x1A1364u, 0x1A136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A136Cu;
label_1a136c:
    // 0x1a136c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A136Cu;
    {
        const bool branch_taken_0x1a136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a136c) {
            ctx->pc = 0x1A1370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A136Cu;
            // 0x1a1370: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1384u;
            goto label_1a1384;
        }
    }
    ctx->pc = 0x1A1374u;
    // 0x1a1374: 0xc06916a  jal         func_1A45A8
    ctx->pc = 0x1A1374u;
    SET_GPR_U32(ctx, 31, 0x1A137Cu);
    ctx->pc = 0x1A1378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1374u;
    // 0x1a1378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45A8u, 0x1A1374u, 0x1A137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A137Cu;
label_1a137c:
    // 0x1a137c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A137Cu;
    {
        const bool branch_taken_0x1a137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A137Cu;
        // 0x1a1380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a137c) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1384u;
label_1a1384:
    // 0x1a1384: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1a1384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1a1388: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1a1388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a138c: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1a138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1a1390: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a1394: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A1394u;
    {
        const bool branch_taken_0x1a1394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a1394) {
            ctx->pc = 0x1A13C4u;
            goto label_1a13c4;
        }
    }
    ctx->pc = 0x1A139Cu;
    // 0x1a139c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A139Cu;
    SET_GPR_U32(ctx, 31, 0x1A13A4u);
    ctx->pc = 0x1A13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A139Cu;
    // 0x1a13a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A139Cu, 0x1A13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13A4u;
label_1a13a4:
    // 0x1a13a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a13a8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a13a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a13ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A13ACu;
    {
        const bool branch_taken_0x1a13ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a13ac) {
            ctx->pc = 0x1A13C4u;
            goto label_1a13c4;
        }
    }
    ctx->pc = 0x1A13B4u;
    // 0x1a13b4: 0xc0690c8  jal         func_1A4320
    ctx->pc = 0x1A13B4u;
    SET_GPR_U32(ctx, 31, 0x1A13BCu);
    ctx->pc = 0x1A13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13B4u;
    // 0x1a13b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4320u, 0x1A13B4u, 0x1A13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13BCu;
label_1a13bc:
    // 0x1a13bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A13BCu;
    {
        const bool branch_taken_0x1a13bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13BCu;
        // 0x1a13c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13bc) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A13C4u;
label_1a13c4:
    // 0x1a13c4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1A13C4u;
    SET_GPR_U32(ctx, 31, 0x1A13CCu);
    ctx->pc = 0x1A13C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13C4u;
    // 0x1a13c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A13C4u, 0x1A13CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13CCu;
label_1a13cc:
    // 0x1a13cc: 0xc061a12  jal         func_186848
    ctx->pc = 0x1A13CCu;
    SET_GPR_U32(ctx, 31, 0x1A13D4u);
    ctx->pc = 0x1A13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13CCu;
    // 0x1a13d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A13CCu, 0x1A13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13D4u;
label_1a13d4:
    // 0x1a13d4: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x1a13d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x1a13d8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1a13d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1a13dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a13dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a13e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a13e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a13e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a13e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13e8: 0x24e7f020  addiu       $a3, $a3, -0xFE0
    ctx->pc = 0x1a13e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963232));
    // 0x1a13ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13f0: 0xc070b88  jal         func_1C2E20
    ctx->pc = 0x1A13F0u;
    SET_GPR_U32(ctx, 31, 0x1A13F8u);
    ctx->pc = 0x1A13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13F0u;
    // 0x1a13f4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E20u, 0x1A13F0u, 0x1A13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13F8u;
label_1a13f8:
    // 0x1a13f8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1A13F8u;
    {
        const bool branch_taken_0x1a13f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F8u;
        // 0x1a13fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13f8) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1400u;
    // 0x1a1400: 0xc0691a2  jal         func_1A4688
    ctx->pc = 0x1A1400u;
    SET_GPR_U32(ctx, 31, 0x1A1408u);
    ctx->pc = 0x1A1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1400u;
    // 0x1a1404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4688u, 0x1A1400u, 0x1A1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1408u;
label_1a1408:
    // 0x1a1408: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1A1408u;
    {
        const bool branch_taken_0x1a1408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1408u;
        // 0x1a140c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1408) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1410u;
label_1a1410:
    // 0x1a1410: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x1a1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x1a1414: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1a1418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a1418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a141c: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A141Cu;
    {
        const bool branch_taken_0x1a141c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1a141c) {
            ctx->pc = 0x1A1434u;
            goto label_1a1434;
        }
    }
    ctx->pc = 0x1A1424u;
label_1a1424:
    // 0x1a1424: 0xc068e7c  jal         func_1A39F0
    ctx->pc = 0x1A1424u;
    SET_GPR_U32(ctx, 31, 0x1A142Cu);
    ctx->pc = 0x1A1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1424u;
    // 0x1a1428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A39F0u, 0x1A1424u, 0x1A142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A142Cu;
label_1a142c:
    // 0x1a142c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1A142Cu;
    {
        const bool branch_taken_0x1a142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A142Cu;
        // 0x1a1430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a142c) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1434u;
label_1a1434:
    // 0x1a1434: 0xc064d62  jal         func_193588
    ctx->pc = 0x1A1434u;
    SET_GPR_U32(ctx, 31, 0x1A143Cu);
    ctx->pc = 0x1A1438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1434u;
    // 0x1a1438: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193588u, 0x1A1434u, 0x1A143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A143Cu;
label_1a143c:
    // 0x1a143c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A143Cu;
    {
        const bool branch_taken_0x1a143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a143c) {
            ctx->pc = 0x1A1460u;
            goto label_1a1460;
        }
    }
    ctx->pc = 0x1A1444u;
    // 0x1a1444: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1a1444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x1a1448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a144c: 0x0  nop
    ctx->pc = 0x1a144cu;
    // NOP
    // 0x1a1450: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a1450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1454: 0x0  nop
    ctx->pc = 0x1a1454u;
    // NOP
    // 0x1a1458: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1458u;
    {
        const bool branch_taken_0x1a1458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1458) {
            ctx->pc = 0x1A1470u;
            goto label_1a1470;
        }
    }
    ctx->pc = 0x1A1460u;
label_1a1460:
    // 0x1a1460: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A1460u;
    SET_GPR_U32(ctx, 31, 0x1A1468u);
    ctx->pc = 0x1A1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1460u;
    // 0x1a1464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A1460u, 0x1A1468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1468u;
label_1a1468:
    // 0x1a1468: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A1468u;
    {
        const bool branch_taken_0x1a1468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1468u;
        // 0x1a146c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1468) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1470u;
label_1a1470:
    // 0x1a1470: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1a1470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1a1474: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a1474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1478: 0xc068766  jal         func_1A1D98
    ctx->pc = 0x1A1478u;
    SET_GPR_U32(ctx, 31, 0x1A1480u);
    ctx->pc = 0x1A147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1478u;
    // 0x1a147c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D98u, 0x1A1478u, 0x1A1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1480u;
label_1a1480:
    // 0x1a1480: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1480u;
    {
        const bool branch_taken_0x1a1480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1480) {
            ctx->pc = 0x1A1484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1480u;
            // 0x1a1484: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A14A8u;
            goto label_1a14a8;
        }
    }
    ctx->pc = 0x1A1488u;
    // 0x1a1488: 0xc064c8e  jal         func_193238
    ctx->pc = 0x1A1488u;
    SET_GPR_U32(ctx, 31, 0x1A1490u);
    ctx->pc = 0x1A148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1488u;
    // 0x1a148c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193238u, 0x1A1488u, 0x1A1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1490u;
label_1a1490:
    // 0x1a1490: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1490u;
    {
        const bool branch_taken_0x1a1490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1490) {
            ctx->pc = 0x1A1494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1490u;
            // 0x1a1494: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A14A8u;
            goto label_1a14a8;
        }
    }
    ctx->pc = 0x1A1498u;
label_1a1498:
    // 0x1a1498: 0xc068eb8  jal         func_1A3AE0
    ctx->pc = 0x1A1498u;
    SET_GPR_U32(ctx, 31, 0x1A14A0u);
    ctx->pc = 0x1A149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1498u;
    // 0x1a149c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AE0u, 0x1A1498u, 0x1A14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14A0u;
label_1a14a0:
    // 0x1a14a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A14A0u;
    {
        const bool branch_taken_0x1a14a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14A0u;
        // 0x1a14a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14a0) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A14A8u;
label_1a14a8:
    // 0x1a14a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A14A8u;
    {
        const bool branch_taken_0x1a14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a8) {
            ctx->pc = 0x1A14D0u;
            goto label_1a14d0;
        }
    }
    ctx->pc = 0x1A14B0u;
    // 0x1a14b0: 0xc064cfe  jal         func_1933F8
    ctx->pc = 0x1A14B0u;
    SET_GPR_U32(ctx, 31, 0x1A14B8u);
    ctx->pc = 0x1A14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14B0u;
    // 0x1a14b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1933F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1933F8u, 0x1A14B0u, 0x1A14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14B8u;
label_1a14b8:
    // 0x1a14b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A14B8u;
    {
        const bool branch_taken_0x1a14b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14b8) {
            ctx->pc = 0x1A14D0u;
            goto label_1a14d0;
        }
    }
    ctx->pc = 0x1A14C0u;
label_1a14c0:
    // 0x1a14c0: 0xc068ede  jal         func_1A3B78
    ctx->pc = 0x1A14C0u;
    SET_GPR_U32(ctx, 31, 0x1A14C8u);
    ctx->pc = 0x1A14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14C0u;
    // 0x1a14c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B78u, 0x1A14C0u, 0x1A14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14C8u;
label_1a14c8:
    // 0x1a14c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A14C8u;
    {
        const bool branch_taken_0x1a14c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14c8) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A14D0u;
label_1a14d0:
    // 0x1a14d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a14d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1a14d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a14d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a14d8: 0x0  nop
    ctx->pc = 0x1a14d8u;
    // NOP
    // 0x1a14dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a14dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a14e0: 0x0  nop
    ctx->pc = 0x1a14e0u;
    // NOP
    // 0x1a14e4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A14E4u;
    {
        const bool branch_taken_0x1a14e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14E4u;
        // 0x1a14e8: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14e4) {
            ctx->pc = 0x1A150Cu;
            goto label_1a150c;
        }
    }
    ctx->pc = 0x1A14ECu;
    // 0x1a14ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a14f0: 0x24a5f010  addiu       $a1, $a1, -0xFF0
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
    // 0x1a14f4: 0xc064dc2  jal         func_193708
    ctx->pc = 0x1A14F4u;
    SET_GPR_U32(ctx, 31, 0x1A14FCu);
    ctx->pc = 0x1A14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14F4u;
    // 0x1a14f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193708u, 0x1A14F4u, 0x1A14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14FCu;
label_1a14fc:
    // 0x1a14fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A14FCu;
    {
        const bool branch_taken_0x1a14fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14FCu;
        // 0x1a1500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14fc) {
            ctx->pc = 0x1A1510u;
            goto label_1a1510;
        }
    }
    ctx->pc = 0x1A1504u;
    // 0x1a1504: 0xc06916a  jal         func_1A45A8
    ctx->pc = 0x1A1504u;
    SET_GPR_U32(ctx, 31, 0x1A150Cu);
    ctx->pc = 0x1A1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1504u;
    // 0x1a1508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45A8u, 0x1A1504u, 0x1A150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A150Cu;
label_1a150c:
    // 0x1a150c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a150cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1510:
    // 0x1a1510: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a1510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1514: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a1514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a1518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a151c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1520: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1520u;
        // 0x1a1524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1528u;
}
