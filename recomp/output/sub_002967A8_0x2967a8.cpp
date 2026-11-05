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

// Function: sub_002967A8
// Address: 0x2967a8 - 0x296a48
void sub_002967A8_0x2967a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002967A8_0x2967a8");
#endif

    switch (ctx->pc) {
        case 0x2967d4u: goto label_2967d4;
        case 0x2967f4u: goto label_2967f4;
        case 0x296844u: goto label_296844;
        case 0x296898u: goto label_296898;
        case 0x2968c0u: goto label_2968c0;
        case 0x2968f8u: goto label_2968f8;
        case 0x29691cu: goto label_29691c;
        case 0x2969d4u: goto label_2969d4;
        case 0x296a10u: goto label_296a10;
        case 0x296a30u: goto label_296a30;
        default: break;
    }

    ctx->pc = 0x2967a8u;

    // 0x2967a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2967ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2967acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2967b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2967b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2967b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2967b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2967b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2967bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2967c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2967c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2967c4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2967c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2967c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2967c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2967cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2967CCu;
    SET_GPR_U32(ctx, 31, 0x2967D4u);
    ctx->pc = 0x2967D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967CCu;
    // 0x2967d0: 0x24a5baf8  addiu       $a1, $a1, -0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2967CCu, 0x2967D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967D4u;
label_2967d4:
    // 0x2967d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2967d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2967d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2967d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2967dc: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2967DCu;
    {
        const bool branch_taken_0x2967dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967DCu;
        // 0x2967e0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967dc) {
            ctx->pc = 0x296A30u;
            goto label_296a30;
        }
    }
    ctx->pc = 0x2967E4u;
    // 0x2967e4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2967e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2967e8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2967e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2967ec: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2967ECu;
    SET_GPR_U32(ctx, 31, 0x2967F4u);
    ctx->pc = 0x2967F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2967ECu;
    // 0x2967f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2967ECu, 0x2967F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2967F4u;
label_2967f4:
    // 0x2967f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2967f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967f8: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x2967f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2967fc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2967FCu;
    {
        const bool branch_taken_0x2967fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2967fc) {
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x296804u;
    // 0x296804: 0x9202006e  lbu         $v0, 0x6E($s0)
    ctx->pc = 0x296804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x296808: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x296808u;
    {
        const bool branch_taken_0x296808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296808) {
            ctx->pc = 0x29680Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296808u;
            // 0x29680c: 0x92020060  lbu         $v0, 0x60($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29689Cu;
            goto label_29689c;
        }
    }
    ctx->pc = 0x296810u;
    // 0x296810: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x296810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x296814: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x296814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29681c: 0x0  nop
    ctx->pc = 0x29681cu;
    // NOP
    // 0x296820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x296820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296824: 0x92040014  lbu         $a0, 0x14($s0)
    ctx->pc = 0x296824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x296828: 0x92050015  lbu         $a1, 0x15($s0)
    ctx->pc = 0x296828u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x29682c: 0x92060016  lbu         $a2, 0x16($s0)
    ctx->pc = 0x29682cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x296830: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x296830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296834: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296834u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296838: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x296838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x29683c: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x29683Cu;
    SET_GPR_U32(ctx, 31, 0x296844u);
    ctx->pc = 0x296840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29683Cu;
    // 0x296840: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x29683Cu, 0x296844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296844u;
