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

// Function: sub_003741D8
// Address: 0x3741d8 - 0x3743f8
void sub_003741D8_0x3741d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003741D8_0x3741d8");
#endif

    switch (ctx->pc) {
        case 0x3742bcu: goto label_3742bc;
        case 0x3743b4u: goto label_3743b4;
        case 0x3743c0u: goto label_3743c0;
        default: break;
    }

    ctx->pc = 0x3741d8u;

    // 0x3741d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3741d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3741dc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3741dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3741e0: 0x8c43cd30  lw          $v1, -0x32D0($v0)
    ctx->pc = 0x3741e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD30u));
    // 0x3741e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3741e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3741e8: 0x24c6cd28  addiu       $a2, $a2, -0x32D8
    ctx->pc = 0x3741e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954280));
    // 0x3741ec: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3741ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3741f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3741f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3741f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3741f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3741f8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x3741f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3741fc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x3741fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x374200: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x374200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x374204: 0x24e7cd20  addiu       $a3, $a3, -0x32E0
    ctx->pc = 0x374204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954272));
    // 0x374208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37420c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x37420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x374210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x374210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374214: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x374214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x374218: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x374218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37421c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374220: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x374220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x374224: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x374224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374228: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x374228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37422c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37422cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x374230: 0x0  nop
    ctx->pc = 0x374230u;
    // NOP
    // 0x374234: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x374234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x374238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x374238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37423c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37423cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x374240: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x374240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x374244: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x374244u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x374248: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x374248u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x37424c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37424cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x374250: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x374250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x374254: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x374254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x374258: 0x246b6038  addiu       $t3, $v1, 0x6038
    ctx->pc = 0x374258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 24632));
    // 0x37425c: 0x6a080007  ldl         $t0, 0x7($s0)
    ctx->pc = 0x37425cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x374260: 0x6e080000  ldr         $t0, 0x0($s0)
    ctx->pc = 0x374260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x374264: 0x6a09000f  ldl         $t1, 0xF($s0)
    ctx->pc = 0x374264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x374268: 0x6e090008  ldr         $t1, 0x8($s0)
    ctx->pc = 0x374268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x37426c: 0xb1680007  sdl         $t0, 0x7($t3)
    ctx->pc = 0x37426cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374270: 0xb5680000  sdr         $t0, 0x0($t3)
    ctx->pc = 0x374270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374274: 0xb169000f  sdl         $t1, 0xF($t3)
    ctx->pc = 0x374274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x374278: 0xb5690008  sdr         $t1, 0x8($t3)
    ctx->pc = 0x374278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37427c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37427cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x374280: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x374280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x374284: 0xac452d50  sw          $a1, 0x2D50($v0)
    ctx->pc = 0x374284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x482D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D50u, _value); } while (0);
    // 0x374288: 0x24c72d48  addiu       $a3, $a2, 0x2D48
    ctx->pc = 0x374288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 11592));
    // 0x37428c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x374290: 0xe4d42d48  swc1        $f20, 0x2D48($a2)
    ctx->pc = 0x374290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D48u, _value); } while (0); }
    // 0x374294: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x374294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x374298: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x374298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x37429c: 0xe4f50004  swc1        $f21, 0x4($a3)
    ctx->pc = 0x37429cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482D4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482D4Cu, _value); } while (0); }
    // 0x3742a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x3742a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x3742a4: 0x46030302  mul.s       $f12, $f0, $f3
    ctx->pc = 0x3742a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3742a8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3742a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x3742ac: 0x46030b42  mul.s       $f13, $f1, $f3
    ctx->pc = 0x3742acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3742b0: 0x24845c00  addiu       $a0, $a0, 0x5C00
    ctx->pc = 0x3742b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    // 0x3742b4: 0xc0decb4  jal         func_37B2D0
    ctx->pc = 0x3742B4u;
    SET_GPR_U32(ctx, 31, 0x3742BCu);
    ctx->pc = 0x3742B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3742B4u;
    // 0x3742b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2D0u, 0x3742B4u, 0x3742BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3742BCu;
