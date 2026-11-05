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

// Function: sub_003261A0
// Address: 0x3261a0 - 0x326638
void sub_003261A0_0x3261a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003261A0_0x3261a0");
#endif

    switch (ctx->pc) {
        case 0x3261d0u: goto label_3261d0;
        case 0x326238u: goto label_326238;
        case 0x326240u: goto label_326240;
        case 0x326258u: goto label_326258;
        case 0x326268u: goto label_326268;
        case 0x326274u: goto label_326274;
        case 0x32627cu: goto label_32627c;
        case 0x3262a4u: goto label_3262a4;
        case 0x3262c8u: goto label_3262c8;
        case 0x3262d0u: goto label_3262d0;
        case 0x32634cu: goto label_32634c;
        case 0x32635cu: goto label_32635c;
        case 0x3263b8u: goto label_3263b8;
        case 0x3263c4u: goto label_3263c4;
        case 0x3263d8u: goto label_3263d8;
        case 0x3263e8u: goto label_3263e8;
        case 0x32640cu: goto label_32640c;
        case 0x3264d8u: goto label_3264d8;
        case 0x3264e8u: goto label_3264e8;
        case 0x326504u: goto label_326504;
        case 0x326600u: goto label_326600;
        default: break;
    }

    ctx->pc = 0x3261a0u;

    // 0x3261a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3261a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3261a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3261a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3261a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3261a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3261ac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3261acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3261b0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3261b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3261b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3261b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3261b8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x3261b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x3261bc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3261bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3261c0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3261c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3261c4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3261c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3261c8: 0xc0c9770  jal         func_325DC0
    ctx->pc = 0x3261C8u;
    SET_GPR_U32(ctx, 31, 0x3261D0u);
    ctx->pc = 0x3261CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261C8u;
    // 0x3261cc: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DC0u, 0x3261C8u, 0x3261D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261D0u;
label_3261d0:
    // 0x3261d0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3261D0u;
    {
        const bool branch_taken_0x3261d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261D0u;
        // 0x3261d4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261d0) {
            ctx->pc = 0x3262E4u;
            goto label_3262e4;
        }
    }
    ctx->pc = 0x3261D8u;
    // 0x3261d8: 0x8c43cb34  lw          $v1, -0x34CC($v0)
    ctx->pc = 0x3261d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953780)));
    // 0x3261dc: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3261DCu;
    {
        const bool branch_taken_0x3261dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3261E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261DCu;
        // 0x3261e0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261dc) {
            ctx->pc = 0x3262E8u;
            goto label_3262e8;
        }
    }
    ctx->pc = 0x3261E4u;
    // 0x3261e4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x3261e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x3261e8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x3261e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x3261ec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2464u));
    // 0x3261f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3261f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3261f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3261F4u;
    {
        const bool branch_taken_0x3261f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3261F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261F4u;
        // 0x3261f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261f4) {
            ctx->pc = 0x326208u;
            goto label_326208;
        }
    }
    ctx->pc = 0x3261FCu;
    // 0x3261fc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3261fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x326200: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x326200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x326204: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x326204u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_326208:
    // 0x326208: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x326208u;
    {
        const bool branch_taken_0x326208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326208u;
        // 0x32620c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326208) {
            ctx->pc = 0x3262E4u;
            goto label_3262e4;
        }
    }
    ctx->pc = 0x326210u;
    // 0x326210: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x326210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
    // 0x326214: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x326214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x326218: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x326218u;
    {
        const bool branch_taken_0x326218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326218u;
        // 0x32621c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326218) {
            ctx->pc = 0x326280u;
            goto label_326280;
        }
    }
    ctx->pc = 0x326220u;
    // 0x326220: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x326220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x326224: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x326224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x326228: 0x8e05be8c  lw          $a1, -0x4174($s0)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBE8Cu));
    // 0x32622c: 0x2451d7e8  addiu       $s1, $v0, -0x2818
    ctx->pc = 0x32622cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957032));
    // 0x326230: 0xc0cd3f6  jal         func_334FD8
    ctx->pc = 0x326230u;
    SET_GPR_U32(ctx, 31, 0x326238u);
    ctx->pc = 0x326234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326230u;
    // 0x326234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334FD8u, 0x326230u, 0x326238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326238u;
