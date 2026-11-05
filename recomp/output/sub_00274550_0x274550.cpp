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

// Function: sub_00274550
// Address: 0x274550 - 0x274800
void sub_00274550_0x274550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274550_0x274550");
#endif

    switch (ctx->pc) {
        case 0x2745dcu: goto label_2745dc;
        case 0x274610u: goto label_274610;
        case 0x274664u: goto label_274664;
        case 0x274688u: goto label_274688;
        case 0x2746c0u: goto label_2746c0;
        case 0x2746ecu: goto label_2746ec;
        case 0x274754u: goto label_274754;
        case 0x2747b0u: goto label_2747b0;
        default: break;
    }

    ctx->pc = 0x274550u;

    // 0x274550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x274550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x274554: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x274554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x274558: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x274558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x27455c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27455cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274560: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x274560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x274564: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x274564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x274568: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x274568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x27456c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x27456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x274570: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x274570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x274574: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x274574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x274578: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x274578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x27457c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x27457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x274580: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x274580u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x274584: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x274584u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x274588: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x274588u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27458c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x27458cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x274590: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x274590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x274594: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x274598: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x274598u;
    {
        const bool branch_taken_0x274598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274598u;
        // 0x27459c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274598) {
            ctx->pc = 0x2747C0u;
            goto label_2747c0;
        }
    }
    ctx->pc = 0x2745A0u;
    // 0x2745a0: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x2745a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x2745a4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2745a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2745a8: 0x24478140  addiu       $a3, $v0, -0x7EC0
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
    // 0x2745ac: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2745acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2745b0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2745b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2745b4: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x2745b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x468148u));
    // 0x2745b8: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x2745b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2745bc: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2745bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2745c0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2745c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2745c4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2745c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2745c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2745c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2745cc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2745ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2745d0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2745d4: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x2745D4u;
    SET_GPR_U32(ctx, 31, 0x2745DCu);
    ctx->pc = 0x2745D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745D4u;
    // 0x2745d8: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x2745D4u, 0x2745DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745DCu;
label_2745dc:
    // 0x2745dc: 0x0  nop
    ctx->pc = 0x2745dcu;
    // NOP
    // 0x2745e0: 0x0  nop
    ctx->pc = 0x2745e0u;
    // NOP
    // 0x2745e4: 0x46000544  c1          0x544
    ctx->pc = 0x2745e4u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x2745e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2745e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2745ec: 0xc4409e18  lwc1        $f0, -0x61E8($v0)
    ctx->pc = 0x2745ecu;
    { uint32_t bits = FAST_READ32(0x3F9E18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2745f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2745f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745f4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2745f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2745f8: 0x0  nop
    ctx->pc = 0x2745f8u;
    // NOP
    // 0x2745fc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2745FCu;
    {
        const bool branch_taken_0x2745fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745FCu;
        // 0x274600: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745fc) {
            ctx->pc = 0x27463Cu;
            goto label_27463c;
        }
    }
    ctx->pc = 0x274604u;
    // 0x274604: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x274604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274608: 0x26e49e18  addiu       $a0, $s7, -0x61E8
    ctx->pc = 0x274608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942232));
    // 0x27460c: 0x0  nop
    ctx->pc = 0x27460cu;
    // NOP
label_274610:
    // 0x274610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x274614: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x274614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x274618: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274618u;
    {
        const bool branch_taken_0x274618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274618u;
        // 0x27461c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274618) {
            ctx->pc = 0x27463Cu;
            goto label_27463c;
        }
    }
    ctx->pc = 0x274620u;
    // 0x274620: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x274620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274624: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x274624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274628: 0x0  nop
    ctx->pc = 0x274628u;
    // NOP
    // 0x27462c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x27462Cu;
    {
        const bool branch_taken_0x27462c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27462Cu;
        // 0x274630: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27462c) {
            ctx->pc = 0x274640u;
            goto label_274640;
        }
    }
    ctx->pc = 0x274634u;
    // 0x274634: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x274634u;
    {
        const bool branch_taken_0x274634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274634u;
        // 0x274638: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274634) {
            ctx->pc = 0x274610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274610;
        }
    }
    ctx->pc = 0x27463Cu;
label_27463c:
    // 0x27463c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_274640:
    // 0x274640: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x274640u;
    {
        const bool branch_taken_0x274640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x274644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274640u;
        // 0x274644: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274640) {
            ctx->pc = 0x2747BCu;
            goto label_2747bc;
        }
    }
    ctx->pc = 0x274648u;
    // 0x274648: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x274648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x27464c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27464cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274650: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x274650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x274654: 0x3c1e004a  lui         $fp, 0x4A
    ctx->pc = 0x274654u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)74 << 16));
    // 0x274658: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27465c: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x27465Cu;
    SET_GPR_U32(ctx, 31, 0x274664u);
    ctx->pc = 0x274660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27465Cu;
    // 0x274660: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x27465Cu, 0x274664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274664u;
label_274664:
    // 0x274664: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x274664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x274668: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x274668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x27466c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x27466cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x274670: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x274670u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x274674: 0x24500480  addiu       $s0, $v0, 0x480
    ctx->pc = 0x274674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x274678: 0x24759e08  addiu       $s5, $v1, -0x61F8
    ctx->pc = 0x274678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942216));
    // 0x27467c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x27467cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274680: 0x26e39e18  addiu       $v1, $s7, -0x61E8
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942232));
    // 0x274684: 0x0  nop
    ctx->pc = 0x274684u;
    // NOP
