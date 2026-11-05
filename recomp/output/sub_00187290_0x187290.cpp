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

// Function: sub_00187290
// Address: 0x187290 - 0x187408
void sub_00187290_0x187290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187290_0x187290");
#endif

    switch (ctx->pc) {
        case 0x187290u: goto label_187290;
        case 0x187294u: goto label_187294;
        case 0x187298u: goto label_187298;
        case 0x18729cu: goto label_18729c;
        case 0x1872a0u: goto label_1872a0;
        case 0x1872a4u: goto label_1872a4;
        case 0x1872a8u: goto label_1872a8;
        case 0x1872acu: goto label_1872ac;
        case 0x1872b0u: goto label_1872b0;
        case 0x1872b4u: goto label_1872b4;
        case 0x1872b8u: goto label_1872b8;
        case 0x1872bcu: goto label_1872bc;
        case 0x1872c0u: goto label_1872c0;
        case 0x1872c4u: goto label_1872c4;
        case 0x1872c8u: goto label_1872c8;
        case 0x1872ccu: goto label_1872cc;
        case 0x1872d0u: goto label_1872d0;
        case 0x1872d4u: goto label_1872d4;
        case 0x1872d8u: goto label_1872d8;
        case 0x1872dcu: goto label_1872dc;
        case 0x1872e0u: goto label_1872e0;
        case 0x1872e4u: goto label_1872e4;
        case 0x1872e8u: goto label_1872e8;
        case 0x1872ecu: goto label_1872ec;
        case 0x1872f0u: goto label_1872f0;
        case 0x1872f4u: goto label_1872f4;
        case 0x1872f8u: goto label_1872f8;
        case 0x1872fcu: goto label_1872fc;
        case 0x187300u: goto label_187300;
        case 0x187304u: goto label_187304;
        case 0x187308u: goto label_187308;
        case 0x18730cu: goto label_18730c;
        case 0x187310u: goto label_187310;
        case 0x187314u: goto label_187314;
        case 0x187318u: goto label_187318;
        case 0x18731cu: goto label_18731c;
        case 0x187320u: goto label_187320;
        case 0x187324u: goto label_187324;
        case 0x187328u: goto label_187328;
        case 0x18732cu: goto label_18732c;
        case 0x187330u: goto label_187330;
        case 0x187334u: goto label_187334;
        case 0x187338u: goto label_187338;
        case 0x18733cu: goto label_18733c;
        case 0x187340u: goto label_187340;
        case 0x187344u: goto label_187344;
        case 0x187348u: goto label_187348;
        case 0x18734cu: goto label_18734c;
        case 0x187350u: goto label_187350;
        case 0x187354u: goto label_187354;
        case 0x187358u: goto label_187358;
        case 0x18735cu: goto label_18735c;
        case 0x187360u: goto label_187360;
        case 0x187364u: goto label_187364;
        case 0x187368u: goto label_187368;
        case 0x18736cu: goto label_18736c;
        case 0x187370u: goto label_187370;
        case 0x187374u: goto label_187374;
        case 0x187378u: goto label_187378;
        case 0x18737cu: goto label_18737c;
        case 0x187380u: goto label_187380;
        case 0x187384u: goto label_187384;
        case 0x187388u: goto label_187388;
        case 0x18738cu: goto label_18738c;
        case 0x187390u: goto label_187390;
        case 0x187394u: goto label_187394;
        case 0x187398u: goto label_187398;
        case 0x18739cu: goto label_18739c;
        case 0x1873a0u: goto label_1873a0;
        case 0x1873a4u: goto label_1873a4;
        case 0x1873a8u: goto label_1873a8;
        case 0x1873acu: goto label_1873ac;
        case 0x1873b0u: goto label_1873b0;
        case 0x1873b4u: goto label_1873b4;
        case 0x1873b8u: goto label_1873b8;
        case 0x1873bcu: goto label_1873bc;
        case 0x1873c0u: goto label_1873c0;
        case 0x1873c4u: goto label_1873c4;
        case 0x1873c8u: goto label_1873c8;
        case 0x1873ccu: goto label_1873cc;
        case 0x1873d0u: goto label_1873d0;
        case 0x1873d4u: goto label_1873d4;
        case 0x1873d8u: goto label_1873d8;
        case 0x1873dcu: goto label_1873dc;
        case 0x1873e0u: goto label_1873e0;
        case 0x1873e4u: goto label_1873e4;
        case 0x1873e8u: goto label_1873e8;
        case 0x1873ecu: goto label_1873ec;
        case 0x1873f0u: goto label_1873f0;
        case 0x1873f4u: goto label_1873f4;
        case 0x1873f8u: goto label_1873f8;
        case 0x1873fcu: goto label_1873fc;
        case 0x187400u: goto label_187400;
        case 0x187404u: goto label_187404;
        default: break;
    }

    ctx->pc = 0x187290u;