label_326238:
    // 0x326238: 0xc0cd984  jal         func_336610
    ctx->pc = 0x326238u;
    SET_GPR_U32(ctx, 31, 0x326240u);
    ctx->pc = 0x32623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326238u;
    // 0x32623c: 0x8e04be8c  lw          $a0, -0x4174($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x326238u, 0x326240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326240u;
label_326240:
    // 0x326240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x326240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326244: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x326244u;
    {
        const bool branch_taken_0x326244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x326248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326244u;
        // 0x326248: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326244) {
            ctx->pc = 0x326280u;
            goto label_326280;
        }
    }
    ctx->pc = 0x32624Cu;
    // 0x32624c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326250: 0xc0cd5bc  jal         func_3356F0
    ctx->pc = 0x326250u;
    SET_GPR_U32(ctx, 31, 0x326258u);
    ctx->pc = 0x326254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326250u;
    // 0x326254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356F0u, 0x326250u, 0x326258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326258u;
label_326258:
    // 0x326258: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x326258u;
    {
        const bool branch_taken_0x326258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326258) {
            ctx->pc = 0x32625Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326258u;
            // 0x32625c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326280u;
            goto label_326280;
        }
    }
    ctx->pc = 0x326260u;
    // 0x326260: 0xc0cde32  jal         func_3378C8
    ctx->pc = 0x326260u;
    SET_GPR_U32(ctx, 31, 0x326268u);
    ctx->pc = 0x326264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326260u;
    // 0x326264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378C8u, 0x326260u, 0x326268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326268u;
label_326268:
    // 0x326268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32626c: 0xc0cd7b2  jal         func_335EC8
    ctx->pc = 0x32626Cu;
    SET_GPR_U32(ctx, 31, 0x326274u);
    ctx->pc = 0x326270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32626Cu;
    // 0x326270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EC8u, 0x32626Cu, 0x326274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326274u;
label_326274:
    // 0x326274: 0xc0c1134  jal         func_3044D0
    ctx->pc = 0x326274u;
    SET_GPR_U32(ctx, 31, 0x32627Cu);
    ctx->pc = 0x326278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326274u;
    // 0x326278: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3044D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044D0u, 0x326274u, 0x32627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32627Cu;
label_32627c:
    // 0x32627c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x32627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_326280:
    // 0x326280: 0x2443b0e0  addiu       $v1, $v0, -0x4F20
    ctx->pc = 0x326280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x326284: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x326284u;
    {
        const bool branch_taken_0x326284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326284u;
        // 0x326288: 0x3c070048  lui         $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326284) {
            ctx->pc = 0x3262A8u;
            goto label_3262a8;
        }
    }
    ctx->pc = 0x32628Cu;
    // 0x32628c: 0x8c626394  lw          $v0, 0x6394($v1)
    ctx->pc = 0x32628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25492)));
    // 0x326290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326290u;
    {
        const bool branch_taken_0x326290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326290u;
        // 0x326294: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326290) {
            ctx->pc = 0x3262A8u;
            goto label_3262a8;
        }
    }
    ctx->pc = 0x326298u;
    // 0x326298: 0xac606394  sw          $zero, 0x6394($v1)
    ctx->pc = 0x326298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25492), GPR_U32(ctx, 0));
    // 0x32629c: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x32629Cu;
    SET_GPR_U32(ctx, 31, 0x3262A4u);
    ctx->pc = 0x3262A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32629Cu;
    // 0x3262a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x32629Cu, 0x3262A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262A4u;
label_3262a4:
    // 0x3262a4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x3262a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_3262a8:
    // 0x3262a8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3262a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3262ac: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x3262acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x3262b0: 0x8ce62c6c  lw          $a2, 0x2C6C($a3)
    ctx->pc = 0x3262b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11372)));
    // 0x3262b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3262b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3262b8: 0x8c652c70  lw          $a1, 0x2C70($v1)
    ctx->pc = 0x3262b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482C70u));
    // 0x3262bc: 0x8c44be90  lw          $a0, -0x4170($v0)
    ctx->pc = 0x3262bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBE90u));
    // 0x3262c0: 0xc0cde3e  jal         func_3378F8
    ctx->pc = 0x3262C0u;
    SET_GPR_U32(ctx, 31, 0x3262C8u);
    ctx->pc = 0x3262C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262C0u;
    // 0x3262c4: 0x8d072c74  lw          $a3, 0x2C74($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378F8u, 0x3262C0u, 0x3262C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262C8u;