label_296844:
    // 0x296844: 0x9202006b  lbu         $v0, 0x6B($s0)
    ctx->pc = 0x296844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x296848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29684c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x29684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x296854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296858: 0x0  nop
    ctx->pc = 0x296858u;
    // NOP
    // 0x29685c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29685cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x296860: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x296860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296864: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x296864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x296868: 0xc60e0020  lwc1        $f14, 0x20($s0)
    ctx->pc = 0x296868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29686c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29686cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296870: 0xc60f0024  lwc1        $f15, 0x24($s0)
    ctx->pc = 0x296870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x296874: 0x92060068  lbu         $a2, 0x68($s0)
    ctx->pc = 0x296874u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x296878: 0x92070069  lbu         $a3, 0x69($s0)
    ctx->pc = 0x296878u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x29687c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29687cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296880: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x296880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x296884: 0x9208006a  lbu         $t0, 0x6A($s0)
    ctx->pc = 0x296884u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x296888: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x296888u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29688c: 0x8e0b0064  lw          $t3, 0x64($s0)
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x296890: 0xc0a5976  jal         func_2965D8
    ctx->pc = 0x296890u;
    SET_GPR_U32(ctx, 31, 0x296898u);
    ctx->pc = 0x296894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296890u;
    // 0x296894: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2965D8u, 0x296890u, 0x296898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296898u;
label_296898:
    // 0x296898: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x296898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_29689c:
    // 0x29689c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29689Cu;
    {
        const bool branch_taken_0x29689c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29689c) {
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x2968A4u;
    // 0x2968a4: 0x9202006e  lbu         $v0, 0x6E($s0)
    ctx->pc = 0x2968a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2968a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2968A8u;
    {
        const bool branch_taken_0x2968a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968A8u;
        // 0x2968ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968a8) {
            ctx->pc = 0x2968C8u;
            goto label_2968c8;
        }
    }
    ctx->pc = 0x2968B0u;
    // 0x2968b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2968b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2968b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968b8: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2968B8u;
    SET_GPR_U32(ctx, 31, 0x2968C0u);
    ctx->pc = 0x2968BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968B8u;
    // 0x2968bc: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2968B8u, 0x2968C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968C0u;
label_2968c0:
    // 0x2968c0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2968C0u;
    {
        const bool branch_taken_0x2968c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968C0u;
        // 0x2968c4: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968c0) {
            ctx->pc = 0x296A14u;
            goto label_296a14;
        }
    }
    ctx->pc = 0x2968C8u;
label_2968c8:
    // 0x2968c8: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x2968c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x2968cc: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2968ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2968d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2968d4: 0x0  nop
    ctx->pc = 0x2968d4u;
    // NOP
    // 0x2968d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2968d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2968dc: 0x92040014  lbu         $a0, 0x14($s0)
    ctx->pc = 0x2968dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2968e0: 0x92050015  lbu         $a1, 0x15($s0)
    ctx->pc = 0x2968e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x2968e4: 0x92060016  lbu         $a2, 0x16($s0)
    ctx->pc = 0x2968e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2968e8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2968E8u;
    {
        const bool branch_taken_0x2968e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968E8u;
        // 0x2968ec: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968e8) {
            ctx->pc = 0x2969C4u;
            goto label_2969c4;
        }
    }
    ctx->pc = 0x2968F0u;
label_2968f0:
    // 0x2968f0: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x2968F0u;
    SET_GPR_U32(ctx, 31, 0x2968F8u);
    ctx->pc = 0x2968F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968F0u;
    // 0x2968f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x2968F0u, 0x2968F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968F8u;
label_2968f8:
    // 0x2968f8: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2968F8u;
    {
        const bool branch_taken_0x2968f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2968f8) {
            ctx->pc = 0x2968FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2968F8u;
            // 0x2968fc: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2969E0u;
            goto label_2969e0;
        }
    }
    ctx->pc = 0x296900u;
    // 0x296900: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x296900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x296904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296908: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x296908u;
    {
        const bool branch_taken_0x296908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296908u;
        // 0x29690c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296908) {
            ctx->pc = 0x2969DCu;
            goto label_2969dc;
        }
    }
    ctx->pc = 0x296910u;
    // 0x296910: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x296910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x296914: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x296914u;
    SET_GPR_U32(ctx, 31, 0x29691Cu);
    ctx->pc = 0x296918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296914u;
    // 0x296918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x296914u, 0x29691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29691Cu;
