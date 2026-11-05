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

// Function: sub_002B6390
// Address: 0x2b6390 - 0x2b64a8
void sub_002B6390_0x2b6390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6390_0x2b6390");
#endif

    switch (ctx->pc) {
        case 0x2b63a8u: goto label_2b63a8;
        case 0x2b6418u: goto label_2b6418;
        case 0x2b6420u: goto label_2b6420;
        case 0x2b6430u: goto label_2b6430;
        case 0x2b6438u: goto label_2b6438;
        case 0x2b6440u: goto label_2b6440;
        case 0x2b644cu: goto label_2b644c;
        case 0x2b645cu: goto label_2b645c;
        case 0x2b6468u: goto label_2b6468;
        case 0x2b6478u: goto label_2b6478;
        case 0x2b6484u: goto label_2b6484;
        default: break;
    }

    ctx->pc = 0x2b6390u;

    // 0x2b6390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b639c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b639cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b63a0: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B63A0u;
    SET_GPR_U32(ctx, 31, 0x2B63A8u);
    ctx->pc = 0x2B63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63A0u;
    // 0x2b63a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B63A0u, 0x2B63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63A8u;
label_2b63a8:
    // 0x2b63a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B63A8u;
    {
        const bool branch_taken_0x2b63a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63A8u;
        // 0x2b63ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63a8) {
            ctx->pc = 0x2B63C4u;
            goto label_2b63c4;
        }
    }
    ctx->pc = 0x2B63B0u;
    // 0x2b63b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b63b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b63b4: 0x0  nop
    ctx->pc = 0x2b63b4u;
    // NOP
    // 0x2b63b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b63b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b63bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B63BCu;
    {
        const bool branch_taken_0x2b63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b63bc) {
            ctx->pc = 0x2B63DCu;
            goto label_2b63dc;
        }
    }
    ctx->pc = 0x2B63C4u;
label_2b63c4:
    // 0x2b63c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b63c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b63c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b63cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b63ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b63d0: 0x0  nop
    ctx->pc = 0x2b63d0u;
    // NOP
    // 0x2b63d4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b63d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b63d8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b63d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b63dc:
    // 0x2b63dc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b63dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b63e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b63e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b63e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b63e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63e8: 0xc6215900  lwc1        $f1, 0x5900($s1)
    ctx->pc = 0x2b63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b63ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b63ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b63f0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b63f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b63f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b63f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b63f8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b63f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b63fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b63fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b6400: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6404: 0x0  nop
    ctx->pc = 0x2b6404u;
    // NOP
    // 0x2b6408: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2B6408u;
    {
        const bool branch_taken_0x2b6408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6408u;
        // 0x2b640c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6408) {
            ctx->pc = 0x2B6490u;
            goto label_2b6490;
        }
    }
    ctx->pc = 0x2B6410u;
    // 0x2b6410: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B6410u;
    SET_GPR_U32(ctx, 31, 0x2B6418u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B6410u, 0x2B6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6418u;
label_2b6418:
    // 0x2b6418: 0xc0a6df2  jal         func_29B7C8
    ctx->pc = 0x2B6418u;
    SET_GPR_U32(ctx, 31, 0x2B6420u);
    ctx->pc = 0x2B641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6418u;
    // 0x2b641c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7C8u, 0x2B6418u, 0x2B6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6420u;
label_2b6420:
    // 0x2b6420: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B6420u;
    {
        const bool branch_taken_0x2b6420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6420u;
        // 0x2b6424: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6420) {
            ctx->pc = 0x2B6484u;
            goto label_2b6484;
        }
    }
    ctx->pc = 0x2B6428u;
    // 0x2b6428: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B6428u;
    SET_GPR_U32(ctx, 31, 0x2B6430u);
    ctx->pc = 0x2B642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6428u;
    // 0x2b642c: 0xa040a928  sb          $zero, -0x56D8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B6428u, 0x2B6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6430u;
label_2b6430:
    // 0x2b6430: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B6430u;
    SET_GPR_U32(ctx, 31, 0x2B6438u);
    ctx->pc = 0x2B6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6430u;
    // 0x2b6434: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B6430u, 0x2B6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6438u;
label_2b6438:
    // 0x2b6438: 0xc0a6dee  jal         func_29B7B8
    ctx->pc = 0x2B6438u;
    SET_GPR_U32(ctx, 31, 0x2B6440u);
    ctx->pc = 0x2B643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6438u;
    // 0x2b643c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7B8u, 0x2B6438u, 0x2B6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6440u;
label_2b6440:
    // 0x2b6440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6444: 0xc0a71c2  jal         func_29C708
    ctx->pc = 0x2B6444u;
    SET_GPR_U32(ctx, 31, 0x2B644Cu);
    ctx->pc = 0x2B6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6444u;
    // 0x2b6448: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C708u, 0x2B6444u, 0x2B644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B644Cu;
label_2b644c:
    // 0x2b644c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B644Cu;
    {
        const bool branch_taken_0x2b644c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B644Cu;
        // 0x2b6450: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b644c) {
            ctx->pc = 0x2B6488u;
            goto label_2b6488;
        }
    }
    ctx->pc = 0x2B6454u;
    // 0x2b6454: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B6454u;
    SET_GPR_U32(ctx, 31, 0x2B645Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B6454u, 0x2B645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B645Cu;
label_2b645c:
    // 0x2b645c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6460: 0xc0a6dee  jal         func_29B7B8
    ctx->pc = 0x2B6460u;
    SET_GPR_U32(ctx, 31, 0x2B6468u);
    ctx->pc = 0x2B6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6460u;
    // 0x2b6464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7B8u, 0x2B6460u, 0x2B6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6468u;
label_2b6468:
    // 0x2b6468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b646c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6470: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2B6470u;
    SET_GPR_U32(ctx, 31, 0x2B6478u);
    ctx->pc = 0x2B6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6470u;
    // 0x2b6474: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2B6470u, 0x2B6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6478u;
label_2b6478:
    // 0x2b6478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b647c: 0xc0a754c  jal         func_29D530
    ctx->pc = 0x2B647Cu;
    SET_GPR_U32(ctx, 31, 0x2B6484u);
    ctx->pc = 0x2B6480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B647Cu;
    // 0x2b6480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D530u, 0x2B647Cu, 0x2B6484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6484u;
label_2b6484:
    // 0x2b6484: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2b6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2b6488:
    // 0x2b6488: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b648c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b648cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b6490:
    // 0x2b6490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b649c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B649Cu;
        // 0x2b64a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B64A4u;
    // 0x2b64a4: 0x0  nop
    ctx->pc = 0x2b64a4u;
    // NOP
    ctx->pc = 0x2b64a8u;
}
