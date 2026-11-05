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

// Function: sub_0028F528
// Address: 0x28f528 - 0x28f9a0
void sub_0028F528_0x28f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F528_0x28f528");
#endif

    switch (ctx->pc) {
        case 0x28f548u: goto label_28f548;
        case 0x28f570u: goto label_28f570;
        case 0x28f774u: goto label_28f774;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8e8u: goto label_28f8e8;
        case 0x28f908u: goto label_28f908;
        case 0x28f944u: goto label_28f944;
        case 0x28f958u: goto label_28f958;
        case 0x28f980u: goto label_28f980;
        default: break;
    }

    ctx->pc = 0x28f528u;

    // 0x28f528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28f52c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28f530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f534: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x28f534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x28f538: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28f538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28f53c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x28f53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x28f540: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x28F540u;
    SET_GPR_U32(ctx, 31, 0x28F548u);
    ctx->pc = 0x28F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F540u;
    // 0x28f544: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x28F540u, 0x28F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F548u;
label_28f548:
    // 0x28f548: 0x5040010e  beql        $v0, $zero, . + 4 + (0x10E << 2)
    ctx->pc = 0x28F548u;
    {
        const bool branch_taken_0x28f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f548) {
            ctx->pc = 0x28F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F548u;
            // 0x28f54c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F984u;
            goto label_28f984;
        }
    }
    ctx->pc = 0x28F550u;
    // 0x28f550: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28f554: 0x5040010b  beql        $v0, $zero, . + 4 + (0x10B << 2)
    ctx->pc = 0x28F554u;
    {
        const bool branch_taken_0x28f554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f554) {
            ctx->pc = 0x28F558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F554u;
            // 0x28f558: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F984u;
            goto label_28f984;
        }
    }
    ctx->pc = 0x28F55Cu;
    // 0x28f55c: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x28f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x28f560: 0x50400108  beql        $v0, $zero, . + 4 + (0x108 << 2)
    ctx->pc = 0x28F560u;
    {
        const bool branch_taken_0x28f560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f560) {
            ctx->pc = 0x28F564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F560u;
            // 0x28f564: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F984u;
            goto label_28f984;
        }
    }
    ctx->pc = 0x28F568u;
    // 0x28f568: 0xc0a3d38  jal         func_28F4E0
    ctx->pc = 0x28F568u;
    SET_GPR_U32(ctx, 31, 0x28F570u);
    ctx->pc = 0x28F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F4E0u, 0x28F568u, 0x28F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F570u;
label_28f570:
    // 0x28f570: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f578: 0x16220057  bne         $s1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x28F578u;
    {
        const bool branch_taken_0x28f578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F578u;
        // 0x28f57c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f578) {
            ctx->pc = 0x28F6D8u;
            goto label_28f6d8;
        }
    }
    ctx->pc = 0x28F580u;
    // 0x28f580: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28f584: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x28f584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B40u));
    // 0x28f588: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F588u;
    {
        const bool branch_taken_0x28f588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F588u;
        // 0x28f58c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f588) {
            ctx->pc = 0x28F5A4u;
            goto label_28f5a4;
        }
    }
    ctx->pc = 0x28F590u;
    // 0x28f590: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28f590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f594: 0x0  nop
    ctx->pc = 0x28f594u;
    // NOP
    // 0x28f598: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28f598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f59c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F59Cu;
    {
        const bool branch_taken_0x28f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f59c) {
            ctx->pc = 0x28F5BCu;
            goto label_28f5bc;
        }
    }
    ctx->pc = 0x28F5A4u;