label_3262c8:
    // 0x3262c8: 0xc0c7888  jal         func_31E220
    ctx->pc = 0x3262C8u;
    SET_GPR_U32(ctx, 31, 0x3262D0u);
    ctx->pc = 0x31E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E220u, 0x3262C8u, 0x3262D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262D0u;
label_3262d0:
    // 0x3262d0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3262d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3262d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3262d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3262d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3262d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3262dc: 0xac82be98  sw          $v0, -0x4168($a0)
    ctx->pc = 0x3262dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBE98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE98u, _value); } while (0);
    // 0x3262e0: 0xac60be94  sw          $zero, -0x416C($v1)
    ctx->pc = 0x3262e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBE94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE94u, _value); } while (0);
label_3262e4:
    // 0x3262e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3262e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3262e8:
    // 0x3262e8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3262e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x3262ec: 0x8c56be28  lw          $s6, -0x41D8($v0)
    ctx->pc = 0x3262ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950440)));
    // 0x3262f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3262f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3262f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3262f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3262f8: 0x8e84be44  lw          $a0, -0x41BC($s4)
    ctx->pc = 0x3262f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBE44u));
    // 0x3262fc: 0x8ec20100  lw          $v0, 0x100($s6)
    ctx->pc = 0x3262fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    // 0x326300: 0xc4752b30  lwc1        $f21, 0x2B30($v1)
    ctx->pc = 0x326300u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x326304: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x326304u;
    {
        const bool branch_taken_0x326304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x326308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326304u;
        // 0x326308: 0x24530040  addiu       $s3, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326304) {
            ctx->pc = 0x3263C4u;
            goto label_3263c4;
        }
    }
    ctx->pc = 0x32630Cu;
    // 0x32630c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x32630cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x326310: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326314: 0xc621be58  lwc1        $f1, -0x41A8($s1)
    ctx->pc = 0x326314u;
    { uint32_t bits = FAST_READ32(0x3FBE58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326318: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x326318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32631c: 0xc440be48  lwc1        $f0, -0x41B8($v0)
    ctx->pc = 0x32631cu;
    { uint32_t bits = FAST_READ32(0x3FBE48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326320: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x326320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326324: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x326324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x326328: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32632c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x32632cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x326330: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x326330u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x326334: 0xe621be58  swc1        $f1, -0x41A8($s1)
    ctx->pc = 0x326334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE58u, _value); } while (0); }
    // 0x326338: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x326338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x32633c: 0xe4602c68  swc1        $f0, 0x2C68($v1)
    ctx->pc = 0x32633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482C68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C68u, _value); } while (0); }
    // 0x326340: 0x8ed00100  lw          $s0, 0x100($s6)
    ctx->pc = 0x326340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    // 0x326344: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x326344u;
    SET_GPR_U32(ctx, 31, 0x32634Cu);
    ctx->pc = 0x326348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326344u;
    // 0x326348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x326344u, 0x32634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32634Cu;
label_32634c:
    // 0x32634c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32634Cu;
    {
        const bool branch_taken_0x32634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32634Cu;
        // 0x326350: 0xc6402c68  lwc1        $f0, 0x2C68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32634c) {
            ctx->pc = 0x326360u;
            goto label_326360;
        }
    }
    ctx->pc = 0x326354u;
    // 0x326354: 0xc0c4900  jal         func_312400
    ctx->pc = 0x326354u;
    SET_GPR_U32(ctx, 31, 0x32635Cu);
    ctx->pc = 0x326358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326354u;
    // 0x326358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x326354u, 0x32635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32635Cu;
label_32635c:
    // 0x32635c: 0xc6402c68  lwc1        $f0, 0x2C68($s2)
    ctx->pc = 0x32635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_326360:
    // 0x326360: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x326360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326364: 0x0  nop
    ctx->pc = 0x326364u;
    // NOP
    // 0x326368: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x326368u;
    {
        const bool branch_taken_0x326368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x326368) {
            ctx->pc = 0x32636Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326368u;
            // 0x32636c: 0xae80be44  sw          $zero, -0x41BC($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294950468), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326390u;
            goto label_326390;
        }
    }
    ctx->pc = 0x326370u;
    // 0x326370: 0xc621be58  lwc1        $f1, -0x41A8($s1)
    ctx->pc = 0x326370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294950488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x326374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326378: 0x0  nop
    ctx->pc = 0x326378u;
    // NOP
    // 0x32637c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32637cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326380: 0x0  nop
    ctx->pc = 0x326380u;
    // NOP
    // 0x326384: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x326384u;
    {
        const bool branch_taken_0x326384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x326388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326384u;
        // 0x326388: 0xc64c2c68  lwc1        $f12, 0x2C68($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326384) {
            ctx->pc = 0x326398u;
            goto label_326398;
        }
    }
    ctx->pc = 0x32638Cu;
    // 0x32638c: 0xae80be44  sw          $zero, -0x41BC($s4)
    ctx->pc = 0x32638cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950468), GPR_U32(ctx, 0));