label_274688:
    // 0x274688: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x274688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27468c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x27468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274694: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x274694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x274698: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x274698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27469c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x27469cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2746a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2746a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2746a4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2746a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2746a8: 0xa20700fc  sb          $a3, 0xFC($s0)
    ctx->pc = 0x2746a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 7));
    // 0x2746ac: 0x27c49c38  addiu       $a0, $fp, -0x63C8
    ctx->pc = 0x2746acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941752));
    // 0x2746b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2746b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2746b4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2746b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746b8: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x2746B8u;
    SET_GPR_U32(ctx, 31, 0x2746C0u);
    ctx->pc = 0x2746BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2746B8u;
    // 0x2746bc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x2746B8u, 0x2746C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2746C0u;
label_2746c0:
    // 0x2746c0: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x2746c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2746c8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2746c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2746cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2746ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2746d0: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x2746d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2746d4: 0xe6150110  swc1        $f21, 0x110($s0)
    ctx->pc = 0x2746d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x2746d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2746d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746dc: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2746dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2746e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2746e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2746e4: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x2746E4u;
    SET_GPR_U32(ctx, 31, 0x2746ECu);
    ctx->pc = 0x2746E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2746E4u;
    // 0x2746e8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x2746E4u, 0x2746ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2746ECu;
label_2746ec:
    // 0x2746ec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2746ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2746f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2746f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2746f4: 0xa202010c  sb          $v0, 0x10C($s0)
    ctx->pc = 0x2746f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x2746f8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2746f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2746fc: 0xe616016c  swc1        $f22, 0x16C($s0)
    ctx->pc = 0x2746fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x274700: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x274700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274704: 0x0  nop
    ctx->pc = 0x274704u;
    // NOP
    // 0x274708: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x274708u;
    {
        const bool branch_taken_0x274708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274708u;
        // 0x27470c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274708) {
            ctx->pc = 0x274718u;
            goto label_274718;
        }
    }
    ctx->pc = 0x274710u;
    // 0x274710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_274718:
    // 0x274718: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x274718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x27471c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x27471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x274720: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x274720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x274724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27472c: 0x0  nop
    ctx->pc = 0x27472cu;
    // NOP
    // 0x274730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274734: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x274734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x274738: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x274738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x27473c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x274740: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x274740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x274744: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x274748: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x274748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27474c: 0xc07e6e0  jal         func_1F9B80
    ctx->pc = 0x27474Cu;
    SET_GPR_U32(ctx, 31, 0x274754u);
    ctx->pc = 0x274750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27474Cu;
    // 0x274750: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B80u, 0x27474Cu, 0x274754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274754u;
label_274754:
    // 0x274754: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274758: 0x2643000a  addiu       $v1, $s2, 0xA
    ctx->pc = 0x274758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x27475c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x27475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x274760: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x274760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274764: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x274764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x274768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27476c: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x27476cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x274770: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x274770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x274774: 0xae0600f8  sw          $a2, 0xF8($s0)
    ctx->pc = 0x274774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 6));
    // 0x274778: 0xae050158  sw          $a1, 0x158($s0)
    ctx->pc = 0x274778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 5));
    // 0x27477c: 0xa211011c  sb          $s1, 0x11C($s0)
    ctx->pc = 0x27477cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 17));
    // 0x274780: 0xe6140120  swc1        $f20, 0x120($s0)
    ctx->pc = 0x274780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x274784: 0xae070140  sw          $a3, 0x140($s0)
    ctx->pc = 0x274784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 7));
    // 0x274788: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x274788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x27478c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x27478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x274790: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x274790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x274794: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x274794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x274798: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x274798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x27479c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x27479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x2747a0: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x2747a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x2747a4: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x2747a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x2747a8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2747A8u;
    SET_GPR_U32(ctx, 31, 0x2747B0u);
    ctx->pc = 0x2747ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2747A8u;
    // 0x2747ac: 0xae00014c  sw          $zero, 0x14C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2747A8u, 0x2747B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747B0u;
label_2747b0:
    // 0x2747b0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2747b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2747b4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2747B4u;
    {
        const bool branch_taken_0x2747b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2747B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747B4u;
        // 0x2747b8: 0x26e39e18  addiu       $v1, $s7, -0x61E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747b4) {
            ctx->pc = 0x274688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274688;
        }
    }
    ctx->pc = 0x2747BCu;
label_2747bc:
    // 0x2747bc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2747bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2747c0:
    // 0x2747c0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2747c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2747c4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2747c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2747c8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2747c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2747cc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2747ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2747d0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2747d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2747d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2747d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2747d8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2747d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2747dc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2747dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2747e0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2747e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2747e4: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x2747e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2747e8: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2747e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2747ec: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2747ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2747f0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2747f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2747f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2747F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2747F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747F4u;
        // 0x2747f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2747F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2747FCu;
    // 0x2747fc: 0x0  nop
    ctx->pc = 0x2747fcu;
    // NOP
    ctx->pc = 0x274800u;
}