label_28f5a4:
    // 0x28f5a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f5a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f5ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28f5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28f5b0: 0x0  nop
    ctx->pc = 0x28f5b0u;
    // NOP
    // 0x28f5b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28f5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f5b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28f5b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28f5bc:
    // 0x28f5bc: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x28f5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x28f5c0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x28f5c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x28f5c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f5c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28f5cc: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x28f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f5d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f5d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28f5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28f5d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28f5d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f5dc: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x28f5dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x28f5e0: 0xc442a7fc  lwc1        $f2, -0x5804($v0)
    ctx->pc = 0x28f5e0u;
    { uint32_t bits = FAST_READ32(0x3FA7FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f5e4: 0xc460a7f8  lwc1        $f0, -0x5808($v1)
    ctx->pc = 0x28f5e4u;
    { uint32_t bits = FAST_READ32(0x3FA7F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f5e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28f5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28f5ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28f5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f5f0: 0x0  nop
    ctx->pc = 0x28f5f0u;
    // NOP
    // 0x28f5f4: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x28F5F4u;
    {
        const bool branch_taken_0x28f5f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F5F4u;
        // 0x28f5f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5f4) {
            ctx->pc = 0x28F670u;
            goto label_28f670;
        }
    }
    ctx->pc = 0x28F5FCu;
    // 0x28f5fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f600: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x28f600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x28f604: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x28F604u;
    {
        const bool branch_taken_0x28f604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f604) {
            ctx->pc = 0x28F608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F604u;
            // 0x28f608: 0xc481a7f8  lwc1        $f1, -0x5808($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294944760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F674u;
            goto label_28f674;
        }
    }
    ctx->pc = 0x28F60Cu;
    // 0x28f60c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f610: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x28f610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x28f614: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x28F614u;
    {
        const bool branch_taken_0x28f614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f614) {
            ctx->pc = 0x28F618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F614u;
            // 0x28f618: 0xc481a7f8  lwc1        $f1, -0x5808($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294944760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F674u;
            goto label_28f674;
        }
    }
    ctx->pc = 0x28F61Cu;
    // 0x28f61c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f620: 0x2443a840  addiu       $v1, $v0, -0x57C0
    ctx->pc = 0x28f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x28f624: 0x2447a840  addiu       $a3, $v0, -0x57C0
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
    // 0x28f628: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x28f628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28f62c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x28f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28f630: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x28f630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28f634: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x28f634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28f638: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x28f638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f63c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x28f63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f640: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x28f640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f644: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x28f644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f648: 0x6862fff7  ldl         $v0, -0x9($v1)
    ctx->pc = 0x28f648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28f64c: 0x6c62fff0  ldr         $v0, -0x10($v1)
    ctx->pc = 0x28f64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28f650: 0x6864ffff  ldl         $a0, -0x1($v1)
    ctx->pc = 0x28f650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28f654: 0x6c64fff8  ldr         $a0, -0x8($v1)
    ctx->pc = 0x28f654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28f658: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x28f658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f65c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x28f65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f660: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x28f660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f664: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x28f664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f668: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x28F668u;
    {
        const bool branch_taken_0x28f668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F668u;
        // 0x28f66c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f668) {
            ctx->pc = 0x28F738u;
            goto label_28f738;
        }
    }
    ctx->pc = 0x28F670u;
label_28f670:
    // 0x28f670: 0xc481a7f8  lwc1        $f1, -0x5808($a0)
    ctx->pc = 0x28f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294944760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28f674:
    // 0x28f674: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f678: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x28f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f67c: 0x2443a810  addiu       $v1, $v0, -0x57F0
    ctx->pc = 0x28f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944784));
    // 0x28f680: 0x2446a810  addiu       $a2, $v0, -0x57F0
    ctx->pc = 0x28f680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944784));
    // 0x28f684: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x28f684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28f688: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x28f688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28f68c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x28f68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28f690: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x28f690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28f694: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x28f694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f698: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x28f698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f69c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x28f69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f6a0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x28f6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f6a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f6a8: 0x6867fff7  ldl         $a3, -0x9($v1)
    ctx->pc = 0x28f6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28f6ac: 0x6c67fff0  ldr         $a3, -0x10($v1)
    ctx->pc = 0x28f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28f6b0: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x28f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28f6b4: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x28f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28f6b8: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x28f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f6bc: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x28f6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f6c0: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x28f6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f6c4: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x28f6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f6c8: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x28F6C8u;
    {
        const bool branch_taken_0x28f6c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f6c8) {
            ctx->pc = 0x28F6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F6C8u;
            // 0x28f6cc: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F734u;
            goto label_28f734;
        }
    }
    ctx->pc = 0x28F6D0u;
    // 0x28f6d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28F6D0u;
    {
        const bool branch_taken_0x28f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6D0u;
        // 0x28f6d4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6d0) {
            ctx->pc = 0x28F738u;
            goto label_28f738;
        }
    }
    ctx->pc = 0x28F6D8u;
label_28f6d8:
    // 0x28f6d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f6dc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x28f6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28f6e0: 0x2442a810  addiu       $v0, $v0, -0x57F0
    ctx->pc = 0x28f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944784));
    // 0x28f6e4: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x28f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28f6e8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x28f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x28f6ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f6f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28f6f4: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x28f6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28f6f8: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x28f6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28f6fc: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x28f6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28f700: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x28f700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28f704: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x28f704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f708: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x28f708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f70c: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x28f70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f710: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x28f710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f714: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x28f714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x28f718: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x28f718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28f71c: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x28f71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x28f720: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x28f720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28f724: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x28f724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f728: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x28f728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f72c: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x28f72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f730: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x28f730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28f734:
    // 0x28f734: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28f734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_28f738:
    // 0x28f738: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x28f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f73c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28f73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f740: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x28f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f744: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x28f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x28f748: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x28f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f74c: 0xc44e001c  lwc1        $f14, 0x1C($v0)
    ctx->pc = 0x28f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28f750: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28f750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f754: 0xc60f0018  lwc1        $f15, 0x18($s0)
    ctx->pc = 0x28f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28f758: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28f758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f75c: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x28f75cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x28f760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28f760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f764: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x28f764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28f768: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x28f768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f76c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28F76Cu;
    SET_GPR_U32(ctx, 31, 0x28F774u);
    ctx->pc = 0x28F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F76Cu;
    // 0x28f770: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28F76Cu, 0x28F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F774u;