label_187290:
    // 0x187290: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x187290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_187294:
    // 0x187294: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x187294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_187298:
    // 0x187298: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x187298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_18729c:
    // 0x18729c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18729cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1872a0:
    // 0x1872a0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1872a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1872a4:
    // 0x1872a4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1872a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1872a8:
    // 0x1872a8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1872a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1872ac:
    // 0x1872ac: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1872acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1872b0:
    // 0x1872b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1872b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1872b4:
    // 0x1872b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1872b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1872b8:
    // 0x1872b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1872b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1872bc:
    // 0x1872bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1872bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1872c0:
    // 0x1872c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1872c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1872c4:
    // 0x1872c4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1872c8:
    // 0x1872c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1872c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1872cc:
    // 0x1872cc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1872ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1872d0:
    // 0x1872d0: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x1872d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1872d4:
    // 0x1872d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1872d8:
    if (ctx->pc == 0x1872D8u) {
        ctx->pc = 0x1872D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D4u;
        // 0x1872d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872DCu;
        goto label_1872dc;
    }
    ctx->pc = 0x1872D4u;
    {
        const bool branch_taken_0x1872d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D4u;
        // 0x1872d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872d4) {
            ctx->pc = 0x1872ECu;
            goto label_1872ec;
        }
    }
    ctx->pc = 0x1872DCu;
label_1872dc:
    // 0x1872dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1872e0:
    // 0x1872e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1872e4:
    // 0x1872e4: 0x40f809  jalr        $v0
label_1872e8:
    if (ctx->pc == 0x1872E8u) {
        ctx->pc = 0x1872ECu;
        goto label_1872ec;
    }
    ctx->pc = 0x1872E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1872ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1872E4u, 0x1872ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1872ECu;
label_1872ec:
    // 0x1872ec: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x1872ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_1872f0:
    // 0x1872f0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_1872f4:
    if (ctx->pc == 0x1872F4u) {
        ctx->pc = 0x1872F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872F0u;
        // 0x1872f4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872F8u;
        goto label_1872f8;
    }
    ctx->pc = 0x1872F0u;
    {
        const bool branch_taken_0x1872f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1872F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872F0u;
        // 0x1872f4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872f0) {
            ctx->pc = 0x1873B0u;
            goto label_1873b0;
        }
    }
    ctx->pc = 0x1872F8u;
label_1872f8:
    // 0x1872f8: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1872f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1872fc:
    // 0x1872fc: 0xc0f5240  jal         func_3D4900
label_187300:
    if (ctx->pc == 0x187300u) {
        ctx->pc = 0x187300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872FCu;
        // 0x187300: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187304u;
        goto label_187304;
    }
    ctx->pc = 0x1872FCu;
    SET_GPR_U32(ctx, 31, 0x187304u);
    ctx->pc = 0x187300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872FCu;
    // 0x187300: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1872FCu, 0x187304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187304u;
label_187304:
    // 0x187304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187308:
    // 0x187308: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_18730c:
    // 0x18730c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187310:
    // 0x187310: 0xc061a32  jal         func_1868C8
label_187314:
    if (ctx->pc == 0x187314u) {
        ctx->pc = 0x187314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187310u;
        // 0x187314: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187318u;
        goto label_187318;
    }
    ctx->pc = 0x187310u;
    SET_GPR_U32(ctx, 31, 0x187318u);
    ctx->pc = 0x187314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187310u;
    // 0x187314: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187310u, 0x187318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187318u;
label_187318:
    // 0x187318: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18731c:
    // 0x18731c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_187320:
    // 0x187320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187324:
    // 0x187324: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x187324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_187328:
    // 0x187328: 0x26140050  addiu       $s4, $s0, 0x50
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_18732c:
    // 0x18732c: 0xc0f6a96  jal         func_3DAA58
label_187330:
    if (ctx->pc == 0x187330u) {
        ctx->pc = 0x187330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18732Cu;
        // 0x187330: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187334u;
        goto label_187334;
    }
    ctx->pc = 0x18732Cu;
    SET_GPR_U32(ctx, 31, 0x187334u);
    ctx->pc = 0x187330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18732Cu;
    // 0x187330: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18732Cu, 0x187334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187334u;
label_187334:
    // 0x187334: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
