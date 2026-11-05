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

// Function: sub_001F1490
// Address: 0x1f1490 - 0x1f1608
void sub_001F1490_0x1f1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1490_0x1f1490");
#endif

    switch (ctx->pc) {
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14c4u: goto label_1f14c4;
        case 0x1f14d4u: goto label_1f14d4;
        case 0x1f1518u: goto label_1f1518;
        case 0x1f1520u: goto label_1f1520;
        case 0x1f1554u: goto label_1f1554;
        case 0x1f155cu: goto label_1f155c;
        case 0x1f15a4u: goto label_1f15a4;
        case 0x1f15acu: goto label_1f15ac;
        case 0x1f15ecu: goto label_1f15ec;
        default: break;
    }

    ctx->pc = 0x1f1490u;

    // 0x1f1490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f149c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1f149cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f14a0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f14a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f14a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f14a8: 0xc0a21e4  jal         func_288790
    ctx->pc = 0x1F14A8u;
    SET_GPR_U32(ctx, 31, 0x1F14B0u);
    ctx->pc = 0x1F14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14A8u;
    // 0x1f14ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288790u, 0x1F14A8u, 0x1F14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14B0u;
label_1f14b0:
    // 0x1f14b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f14b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f14b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f14b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f14b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14bc: 0xc07dbca  jal         func_1F6F28
    ctx->pc = 0x1F14BCu;
    SET_GPR_U32(ctx, 31, 0x1F14C4u);
    ctx->pc = 0x1F14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14BCu;
    // 0x1f14c0: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6F28u, 0x1F14BCu, 0x1F14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14C4u;
label_1f14c4:
    // 0x1f14c4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1f14c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x1f14c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f14c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f14cc: 0xc0a21d4  jal         func_288750
    ctx->pc = 0x1F14CCu;
    SET_GPR_U32(ctx, 31, 0x1F14D4u);
    ctx->pc = 0x1F14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14CCu;
    // 0x1f14d0: 0x3c110067  lui         $s1, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288750u, 0x1F14CCu, 0x1F14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14D4u;
label_1f14d4:
    // 0x1f14d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f14d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f14d8: 0x0  nop
    ctx->pc = 0x1f14d8u;
    // NOP
    // 0x1f14dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f14dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f14e0: 0x2631cfa0  addiu       $s1, $s1, -0x3060
    ctx->pc = 0x1f14e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954912));
    // 0x1f14e4: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x1f14e8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1f14e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f14ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f14ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f14f0: 0x26109b10  addiu       $s0, $s0, -0x64F0
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    // 0x1f14f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f14f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14f8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1f14f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1f14fc: 0x0  nop
    ctx->pc = 0x1f14fcu;
    // NOP
    // 0x1f1500: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f1500u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f1504: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1f1504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1f1508: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f1508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f150c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1f150cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f1510: 0xc07f4cc  jal         func_1FD330
    ctx->pc = 0x1F1510u;
    SET_GPR_U32(ctx, 31, 0x1F1518u);
    ctx->pc = 0x1F1514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1510u;
    // 0x1f1514: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD330u, 0x1F1510u, 0x1F1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1518u;
label_1f1518:
    // 0x1f1518: 0xc0a21da  jal         func_288768
    ctx->pc = 0x1F1518u;
    SET_GPR_U32(ctx, 31, 0x1F1520u);
    ctx->pc = 0x288768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288768u, 0x1F1518u, 0x1F1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1520u;
label_1f1520:
    // 0x1f1520: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1f1520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f1524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f1528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f152c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f152cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1530: 0x0  nop
    ctx->pc = 0x1f1530u;
    // NOP
    // 0x1f1534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f1538: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1f1538u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1f153c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f153cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f1540: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f1540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f1544: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f1544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f1548: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f1548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f154c: 0xc07f4dc  jal         func_1FD370
    ctx->pc = 0x1F154Cu;
    SET_GPR_U32(ctx, 31, 0x1F1554u);
    ctx->pc = 0x1F1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F154Cu;
    // 0x1f1550: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD370u, 0x1F154Cu, 0x1F1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1554u;
label_1f1554:
    // 0x1f1554: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1F1554u;
    SET_GPR_U32(ctx, 31, 0x1F155Cu);
    ctx->pc = 0x2887C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887C8u, 0x1F1554u, 0x1F155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F155Cu;
label_1f155c:
    // 0x1f155c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1f155cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1f1560: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1f1564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f1568: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    // 0x1f156c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1f156cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1570: 0x2465c100  addiu       $a1, $v1, -0x3F00
    ctx->pc = 0x1f1570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
    // 0x1f1574: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f1574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f1578: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f1578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f157c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1580: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1580u;
    {
        const bool branch_taken_0x1f1580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1580u;
        // 0x1f1584: 0x8e04c100  lw          $a0, -0x3F00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1580) {
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F1588u;
    // 0x1f1588: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1f1588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1f158c: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x1f158cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1f1590: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1590u;
    {
        const bool branch_taken_0x1f1590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1590) {
            ctx->pc = 0x1F15A4u;
            goto label_1f15a4;
        }
    }
    ctx->pc = 0x1F1598u;
    // 0x1f1598: 0x90a60008  lbu         $a2, 0x8($a1)
    ctx->pc = 0x1f1598u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f159c: 0xc0e1360  jal         func_384D80
    ctx->pc = 0x1F159Cu;
    SET_GPR_U32(ctx, 31, 0x1F15A4u);
    ctx->pc = 0x1F15A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F159Cu;
    // 0x1f15a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384D80u, 0x1F159Cu, 0x1F15A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15A4u;
label_1f15a4:
    // 0x1f15a4: 0xc0a21ec  jal         func_2887B0
    ctx->pc = 0x1F15A4u;
    SET_GPR_U32(ctx, 31, 0x1F15ACu);
    ctx->pc = 0x2887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887B0u, 0x1F15A4u, 0x1F15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15ACu;
label_1f15ac:
    // 0x1f15ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f15b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f15b4: 0x24639268  addiu       $v1, $v1, -0x6D98
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939240));
    // 0x1f15b8: 0x2605c100  addiu       $a1, $s0, -0x3F00
    ctx->pc = 0x1f15b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951168));
    // 0x1f15bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f15c0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f15c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f15c8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F15C8u;
    {
        const bool branch_taken_0x1f15c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15C8u;
        // 0x1f15cc: 0x8e04c100  lw          $a0, -0x3F00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15c8) {
            ctx->pc = 0x1F15ECu;
            goto label_1f15ec;
        }
    }
    ctx->pc = 0x1F15D0u;
    // 0x1f15d0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1f15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1f15d4: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x1f15d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1f15d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F15D8u;
    {
        const bool branch_taken_0x1f15d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15D8u;
        // 0x1f15dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15d8) {
            ctx->pc = 0x1F15F0u;
            goto label_1f15f0;
        }
    }
    ctx->pc = 0x1F15E0u;
    // 0x1f15e0: 0x90a60004  lbu         $a2, 0x4($a1)
    ctx->pc = 0x1f15e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f15e4: 0xc0e139e  jal         func_384E78
    ctx->pc = 0x1F15E4u;
    SET_GPR_U32(ctx, 31, 0x1F15ECu);
    ctx->pc = 0x1F15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15E4u;
    // 0x1f15e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384E78u, 0x1F15E4u, 0x1F15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15ECu;
label_1f15ec:
    // 0x1f15ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f15ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f15f0:
    // 0x1f15f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f15f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f15f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f15f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f15f8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1f15f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f15fc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1f15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1600: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1600u;
        // 0x1f1604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1608u;
}