label_28f774:
    // 0x28f774: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x28f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28f778: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x28f77c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f780: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x28f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x28f784: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x28f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f788: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x28f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x28f78c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F78Cu;
    {
        const bool branch_taken_0x28f78c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F78Cu;
        // 0x28f790: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f78c) {
            ctx->pc = 0x28F7A8u;
            goto label_28f7a8;
        }
    }
    ctx->pc = 0x28F794u;
    // 0x28f794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f798: 0x0  nop
    ctx->pc = 0x28f798u;
    // NOP
    // 0x28f79c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f7a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F7A0u;
    {
        const bool branch_taken_0x28f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f7a0) {
            ctx->pc = 0x28F7C4u;
            goto label_28f7c4;
        }
    }
    ctx->pc = 0x28F7A8u;
label_28f7a8:
    // 0x28f7a8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28f7ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28f7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28f7b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28f7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f7b8: 0x0  nop
    ctx->pc = 0x28f7b8u;
    // NOP
    // 0x28f7bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f7c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28f7c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28f7c4:
    // 0x28f7c4: 0x0  nop
    ctx->pc = 0x28f7c4u;
    // NOP
    // 0x28f7c8: 0x0  nop
    ctx->pc = 0x28f7c8u;
    // NOP
    // 0x28f7cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28f7ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28f7d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28f7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f7d4: 0x0  nop
    ctx->pc = 0x28f7d4u;
    // NOP
    // 0x28f7d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f7dc: 0x0  nop
    ctx->pc = 0x28f7dcu;
    // NOP
    // 0x28f7e0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x28F7E0u;
    {
        const bool branch_taken_0x28f7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7E0u;
        // 0x28f7e4: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7e0) {
            ctx->pc = 0x28F89Cu;
            goto label_28f89c;
        }
    }
    ctx->pc = 0x28F7E8u;
    // 0x28f7e8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x28f7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f7ec: 0x0  nop
    ctx->pc = 0x28f7ecu;
    // NOP
    // 0x28f7f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x28F7F0u;
    {
        const bool branch_taken_0x28f7f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f7f0) {
            ctx->pc = 0x28F814u;
            goto label_28f814;
        }
    }
    ctx->pc = 0x28F7F8u;
    // 0x28f7f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28f7fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f800: 0x0  nop
    ctx->pc = 0x28f800u;
    // NOP
    // 0x28f804: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x28f804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f808: 0x0  nop
    ctx->pc = 0x28f808u;
    // NOP
    // 0x28f80c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28F80Cu;
    {
        const bool branch_taken_0x28f80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f80c) {
            ctx->pc = 0x28F810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F80Cu;
            // 0x28f810: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F814u;
            goto label_28f814;
        }
    }
    ctx->pc = 0x28F814u;
label_28f814:
    // 0x28f814: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28f814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28f818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28f818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f81c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x28f81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x28f820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f824: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x28f824u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x28f828: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x28f828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f82c: 0x0  nop
    ctx->pc = 0x28f82cu;
    // NOP
    // 0x28f830: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28F830u;
    {
        const bool branch_taken_0x28f830 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f830) {
            ctx->pc = 0x28F834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F830u;
            // 0x28f834: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F838u;
            goto label_28f838;
        }
    }
    ctx->pc = 0x28F838u;
label_28f838:
    // 0x28f838: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x28f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f83c: 0x2642ac50  addiu       $v0, $s2, -0x53B0
    ctx->pc = 0x28f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945872));
    // 0x28f840: 0x3c013a0b  lui         $at, 0x3A0B
    ctx->pc = 0x28f840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14859 << 16));
    // 0x28f844: 0x34217034  ori         $at, $at, 0x7034
    ctx->pc = 0x28f844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28724);
    // 0x28f848: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x28f848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x28f84c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28f84cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f850: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x28f850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x28f854: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x28f854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28f858: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f85c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28f85cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f860: 0x460f6bc1  sub.s       $f15, $f13, $f15
    ctx->pc = 0x28f860u;
    ctx->f[15] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x28f864: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x28f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f868: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x28f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f86c: 0xc60e0014  lwc1        $f14, 0x14($s0)
    ctx->pc = 0x28f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28f870: 0x460f1bc2  mul.s       $f15, $f3, $f15
    ctx->pc = 0x28f870u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x28f874: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x28f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f878: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x28f878u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x28f87c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f880: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x28f880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28f884: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x28f884u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x28f888: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x28f888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f88c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28f890: 0x460f6b41  sub.s       $f13, $f13, $f15
    ctx->pc = 0x28f890u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x28f894: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28F894u;
    SET_GPR_U32(ctx, 31, 0x28F89Cu);
    ctx->pc = 0x28F898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F894u;
    // 0x28f898: 0x460d1340  add.s       $f13, $f2, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28F894u, 0x28F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F89Cu;