label_326390:
    // 0x326390: 0xe6542c68  swc1        $f20, 0x2C68($s2)
    ctx->pc = 0x326390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11368), bits); }
    // 0x326394: 0xc64c2c68  lwc1        $f12, 0x2C68($s2)
    ctx->pc = 0x326394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_326398:
    // 0x326398: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x326398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x32639c: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x32639cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x3263a0: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x3263a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x3263a4: 0x24a56da0  addiu       $a1, $a1, 0x6DA0
    ctx->pc = 0x3263a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28064));
    // 0x3263a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3263a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263ac: 0x24c66db0  addiu       $a2, $a2, 0x6DB0
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28080));
    // 0x3263b0: 0xc0b1a26  jal         func_2C6898
    ctx->pc = 0x3263B0u;
    SET_GPR_U32(ctx, 31, 0x3263B8u);
    ctx->pc = 0x3263B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263B0u;
    // 0x3263b4: 0x24e76dc0  addiu       $a3, $a3, 0x6DC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6898u, 0x3263B0u, 0x3263B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263B8u;
label_3263b8:
    // 0x3263b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3263b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263bc: 0xc0b1448  jal         func_2C5120
    ctx->pc = 0x3263BCu;
    SET_GPR_U32(ctx, 31, 0x3263C4u);
    ctx->pc = 0x3263C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263BCu;
    // 0x3263c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5120u, 0x3263BCu, 0x3263C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263C4u;
label_3263c4:
    // 0x3263c4: 0x8ea2be28  lw          $v0, -0x41D8($s5)
    ctx->pc = 0x3263c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950440)));
    // 0x3263c8: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3263cc: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x3263ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3263d0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x3263D0u;
    SET_GPR_U32(ctx, 31, 0x3263D8u);
    ctx->pc = 0x3263D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263D0u;
    // 0x3263d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x3263D0u, 0x3263D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263D8u;
label_3263d8:
    // 0x3263d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3263D8u;
    {
        const bool branch_taken_0x3263d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263D8u;
        // 0x3263dc: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263d8) {
            ctx->pc = 0x3263ECu;
            goto label_3263ec;
        }
    }
    ctx->pc = 0x3263E0u;
    // 0x3263e0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3263E0u;
    SET_GPR_U32(ctx, 31, 0x3263E8u);
    ctx->pc = 0x3263E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263E0u;
    // 0x3263e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3263E0u, 0x3263E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263E8u;
label_3263e8:
    // 0x3263e8: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x3263e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_3263ec:
    // 0x3263ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3263ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3263f0: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x3263f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3263f4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3263f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x3263f8: 0x8e82be38  lw          $v0, -0x41C8($s4)
    ctx->pc = 0x3263f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE38u));
    // 0x3263fc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3263FCu;
    {
        const bool branch_taken_0x3263fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263FCu;
        // 0x326400: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263fc) {
            ctx->pc = 0x326564u;
            goto label_326564;
        }
    }
    ctx->pc = 0x326404u;
    // 0x326404: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x326404u;
    SET_GPR_U32(ctx, 31, 0x32640Cu);
    ctx->pc = 0x326408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326404u;
    // 0x326408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x326404u, 0x32640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32640Cu;
