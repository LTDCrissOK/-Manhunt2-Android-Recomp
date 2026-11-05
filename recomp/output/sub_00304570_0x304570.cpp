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

// Function: sub_00304570
// Address: 0x304570 - 0x3046f8
void sub_00304570_0x304570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304570_0x304570");
#endif

    switch (ctx->pc) {
        case 0x3045c0u: goto label_3045c0;
        case 0x304638u: goto label_304638;
        case 0x304668u: goto label_304668;
        case 0x304690u: goto label_304690;
        case 0x3046b0u: goto label_3046b0;
        case 0x3046b8u: goto label_3046b8;
        case 0x3046c0u: goto label_3046c0;
        case 0x3046c8u: goto label_3046c8;
        case 0x3046d0u: goto label_3046d0;
        default: break;
    }

    ctx->pc = 0x304570u;

    // 0x304570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304574: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x304574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x304578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30457c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304580: 0x24505870  addiu       $s0, $v0, 0x5870
    ctx->pc = 0x304580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x304584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x304584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x304588: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x304588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30458c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x304590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x304590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304594: 0xc6000458  lwc1        $f0, 0x458($s0)
    ctx->pc = 0x304594u;
    { uint32_t bits = FAST_READ32(0x595CC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30459c: 0x0  nop
    ctx->pc = 0x30459cu;
    // NOP
    // 0x3045a0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x3045A0u;
    {
        const bool branch_taken_0x3045a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3045A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045A0u;
        // 0x3045a4: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045a0) {
            ctx->pc = 0x304638u;
            goto label_304638;
        }
    }
    ctx->pc = 0x3045A8u;
    // 0x3045a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3045ac: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x3045acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x3045b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3045B0u;
    {
        const bool branch_taken_0x3045b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045B0u;
        // 0x3045b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045b0) {
            ctx->pc = 0x3045C8u;
            goto label_3045c8;
        }
    }
    ctx->pc = 0x3045B8u;
    // 0x3045b8: 0xc0bb79e  jal         func_2EDE78
    ctx->pc = 0x3045B8u;
    SET_GPR_U32(ctx, 31, 0x3045C0u);
    ctx->pc = 0x3045BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3045B8u;
    // 0x3045bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE78u, 0x3045B8u, 0x3045C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045C0u;
label_3045c0:
    // 0x3045c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3045c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3045c4: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x3045c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_3045c8:
    // 0x3045c8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3045c8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3045cc: 0x0  nop
    ctx->pc = 0x3045ccu;
    // NOP
    // 0x3045d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3045d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3045d4: 0xc6000458  lwc1        $f0, 0x458($s0)
    ctx->pc = 0x3045d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3045d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3045d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3045dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3045DCu;
    {
        const bool branch_taken_0x3045dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045DCu;
        // 0x3045e0: 0xe6000458  swc1        $f0, 0x458($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045dc) {
            ctx->pc = 0x304600u;
            goto label_304600;
        }
    }
    ctx->pc = 0x3045E4u;
    // 0x3045e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3045e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3045e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3045e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3045ec: 0x0  nop
    ctx->pc = 0x3045ecu;
    // NOP
    // 0x3045f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3045f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3045f4: 0x0  nop
    ctx->pc = 0x3045f4u;
    // NOP
    // 0x3045f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3045F8u;
    {
        const bool branch_taken_0x3045f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3045f8) {
            ctx->pc = 0x3045FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3045F8u;
            // 0x3045fc: 0xe6010458  swc1        $f1, 0x458($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x304600u;
            goto label_304600;
        }
    }
    ctx->pc = 0x304600u;
label_304600:
    // 0x304600: 0xc6010458  lwc1        $f1, 0x458($s0)
    ctx->pc = 0x304600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304608: 0x0  nop
    ctx->pc = 0x304608u;
    // NOP
    // 0x30460c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x30460cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304610: 0x0  nop
    ctx->pc = 0x304610u;
    // NOP
    // 0x304614: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x304614u;
    {
        const bool branch_taken_0x304614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x304618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304614u;
        // 0x304618: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304614) {
            ctx->pc = 0x304638u;
            goto label_304638;
        }
    }
    ctx->pc = 0x30461Cu;
    // 0x30461c: 0x8e42bd70  lw          $v0, -0x4290($s2)
    ctx->pc = 0x30461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950256)));
    // 0x304620: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x304620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x304624: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x304624u;
    {
        const bool branch_taken_0x304624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304624) {
            ctx->pc = 0x304628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304624u;
            // 0x304628: 0x92020620  lbu         $v0, 0x620($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304648u;
            goto label_304648;
        }
    }
    ctx->pc = 0x30462Cu;
    // 0x30462c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304630: 0xc0b8f3e  jal         func_2E3CF8
    ctx->pc = 0x304630u;
    SET_GPR_U32(ctx, 31, 0x304638u);
    ctx->pc = 0x304634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304630u;
    // 0x304634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CF8u, 0x304630u, 0x304638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304638u;
