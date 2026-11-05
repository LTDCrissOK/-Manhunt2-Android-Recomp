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

// Function: sub_00130180
// Address: 0x130180 - 0x1302a8
void sub_00130180_0x130180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130180_0x130180");
#endif

    switch (ctx->pc) {
        case 0x1301c8u: goto label_1301c8;
        case 0x1301d4u: goto label_1301d4;
        case 0x1301e4u: goto label_1301e4;
        case 0x1301ecu: goto label_1301ec;
        case 0x130220u: goto label_130220;
        case 0x130234u: goto label_130234;
        case 0x130248u: goto label_130248;
        case 0x130250u: goto label_130250;
        case 0x130264u: goto label_130264;
        case 0x130270u: goto label_130270;
        case 0x130278u: goto label_130278;
        case 0x130280u: goto label_130280;
        default: break;
    }

    ctx->pc = 0x130180u;

    // 0x130180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130188: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13018c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13018cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130194: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130198: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13019c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1301a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1301a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1301a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1301a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1301a8: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x1301a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x1301ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1301ACu;
    {
        const bool branch_taken_0x1301ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301ACu;
        // 0x1301b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301ac) {
            ctx->pc = 0x1301BCu;
            goto label_1301bc;
        }
    }
    ctx->pc = 0x1301B4u;
    // 0x1301b4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1301B4u;
    {
        const bool branch_taken_0x1301b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301B4u;
        // 0x1301b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301b4) {
            ctx->pc = 0x130284u;
            goto label_130284;
        }
    }
    ctx->pc = 0x1301BCu;
label_1301bc:
    // 0x1301bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1301bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301c0: 0xc045fd2  jal         func_117F48
    ctx->pc = 0x1301C0u;
    SET_GPR_U32(ctx, 31, 0x1301C8u);
    ctx->pc = 0x1301C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301C0u;
    // 0x1301c4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F48u, 0x1301C0u, 0x1301C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301C8u;
label_1301c8:
    // 0x1301c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1301c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301cc: 0xc0460e4  jal         func_118390
    ctx->pc = 0x1301CCu;
    SET_GPR_U32(ctx, 31, 0x1301D4u);
    ctx->pc = 0x1301D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301CCu;
    // 0x1301d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x1301CCu, 0x1301D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301D4u;
label_1301d4:
    // 0x1301d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1301d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1301d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301dc: 0xc04c4b4  jal         func_1312D0
    ctx->pc = 0x1301DCu;
    SET_GPR_U32(ctx, 31, 0x1301E4u);
    ctx->pc = 0x1301E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301DCu;
    // 0x1301e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1312D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1312D0u, 0x1301DCu, 0x1301E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301E4u;
label_1301e4:
    // 0x1301e4: 0xc043920  jal         func_10E480
    ctx->pc = 0x1301E4u;
    SET_GPR_U32(ctx, 31, 0x1301ECu);
    ctx->pc = 0x1301E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301E4u;
    // 0x1301e8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x1301E4u, 0x1301ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301ECu;
label_1301ec:
    // 0x1301ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1301ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301f0: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1301f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1301F4u;
    {
        const bool branch_taken_0x1301f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1301f4) {
            ctx->pc = 0x1301F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1301F4u;
            // 0x1301f8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13020Cu;
            goto label_13020c;
        }
    }
    ctx->pc = 0x1301FCu;
    // 0x1301fc: 0x8e0301a0  lw          $v1, 0x1A0($s0)
    ctx->pc = 0x1301fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x130200: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x130200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130204: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x130204u;
    {
        const bool branch_taken_0x130204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130204) {
            ctx->pc = 0x130208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130204u;
            // 0x130208: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13020Cu;
            goto label_13020c;
        }
    }
    ctx->pc = 0x13020Cu;
label_13020c:
    // 0x13020c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13020Cu;
    {
        const bool branch_taken_0x13020c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13020Cu;
        // 0x130210: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13020c) {
            ctx->pc = 0x130254u;
            goto label_130254;
        }
    }
    ctx->pc = 0x130214u;
    // 0x130214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130218: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130218u;
    SET_GPR_U32(ctx, 31, 0x130220u);
    ctx->pc = 0x13021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130218u;
    // 0x13021c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130218u, 0x130220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130220u;
label_130220:
    // 0x130220: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x130220u;
    {
        const bool branch_taken_0x130220 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x130224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130220u;
        // 0x130224: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130220) {
            ctx->pc = 0x13023Cu;
            goto label_13023c;
        }
    }
    ctx->pc = 0x130228u;
    // 0x130228: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x130228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13022c: 0xc094fb8  jal         func_253EE0
    ctx->pc = 0x13022Cu;
    SET_GPR_U32(ctx, 31, 0x130234u);
    ctx->pc = 0x130230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13022Cu;
    // 0x130230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253EE0u, 0x13022Cu, 0x130234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130234u;
label_130234:
    // 0x130234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130234u;
    {
        const bool branch_taken_0x130234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130234) {
            ctx->pc = 0x130248u;
            goto label_130248;
        }
    }
    ctx->pc = 0x13023Cu;
label_13023c:
    // 0x13023c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x13023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x130240: 0xc094fa2  jal         func_253E88
    ctx->pc = 0x130240u;
    SET_GPR_U32(ctx, 31, 0x130248u);
    ctx->pc = 0x130244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130240u;
    // 0x130244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E88u, 0x130240u, 0x130248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130248u;
label_130248:
    // 0x130248: 0xc095216  jal         func_254858
    ctx->pc = 0x130248u;
    SET_GPR_U32(ctx, 31, 0x130250u);
    ctx->pc = 0x13024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130248u;
    // 0x13024c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x130248u, 0x130250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130250u;
label_130250:
    // 0x130250: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x130250u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_130254:
    // 0x130254: 0x5660000b  bnel        $s3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x130254u;
    {
        const bool branch_taken_0x130254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x130254) {
            ctx->pc = 0x130258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130254u;
            // 0x130258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130284u;
            goto label_130284;
        }
    }
    ctx->pc = 0x13025Cu;
    // 0x13025c: 0xc04611e  jal         func_118478
    ctx->pc = 0x13025Cu;
    SET_GPR_U32(ctx, 31, 0x130264u);
    ctx->pc = 0x130260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13025Cu;
    // 0x130260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x13025Cu, 0x130264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130264u;
label_130264:
    // 0x130264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x130264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130268: 0xc04c500  jal         func_131400
    ctx->pc = 0x130268u;
    SET_GPR_U32(ctx, 31, 0x130270u);
    ctx->pc = 0x13026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130268u;
    // 0x13026c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131400u, 0x130268u, 0x130270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130270u;
label_130270:
    // 0x130270: 0xc04c55c  jal         func_131570
    ctx->pc = 0x130270u;
    SET_GPR_U32(ctx, 31, 0x130278u);
    ctx->pc = 0x130274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130270u;
    // 0x130274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131570u, 0x130270u, 0x130278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130278u;
label_130278:
    // 0x130278: 0xc04c5b8  jal         func_1316E0
    ctx->pc = 0x130278u;
    SET_GPR_U32(ctx, 31, 0x130280u);
    ctx->pc = 0x13027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130278u;
    // 0x13027c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316E0u, 0x130278u, 0x130280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130280u;
label_130280:
    // 0x130280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130284:
    // 0x130284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13028c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13028cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130290: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130294: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130298: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x130298u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13029c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13029cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1302a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1302A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302A0u;
        // 0x1302a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1302A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1302A8u;
}
