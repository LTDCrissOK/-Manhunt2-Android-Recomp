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

// Function: sub_002966E0
// Address: 0x2966e0 - 0x2967a8
void sub_002966E0_0x2966e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002966E0_0x2966e0");
#endif

    switch (ctx->pc) {
        case 0x296710u: goto label_296710;
        case 0x296734u: goto label_296734;
        case 0x296740u: goto label_296740;
        case 0x296790u: goto label_296790;
        default: break;
    }

    ctx->pc = 0x2966e0u;

    // 0x2966e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2966e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2966e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2966e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2966e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2966e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2966ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2966ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2966f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2966f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2966f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966f8: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x2966f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2966fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2966fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296700: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x296700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x296704: 0x24a5baf8  addiu       $a1, $a1, -0x4508
    ctx->pc = 0x296704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949624));
    // 0x296708: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x296708u;
    SET_GPR_U32(ctx, 31, 0x296710u);
    ctx->pc = 0x29670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296708u;
    // 0x29670c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x296708u, 0x296710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296710u;
label_296710:
    // 0x296710: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x296710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x296714: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x296714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x296718: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x296718u;
    {
        const bool branch_taken_0x296718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296718) {
            ctx->pc = 0x29671Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296718u;
            // 0x29671c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296794u;
            goto label_296794;
        }
    }
    ctx->pc = 0x296720u;
    // 0x296720: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x296720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x296724: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x296724u;
    {
        const bool branch_taken_0x296724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296724) {
            ctx->pc = 0x296728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296724u;
            // 0x296728: 0x9202005f  lbu         $v0, 0x5F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296748u;
            goto label_296748;
        }
    }
    ctx->pc = 0x29672Cu;
    // 0x29672c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29672Cu;
    SET_GPR_U32(ctx, 31, 0x296734u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29672Cu, 0x296734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296734u;
label_296734:
    // 0x296734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296738: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x296738u;
    SET_GPR_U32(ctx, 31, 0x296740u);
    ctx->pc = 0x29673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296738u;
    // 0x29673c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x296738u, 0x296740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296740u;
label_296740:
    // 0x296740: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x296740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x296744: 0x9202005f  lbu         $v0, 0x5F($s0)
    ctx->pc = 0x296744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 95)));
label_296748:
    // 0x296748: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x296748u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29674c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x29674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296754: 0x0  nop
    ctx->pc = 0x296754u;
    // NOP
    // 0x296758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29675c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x29675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x296760: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x296760u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x296764: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x296764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x296768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29676c: 0xc60e0054  lwc1        $f14, 0x54($s0)
    ctx->pc = 0x29676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x296770: 0xc60f0058  lwc1        $f15, 0x58($s0)
    ctx->pc = 0x296770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x296774: 0x9204005c  lbu         $a0, 0x5C($s0)
    ctx->pc = 0x296774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x296778: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29677c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x29677cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x296780: 0x9205005d  lbu         $a1, 0x5D($s0)
    ctx->pc = 0x296780u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x296784: 0x9206005e  lbu         $a2, 0x5E($s0)
    ctx->pc = 0x296784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x296788: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x296788u;
    SET_GPR_U32(ctx, 31, 0x296790u);
    ctx->pc = 0x29678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296788u;
    // 0x29678c: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x296788u, 0x296790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296790u;
label_296790:
    // 0x296790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296794:
    // 0x296794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x296798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29679c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2967a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2967A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967A0u;
        // 0x2967a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967A8u;
}