label_187338:
    // 0x187338: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x187338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
label_18733c:
    // 0x18733c: 0x26520f90  addiu       $s2, $s2, 0xF90
    ctx->pc = 0x18733cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3984));
label_187340:
    // 0x187340: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x187340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_187344:
    // 0x187344: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x187344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
label_187348:
    // 0x187348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18734c:
    // 0x18734c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18734cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_187350:
    // 0x187350: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x187350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_187354:
    // 0x187354: 0xc0f6a96  jal         func_3DAA58
label_187358:
    if (ctx->pc == 0x187358u) {
        ctx->pc = 0x187358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187354u;
        // 0x187358: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18735Cu;
        goto label_18735c;
    }
    ctx->pc = 0x187354u;
    SET_GPR_U32(ctx, 31, 0x18735Cu);
    ctx->pc = 0x187358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187354u;
    // 0x187358: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187354u, 0x18735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18735Cu;
label_18735c:
    // 0x18735c: 0xae720018  sw          $s2, 0x18($s3)
    ctx->pc = 0x18735cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
label_187360:
    // 0x187360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x187360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_187364:
    // 0x187364: 0xae750010  sw          $s5, 0x10($s3)
    ctx->pc = 0x187364u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 21));
label_187368:
    // 0x187368: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x187368u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_18736c:
    // 0x18736c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x18736cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_187370:
    // 0x187370: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x187370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_187374:
    // 0x187374: 0xc0f6a96  jal         func_3DAA58
label_187378:
    if (ctx->pc == 0x187378u) {
        ctx->pc = 0x187378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187374u;
        // 0x187378: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18737Cu;
        goto label_18737c;
    }
    ctx->pc = 0x187374u;
    SET_GPR_U32(ctx, 31, 0x18737Cu);
    ctx->pc = 0x187378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187374u;
    // 0x187378: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187374u, 0x18737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18737Cu;
label_18737c:
    // 0x18737c: 0xae920018  sw          $s2, 0x18($s4)
    ctx->pc = 0x18737cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 18));
label_187380:
    // 0x187380: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x187380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_187384:
    // 0x187384: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x187384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
label_187388:
    // 0x187388: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x187388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_18738c:
    // 0x18738c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x18738cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_187390:
    // 0x187390: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x187390u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_187394:
    // 0x187394: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x187394u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_187398:
    // 0x187398: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_18739c:
    // 0x18739c: 0xaed00020  sw          $s0, 0x20($s6)
    ctx->pc = 0x18739cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 16));
label_1873a0:
    // 0x1873a0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1873a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_1873a4:
    // 0x1873a4: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1873a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_1873a8:
    // 0x1873a8: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x1873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_1873ac:
    // 0x1873ac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1873acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1873b0:
    // 0x1873b0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1873b4:
    // 0x1873b4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1873b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1873b8:
    // 0x1873b8: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x1873b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_1873bc:
    // 0x1873bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1873bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1873c0:
    // 0x1873c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1873c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1873c4:
    // 0x1873c4: 0x8c680024  lw          $t0, 0x24($v1)
    ctx->pc = 0x1873c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1873c8:
    // 0x1873c8: 0x100f809  jalr        $t0
label_1873cc:
    if (ctx->pc == 0x1873CCu) {
        ctx->pc = 0x1873CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873C8u;
        // 0x1873cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1873D0u;
        goto label_1873d0;
    }
    ctx->pc = 0x1873C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1873D0u);
        ctx->pc = 0x1873CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873C8u;
        // 0x1873cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873C8u, 0x1873D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1873D0u;
label_1873d0:
    // 0x1873d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1873d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1873d4:
    // 0x1873d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1873d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1873d8:
    // 0x1873d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1873dc:
    // 0x1873dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1873dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1873e0:
    // 0x1873e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1873e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1873e4:
    // 0x1873e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1873e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1873e8:
    // 0x1873e8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1873e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1873ec:
    // 0x1873ec: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1873ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1873f0:
    // 0x1873f0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1873f4:
    // 0x1873f4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1873f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1873f8:
    // 0x1873f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1873f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1873fc:
    // 0x1873fc: 0x3e00008  jr          $ra
label_187400:
    if (ctx->pc == 0x187400u) {
        ctx->pc = 0x187400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873FCu;
        // 0x187400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187404u;
        goto label_187404;
    }
    ctx->pc = 0x1873FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873FCu;
        // 0x187400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187404u;
label_187404:
    // 0x187404: 0x0  nop
    ctx->pc = 0x187404u;
    // NOP
    ctx->pc = 0x187408u;
}