label_32640c:
    // 0x32640c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x32640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x326410: 0x24556d80  addiu       $s5, $v0, 0x6D80
    ctx->pc = 0x326410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x326414: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x326414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6D80u));
    // 0x326418: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x326418u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32641c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x32641cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326420: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x326420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x326424: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x326424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326428: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x326428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32642c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x32642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x326430: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x326430u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x326434: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x326434u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x326438: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x326438u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x32643c: 0x46010044  c1          0x10044
    ctx->pc = 0x32643cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x326440: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x326440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x326444: 0x0  nop
    ctx->pc = 0x326444u;
    // NOP
    // 0x326448: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x326448u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32644c: 0x0  nop
    ctx->pc = 0x32644cu;
    // NOP
    // 0x326450: 0x45030043  bc1tl       . + 4 + (0x43 << 2)
    ctx->pc = 0x326450u;
    {
        const bool branch_taken_0x326450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x326450) {
            ctx->pc = 0x326454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326450u;
            // 0x326454: 0xae80be38  sw          $zero, -0x41C8($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294950456), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326560u;
            goto label_326560;
        }
    }
    ctx->pc = 0x326458u;
    // 0x326458: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x326458u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x32645c: 0xc640be40  lwc1        $f0, -0x41C0($s2)
    ctx->pc = 0x32645cu;
    { uint32_t bits = FAST_READ32(0x3FBE40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326460: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x326460u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x326464: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x326464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x326468: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x326468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32646c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x32646cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326470: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x326470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326474: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x326474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326478: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x326478u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x32647c: 0x4a0003bf  vwaitq
    ctx->pc = 0x32647cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x326480: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x326480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326484: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x326484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x326488: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x326488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32648c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x32648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326490: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x326490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326494: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x326494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326498: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x326498u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x32649c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x32649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3264a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3264a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3264a4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3264a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3264a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3264a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3264ac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3264acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3264b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3264b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3264b4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3264b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3264b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3264b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3264bc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3264bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3264c0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3264c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3264c4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3264c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3264c8: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x3264c8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3264cc: 0x8ed00100  lw          $s0, 0x100($s6)
    ctx->pc = 0x3264ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    // 0x3264d0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x3264D0u;
    SET_GPR_U32(ctx, 31, 0x3264D8u);
    ctx->pc = 0x3264D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264D0u;
    // 0x3264d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x3264D0u, 0x3264D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264D8u;
label_3264d8:
    // 0x3264d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3264D8u;
    {
        const bool branch_taken_0x3264d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264D8u;
        // 0x3264dc: 0xc640be40  lwc1        $f0, -0x41C0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294950464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264d8) {
            ctx->pc = 0x3264ECu;
            goto label_3264ec;
        }
    }
    ctx->pc = 0x3264E0u;
    // 0x3264e0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3264E0u;
    SET_GPR_U32(ctx, 31, 0x3264E8u);
    ctx->pc = 0x3264E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264E0u;
    // 0x3264e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3264E0u, 0x3264E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264E8u;
label_3264e8:
    // 0x3264e8: 0xc640be40  lwc1        $f0, -0x41C0($s2)
    ctx->pc = 0x3264e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294950464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3264ec:
    // 0x3264ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3264ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3264f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3264f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264f8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3264f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3264fc: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x3264FCu;
    SET_GPR_U32(ctx, 31, 0x326504u);
    ctx->pc = 0x326500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264FCu;
    // 0x326500: 0xe640be40  swc1        $f0, -0x41C0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294950464), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x3264FCu, 0x326504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326504u;
label_326504:
    // 0x326504: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x326504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x326508: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x326508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32650c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x32650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x326510: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x326510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x326514: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x326514u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x326518: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x326518u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x32651c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x32651cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x326520: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x326520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x326524: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x326524u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x326528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x326528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32652c: 0x0  nop
    ctx->pc = 0x32652cu;
    // NOP
    // 0x326530: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x326530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326534: 0x0  nop
    ctx->pc = 0x326534u;
    // NOP
    // 0x326538: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x326538u;
    {
        const bool branch_taken_0x326538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x326538) {
            ctx->pc = 0x32653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326538u;
            // 0x32653c: 0xae80be38  sw          $zero, -0x41C8($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294950456), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326560u;
            goto label_326560;
        }
    }
    ctx->pc = 0x326540u;
    // 0x326540: 0xc640be40  lwc1        $f0, -0x41C0($s2)
    ctx->pc = 0x326540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294950464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326544: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x326544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326548: 0x0  nop
    ctx->pc = 0x326548u;
    // NOP
    // 0x32654c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x32654Cu;
    {
        const bool branch_taken_0x32654c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x326550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32654Cu;
        // 0x326550: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32654c) {
            ctx->pc = 0x326564u;
            goto label_326564;
        }
    }
    ctx->pc = 0x326554u;
    // 0x326554: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x326554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x326558: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x326558u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32655c: 0xae80be38  sw          $zero, -0x41C8($s4)
    ctx->pc = 0x32655cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294950456), GPR_U32(ctx, 0));