label_29691c:
    // 0x29691c: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x29691cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x296920: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x296920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x296924: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x296924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x296928: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x296928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29692c: 0x0  nop
    ctx->pc = 0x29692cu;
    // NOP
    // 0x296930: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x296930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x296934: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x296934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x296938: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x296938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x29693c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29693cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296940: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x296940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x296944: 0x0  nop
    ctx->pc = 0x296944u;
    // NOP
    // 0x296948: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x296948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x29694c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x29694cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296950: 0x0  nop
    ctx->pc = 0x296950u;
    // NOP
    // 0x296954: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x296954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x296958: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x296958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x29695c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29695cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x296960: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x296960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x296964: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x296964u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x296968: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x296968u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x29696c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29696cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x296970: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x296974: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x296974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x296978: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29697c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29697cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x296980: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296980u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x296984: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x296984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x296988: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x296988u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x29698c: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x29698cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x296990: 0xa3a40012  sb          $a0, 0x12($sp)
    ctx->pc = 0x296990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x296994: 0x8ba20013  lwl         $v0, 0x13($sp)
    ctx->pc = 0x296994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x296998: 0x9ba20010  lwr         $v0, 0x10($sp)
    ctx->pc = 0x296998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x29699c: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x29699cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2969a0: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x2969a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2969a4: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x2969a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2969a8: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x2969a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2969ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2969acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2969b0: 0x0  nop
    ctx->pc = 0x2969b0u;
    // NOP
    // 0x2969b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2969b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2969b8: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x2969b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2969bc: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x2969bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2969c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2969c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2969c4:
    // 0x2969c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2969c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2969c8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2969c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2969cc: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2969CCu;
    SET_GPR_U32(ctx, 31, 0x2969D4u);
    ctx->pc = 0x2969D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2969CCu;
    // 0x2969d0: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2969CCu, 0x2969D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2969D4u;
label_2969d4:
    // 0x2969d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2969D4u;
    {
        const bool branch_taken_0x2969d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969D4u;
        // 0x2969d8: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969d4) {
            ctx->pc = 0x296A14u;
            goto label_296a14;
        }
    }
    ctx->pc = 0x2969DCu;
label_2969dc:
    // 0x2969dc: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x2969dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_2969e0:
    // 0x2969e0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2969e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2969e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2969e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2969e8: 0x0  nop
    ctx->pc = 0x2969e8u;
    // NOP
    // 0x2969ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2969ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2969f0: 0x92040014  lbu         $a0, 0x14($s0)
    ctx->pc = 0x2969f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2969f4: 0x92050015  lbu         $a1, 0x15($s0)
    ctx->pc = 0x2969f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x2969f8: 0x92060016  lbu         $a2, 0x16($s0)
    ctx->pc = 0x2969f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x2969fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2969fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296a00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x296a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x296a04: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x296a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x296a08: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x296A08u;
    SET_GPR_U32(ctx, 31, 0x296A10u);
    ctx->pc = 0x296A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A08u;
    // 0x296a0c: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x296A08u, 0x296A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A10u;
label_296a10:
    // 0x296a10: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x296a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_296a14:
    // 0x296a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a18: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x296a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x296a1c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x296a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296a20: 0xc60e0020  lwc1        $f14, 0x20($s0)
    ctx->pc = 0x296a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x296a24: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x296a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x296a28: 0xc09f662  jal         func_27D988
    ctx->pc = 0x296A28u;
    SET_GPR_U32(ctx, 31, 0x296A30u);
    ctx->pc = 0x296A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A28u;
    // 0x296a2c: 0xc60f0024  lwc1        $f15, 0x24($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x296A28u, 0x296A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A30u;
label_296a30:
    // 0x296a30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x296a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296a34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x296a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296a38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x296a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296a3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x296a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296a40: 0x3e00008  jr          $ra
    ctx->pc = 0x296A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A40u;
        // 0x296a44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296A48u;
}