label_28f89c:
    // 0x28f89c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x28f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28f8a0: 0x2642ac50  addiu       $v0, $s2, -0x53B0
    ctx->pc = 0x28f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945872));
    // 0x28f8a4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x28f8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28f8a8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x28f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f8ac: 0xc60e0014  lwc1        $f14, 0x14($s0)
    ctx->pc = 0x28f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28f8b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28f8b4: 0x2442a820  addiu       $v0, $v0, -0x57E0
    ctx->pc = 0x28f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944800));
    // 0x28f8b8: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x28f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f8bc: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x28f8bcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x28f8c0: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x28f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f8c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f8c8: 0xc60f0018  lwc1        $f15, 0x18($s0)
    ctx->pc = 0x28f8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28f8cc: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x28f8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28f8d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28f8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f8d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f8d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28f8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f8dc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x28f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28f8e0: 0xc0da93e  jal         func_36A4F8
    ctx->pc = 0x28F8E0u;
    SET_GPR_U32(ctx, 31, 0x28F8E8u);
    ctx->pc = 0x28F8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F8E0u;
    // 0x28f8e4: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4F8u, 0x28F8E0u, 0x28F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8E8u;
label_28f8e8:
    // 0x28f8e8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x28f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x28f8ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f8f0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28F8F0u;
    {
        const bool branch_taken_0x28f8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8F0u;
        // 0x28f8f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8f0) {
            ctx->pc = 0x28F980u;
            goto label_28f980;
        }
    }
    ctx->pc = 0x28F8F8u;
    // 0x28f8f8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28f8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28f8fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f900: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x28F900u;
    SET_GPR_U32(ctx, 31, 0x28F908u);
    ctx->pc = 0x28F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F900u;
    // 0x28f904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x28F900u, 0x28F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F908u;
label_28f908:
    // 0x28f908: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28f908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28f90c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x28f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f914: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x28f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f918: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x28f918u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x28f91c: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x28f91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x28f920: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x28f920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x28f924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28f924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f928: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x28f928u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x28f92c: 0xc60d003c  lwc1        $f13, 0x3C($s0)
    ctx->pc = 0x28f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f930: 0xc60e0040  lwc1        $f14, 0x40($s0)
    ctx->pc = 0x28f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x28f934: 0xc60f0044  lwc1        $f15, 0x44($s0)
    ctx->pc = 0x28f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28f938: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28f938u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28f93c: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x28F93Cu;
    SET_GPR_U32(ctx, 31, 0x28F944u);
    ctx->pc = 0x28F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F93Cu;
    // 0x28f940: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x28F93Cu, 0x28F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F944u;
label_28f944:
    // 0x28f944: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x28f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28f948: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x28f948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28f94c: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x28f94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x28f950: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x28F950u;
    SET_GPR_U32(ctx, 31, 0x28F958u);
    ctx->pc = 0x28F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F950u;
    // 0x28f954: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x28F950u, 0x28F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F958u;
label_28f958:
    // 0x28f958: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x28f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f95c: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x28f95cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x28f960: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x28f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28f964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f968: 0xc60f0044  lwc1        $f15, 0x44($s0)
    ctx->pc = 0x28f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x28f96c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x28f96cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x28f970: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x28f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x28f974: 0xc60d003c  lwc1        $f13, 0x3C($s0)
    ctx->pc = 0x28f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f978: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x28F978u;
    SET_GPR_U32(ctx, 31, 0x28F980u);
    ctx->pc = 0x28F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F978u;
    // 0x28f97c: 0xc60e0040  lwc1        $f14, 0x40($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x28F978u, 0x28F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F980u;
label_28f980:
    // 0x28f980: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28f980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28f984:
    // 0x28f984: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x28f984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28f988: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28f988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f98c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x28f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28f990: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x28f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f994: 0x3e00008  jr          $ra
    ctx->pc = 0x28F994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F994u;
        // 0x28f998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F99Cu;
    // 0x28f99c: 0x0  nop
    ctx->pc = 0x28f99cu;
    // NOP
    ctx->pc = 0x28f9a0u;
}