label_326560:
    // 0x326560: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x326560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_326564:
    // 0x326564: 0x8ca2be5c  lw          $v0, -0x41A4($a1)
    ctx->pc = 0x326564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950492)));
    // 0x326568: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x326568u;
    {
        const bool branch_taken_0x326568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326568u;
        // 0x32656c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326568) {
            ctx->pc = 0x3265F8u;
            goto label_3265f8;
        }
    }
    ctx->pc = 0x326570u;
    // 0x326570: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x326570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x326574: 0xc445be60  lwc1        $f5, -0x41A0($v0)
    ctx->pc = 0x326574u;
    { uint32_t bits = FAST_READ32(0x3FBE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x326578: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x326578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32657c: 0xc484be64  lwc1        $f4, -0x419C($a0)
    ctx->pc = 0x32657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294950500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x326580: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x326580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x326584: 0xc461be6c  lwc1        $f1, -0x4194($v1)
    ctx->pc = 0x326584u;
    { uint32_t bits = FAST_READ32(0x3FBE6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326588: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x326588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x32658c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x32658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x326590: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x326590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x326594: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x326594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x326598: 0x46150881  sub.s       $f2, $f1, $f21
    ctx->pc = 0x326598u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x32659c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x32659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x3265a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3265a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3265a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3265a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3265a8: 0x460728c0  add.s       $f3, $f5, $f7
    ctx->pc = 0x3265a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x3265ac: 0x0  nop
    ctx->pc = 0x3265acu;
    // NOP
    // 0x3265b0: 0x0  nop
    ctx->pc = 0x3265b0u;
    // NOP
    // 0x3265b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3265b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3265b8: 0xe462be6c  swc1        $f2, -0x4194($v1)
    ctx->pc = 0x3265b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE6Cu, _value); } while (0); }
    // 0x3265bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3265bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3265c0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3265c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3265c4: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x3265c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3265c8: 0x46062028  max.s       $f0, $f4, $f6
    ctx->pc = 0x3265c8u;
    ctx->f[0] = std::max(ctx->f[4], ctx->f[6]);
    // 0x3265cc: 0xe484be64  swc1        $f4, -0x419C($a0)
    ctx->pc = 0x3265ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294950500), bits); }
    // 0x3265d0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3265D0u;
    {
        const bool branch_taken_0x3265d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3265D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265D0u;
        // 0x3265d4: 0xe4402c48  swc1        $f0, 0x2C48($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265d0) {
            ctx->pc = 0x3265F8u;
            goto label_3265f8;
        }
    }
    ctx->pc = 0x3265D8u;
    // 0x3265d8: 0x46072801  sub.s       $f0, $f5, $f7
    ctx->pc = 0x3265d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x3265dc: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x3265dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3265e0: 0x0  nop
    ctx->pc = 0x3265e0u;
    // NOP
    // 0x3265e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3265E4u;
    {
        const bool branch_taken_0x3265e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3265e4) {
            ctx->pc = 0x3265F8u;
            goto label_3265f8;
        }
    }
    ctx->pc = 0x3265ECu;
    // 0x3265ec: 0x46062828  max.s       $f0, $f5, $f6
    ctx->pc = 0x3265ecu;
    ctx->f[0] = std::max(ctx->f[5], ctx->f[6]);
    // 0x3265f0: 0xaca0be5c  sw          $zero, -0x41A4($a1)
    ctx->pc = 0x3265f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950492), GPR_U32(ctx, 0));
    // 0x3265f4: 0xe4402c48  swc1        $f0, 0x2C48($v0)
    ctx->pc = 0x3265f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11336), bits); }
label_3265f8:
    // 0x3265f8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x3265F8u;
    SET_GPR_U32(ctx, 31, 0x326600u);
    ctx->pc = 0x3265FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265F8u;
    // 0x3265fc: 0x8ec40100  lw          $a0, 0x100($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x3265F8u, 0x326600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326600u;
label_326600:
    // 0x326600: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x326600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326604: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x326604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x326608: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x326608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32660c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x32660cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x326610: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x326610u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x326614: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x326614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326618: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x326618u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32661c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x32661cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326620: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x326620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x326624: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x326624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x326628: 0x3e00008  jr          $ra
    ctx->pc = 0x326628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326628u;
        // 0x32662c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326630u;
    // 0x326630: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x326630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x326634: 0x0  nop
    ctx->pc = 0x326634u;
    // NOP
    ctx->pc = 0x326638u;
}