label_304638:
    // 0x304638: 0x8e42bd70  lw          $v0, -0x4290($s2)
    ctx->pc = 0x304638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950256)));
    // 0x30463c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x304640: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x304640u;
    {
        const bool branch_taken_0x304640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304640u;
        // 0x304644: 0x92020620  lbu         $v0, 0x620($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304640) {
            ctx->pc = 0x30466Cu;
            goto label_30466c;
        }
    }
    ctx->pc = 0x304648u;
label_304648:
    // 0x304648: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x304648u;
    {
        const bool branch_taken_0x304648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304648) {
            ctx->pc = 0x30464Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304648u;
            // 0x30464c: 0x92020620  lbu         $v0, 0x620($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30466Cu;
            goto label_30466c;
        }
    }
    ctx->pc = 0x304650u;
    // 0x304650: 0x92020454  lbu         $v0, 0x454($s0)
    ctx->pc = 0x304650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x304654: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x304654u;
    {
        const bool branch_taken_0x304654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304654) {
            ctx->pc = 0x304658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304654u;
            // 0x304658: 0x92020620  lbu         $v0, 0x620($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30466Cu;
            goto label_30466c;
        }
    }
    ctx->pc = 0x30465Cu;
    // 0x30465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304660: 0xc0b8f3e  jal         func_2E3CF8
    ctx->pc = 0x304660u;
    SET_GPR_U32(ctx, 31, 0x304668u);
    ctx->pc = 0x304664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304660u;
    // 0x304664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CF8u, 0x304660u, 0x304668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304668u;
label_304668:
    // 0x304668: 0x92020620  lbu         $v0, 0x620($s0)
    ctx->pc = 0x304668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1568)));
label_30466c:
    // 0x30466c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30466Cu;
    {
        const bool branch_taken_0x30466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30466Cu;
        // 0x304670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30466c) {
            ctx->pc = 0x3046DCu;
            goto label_3046dc;
        }
    }
    ctx->pc = 0x304674u;
    // 0x304674: 0x92020454  lbu         $v0, 0x454($s0)
    ctx->pc = 0x304674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x304678: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x304678u;
    {
        const bool branch_taken_0x304678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304678u;
        // 0x30467c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304678) {
            ctx->pc = 0x3046D8u;
            goto label_3046d8;
        }
    }
    ctx->pc = 0x304680u;
    // 0x304680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304684: 0x8c50a300  lw          $s0, -0x5D00($v0)
    ctx->pc = 0x304684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    // 0x304688: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x304688u;
    SET_GPR_U32(ctx, 31, 0x304690u);
    ctx->pc = 0x30468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304688u;
    // 0x30468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x304688u, 0x304690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304690u;
label_304690:
    // 0x304690: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x304690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x304694: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x304694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30469c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30469cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3046a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3046a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046a8: 0xc0da22a  jal         func_3688A8
    ctx->pc = 0x3046A8u;
    SET_GPR_U32(ctx, 31, 0x3046B0u);
    ctx->pc = 0x3046ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046A8u;
    // 0x3046ac: 0x2484ef00  addiu       $a0, $a0, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3688A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3688A8u, 0x3046A8u, 0x3046B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046B0u;
label_3046b0:
    // 0x3046b0: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x3046B0u;
    SET_GPR_U32(ctx, 31, 0x3046B8u);
    ctx->pc = 0x3046B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046B0u;
    // 0x3046b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x3046B0u, 0x3046B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046B8u;
label_3046b8:
    // 0x3046b8: 0xc0a0864  jal         func_282190
    ctx->pc = 0x3046B8u;
    SET_GPR_U32(ctx, 31, 0x3046C0u);
    ctx->pc = 0x282190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282190u, 0x3046B8u, 0x3046C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C0u;
label_3046c0:
    // 0x3046c0: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x3046C0u;
    SET_GPR_U32(ctx, 31, 0x3046C8u);
    ctx->pc = 0x3046C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046C0u;
    // 0x3046c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x3046C0u, 0x3046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C8u;
label_3046c8:
    // 0x3046c8: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x3046C8u;
    SET_GPR_U32(ctx, 31, 0x3046D0u);
    ctx->pc = 0x3046CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046C8u;
    // 0x3046cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x3046C8u, 0x3046D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046D0u;
label_3046d0:
    // 0x3046d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3046D0u;
    {
        const bool branch_taken_0x3046d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D0u;
        // 0x3046d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046d0) {
            ctx->pc = 0x3046DCu;
            goto label_3046dc;
        }
    }
    ctx->pc = 0x3046D8u;
label_3046d8:
    // 0x3046d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3046d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3046dc:
    // 0x3046dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3046dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3046e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3046e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3046e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3046e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3046e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3046e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3046ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3046ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046ECu;
        // 0x3046f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3046F4u;
    // 0x3046f4: 0x0  nop
    ctx->pc = 0x3046f4u;
    // NOP
    ctx->pc = 0x3046f8u;
}