label_3742bc:
    // 0x3742bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3742bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3742c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3742c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3742c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3742c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742c8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3742c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3742cc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3742ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3742d0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3742d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3742d4: 0x46030902  mul.s       $f4, $f1, $f3
    ctx->pc = 0x3742d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3742d8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3742d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3742dc: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x3742dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x3742e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3742e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3742e4: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x3742e4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x3742e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3742e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3742ec: 0x4604a500  add.s       $f20, $f20, $f4
    ctx->pc = 0x3742ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x3742f0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3742f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3742f4: 0x0  nop
    ctx->pc = 0x3742f4u;
    // NOP
    // 0x3742f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3742F8u;
    {
        const bool branch_taken_0x3742f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3742FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3742F8u;
        // 0x3742fc: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3742f8) {
            ctx->pc = 0x374318u;
            goto label_374318;
        }
    }
    ctx->pc = 0x374300u;
    // 0x374300: 0x0  nop
    ctx->pc = 0x374300u;
    // NOP
    // 0x374304: 0x0  nop
    ctx->pc = 0x374304u;
    // NOP
    // 0x374308: 0x46142003  div.s       $f0, $f4, $f20
    ctx->pc = 0x374308u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[20]); }
    // 0x37430c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x374310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x374310u;
    {
        const bool branch_taken_0x374310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374310u;
        // 0x374314: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374310) {
            ctx->pc = 0x374330u;
            goto label_374330;
        }
    }
    ctx->pc = 0x374318u;
label_374318:
    // 0x374318: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x374318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x37431c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37431cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374320: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x374320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x374324: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x374324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374328: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x374328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x37432c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x37432cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_374330:
    // 0x374330: 0xe4405da0  swc1        $f0, 0x5DA0($v0)
    ctx->pc = 0x374330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 23968), bits); }
    // 0x374334: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x374334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x374338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x374338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37433c: 0x0  nop
    ctx->pc = 0x37433cu;
    // NOP
    // 0x374340: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x374340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374344: 0x0  nop
    ctx->pc = 0x374344u;
    // NOP
    // 0x374348: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x374348u;
    {
        const bool branch_taken_0x374348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374348u;
        // 0x37434c: 0x24625da0  addiu       $v0, $v1, 0x5DA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374348) {
            ctx->pc = 0x374370u;
            goto label_374370;
        }
    }
    ctx->pc = 0x374350u;
    // 0x374350: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x374350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374354: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x374354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x374358: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x374358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37435c: 0x0  nop
    ctx->pc = 0x37435cu;
    // NOP
    // 0x374360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x374360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x374364: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x374364u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x374368: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x374368u;
    {
        const bool branch_taken_0x374368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374368u;
        // 0x37436c: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x374368) {
            ctx->pc = 0x374394u;
            goto label_374394;
        }
    }
    ctx->pc = 0x374370u;
label_374370:
    // 0x374370: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x374370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374374: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x374378: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x374378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37437c: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x37437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x374380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x374380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374384: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x374384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x374388: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x374388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x37438c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x37438cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x374390: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x374390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_374394:
    // 0x374394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x374394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x374398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x374398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37439c: 0x24625da0  addiu       $v0, $v1, 0x5DA0
    ctx->pc = 0x37439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23968));
    // 0x3743a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3743a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3743a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3743a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3743ac: 0xc0dd25e  jal         func_374978
    ctx->pc = 0x3743ACu;
    SET_GPR_U32(ctx, 31, 0x3743B4u);
    ctx->pc = 0x3743B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3743ACu;
    // 0x3743b0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x374978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374978u, 0x3743ACu, 0x3743B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743B4u;
label_3743b4:
    // 0x3743b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3743b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743b8: 0xc0dd25e  jal         func_374978
    ctx->pc = 0x3743B8u;
    SET_GPR_U32(ctx, 31, 0x3743C0u);
    ctx->pc = 0x3743BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3743B8u;
    // 0x3743bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374978u, 0x3743B8u, 0x3743C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743C0u;
label_3743c0:
    // 0x3743c0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3743c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3743c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3743c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3743c8: 0x8c82cd00  lw          $v0, -0x3300($a0)
    ctx->pc = 0x3743c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x3743cc: 0x8ca3cd34  lw          $v1, -0x32CC($a1)
    ctx->pc = 0x3743ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x3743d0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3743d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3743d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3743d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3743d8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3743d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3743dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3743dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3743e0: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x3743e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3743e4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3743e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3743e8: 0xac82cd00  sw          $v0, -0x3300($a0)
    ctx->pc = 0x3743e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x3743ec: 0xaca3cd34  sw          $v1, -0x32CC($a1)
    ctx->pc = 0x3743ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD34u, _value); } while (0);
    // 0x3743f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3743F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3743F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743F0u;
        // 0x3743f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3743F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3743F8u;
}
