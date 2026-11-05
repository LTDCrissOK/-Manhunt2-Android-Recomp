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

// Function: sub_001A1798
// Address: 0x1a1798 - 0x1a19f0
void sub_001A1798_0x1a1798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1798_0x1a1798");
#endif

    switch (ctx->pc) {
        case 0x1a17b0u: goto label_1a17b0;
        case 0x1a17c0u: goto label_1a17c0;
        case 0x1a17c8u: goto label_1a17c8;
        case 0x1a17d8u: goto label_1a17d8;
        case 0x1a1870u: goto label_1a1870;
        case 0x1a1880u: goto label_1a1880;
        case 0x1a1898u: goto label_1a1898;
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18b4u: goto label_1a18b4;
        case 0x1a18f4u: goto label_1a18f4;
        case 0x1a1904u: goto label_1a1904;
        case 0x1a1914u: goto label_1a1914;
        default: break;
    }

    ctx->pc = 0x1a1798u;

    // 0x1a1798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a179c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a179cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a17a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a17a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a17a8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A17A8u;
    SET_GPR_U32(ctx, 31, 0x1A17B0u);
    ctx->pc = 0x1A17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17A8u;
    // 0x1a17ac: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A17A8u, 0x1A17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17B0u;
label_1a17b0:
    // 0x1a17b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a17b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a17b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17b8: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A17B8u;
    SET_GPR_U32(ctx, 31, 0x1A17C0u);
    ctx->pc = 0x1A17BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17B8u;
    // 0x1a17bc: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A17B8u, 0x1A17C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17C0u;
label_1a17c0:
    // 0x1a17c0: 0xc064e34  jal         func_1938D0
    ctx->pc = 0x1A17C0u;
    SET_GPR_U32(ctx, 31, 0x1A17C8u);
    ctx->pc = 0x1A17C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17C0u;
    // 0x1a17c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1938D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1938D0u, 0x1A17C0u, 0x1A17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17C8u;
label_1a17c8:
    // 0x1a17c8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A17C8u;
    {
        const bool branch_taken_0x1a17c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C8u;
        // 0x1a17cc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17c8) {
            ctx->pc = 0x1A1924u;
            goto label_1a1924;
        }
    }
    ctx->pc = 0x1A17D0u;
    // 0x1a17d0: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A17D0u;
    SET_GPR_U32(ctx, 31, 0x1A17D8u);
    ctx->pc = 0x1A17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17D0u;
    // 0x1a17d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A17D0u, 0x1A17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17D8u;
label_1a17d8:
    // 0x1a17d8: 0xc4540138  lwc1        $f20, 0x138($v0)
    ctx->pc = 0x1a17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a17dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a17e0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a17e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A17E4u;
    {
        const bool branch_taken_0x1a17e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17E4u;
        // 0x1a17e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17e4) {
            ctx->pc = 0x1A1800u;
            goto label_1a1800;
        }
    }
    ctx->pc = 0x1A17ECu;
    // 0x1a17ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a17ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a17f0: 0x0  nop
    ctx->pc = 0x1a17f0u;
    // NOP
    // 0x1a17f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a17f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a17f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A17F8u;
    {
        const bool branch_taken_0x1a17f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a17f8) {
            ctx->pc = 0x1A1818u;
            goto label_1a1818;
        }
    }
    ctx->pc = 0x1A1800u;
label_1a1800:
    // 0x1a1800: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a1804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a1804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a1808: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a1808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a180c: 0x0  nop
    ctx->pc = 0x1a180cu;
    // NOP
    // 0x1a1810: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a1810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a1814: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a1814u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a1818:
    // 0x1a1818: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a1818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a181c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a181cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a1820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1824: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1a1824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1828: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a1828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a182c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a182cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1830: 0x0  nop
    ctx->pc = 0x1a1830u;
    // NOP
    // 0x1a1834: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1834u;
    {
        const bool branch_taken_0x1a1834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1834u;
        // 0x1a1838: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1834) {
            ctx->pc = 0x1A1858u;
            goto label_1a1858;
        }
    }
    ctx->pc = 0x1A183Cu;
    // 0x1a183c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1a1840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1844: 0x0  nop
    ctx->pc = 0x1a1844u;
    // NOP
    // 0x1a1848: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a1848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a184c: 0x0  nop
    ctx->pc = 0x1a184cu;
    // NOP
    // 0x1a1850: 0x45020062  bc1fl       . + 4 + (0x62 << 2)
    ctx->pc = 0x1A1850u;
    {
        const bool branch_taken_0x1a1850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1850) {
            ctx->pc = 0x1A1854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1850u;
            // 0x1a1854: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A19DCu;
            goto label_1a19dc;
        }
    }
    ctx->pc = 0x1A1858u;
label_1a1858:
    // 0x1a1858: 0x8c62f010  lw          $v0, -0xFF0($v1)
    ctx->pc = 0x1a1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963216)));
    // 0x1a185c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a185cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a1860: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1860u;
    {
        const bool branch_taken_0x1a1860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1860) {
            ctx->pc = 0x1A1864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1860u;
            // 0x1a1864: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1888u;
            goto label_1a1888;
        }
    }
    ctx->pc = 0x1A1868u;
    // 0x1a1868: 0xc064c8e  jal         func_193238
    ctx->pc = 0x1A1868u;
    SET_GPR_U32(ctx, 31, 0x1A1870u);
    ctx->pc = 0x1A186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1868u;
    // 0x1a186c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193238u, 0x1A1868u, 0x1A1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1870u;
label_1a1870:
    // 0x1a1870: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1870u;
    {
        const bool branch_taken_0x1a1870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1870) {
            ctx->pc = 0x1A1874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1870u;
            // 0x1a1874: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1888u;
            goto label_1a1888;
        }
    }
    ctx->pc = 0x1A1878u;
    // 0x1a1878: 0xc068eb8  jal         func_1A3AE0
    ctx->pc = 0x1A1878u;
    SET_GPR_U32(ctx, 31, 0x1A1880u);
    ctx->pc = 0x1A187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1878u;
    // 0x1a187c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AE0u, 0x1A1878u, 0x1A1880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1880u;
label_1a1880:
    // 0x1a1880: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1A1880u;
    {
        const bool branch_taken_0x1a1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1880u;
        // 0x1a1884: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1880) {
            ctx->pc = 0x1A19DCu;
            goto label_1a19dc;
        }
    }
    ctx->pc = 0x1A1888u;
label_1a1888:
    // 0x1a1888: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A1888u;
    {
        const bool branch_taken_0x1a1888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1888) {
            ctx->pc = 0x1A188Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1888u;
            // 0x1a188c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A19DCu;
            goto label_1a19dc;
        }
    }
    ctx->pc = 0x1A1890u;
    // 0x1a1890: 0xc064cfe  jal         func_1933F8
    ctx->pc = 0x1A1890u;
    SET_GPR_U32(ctx, 31, 0x1A1898u);
    ctx->pc = 0x1A1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1890u;
    // 0x1a1894: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1933F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1933F8u, 0x1A1890u, 0x1A1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1898u;
label_1a1898:
    // 0x1a1898: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1A1898u;
    {
        const bool branch_taken_0x1a1898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1898u;
        // 0x1a189c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1898) {
            ctx->pc = 0x1A19D8u;
            goto label_1a19d8;
        }
    }
    ctx->pc = 0x1A18A0u;
    // 0x1a18a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a18a4: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1A18A4u;
    SET_GPR_U32(ctx, 31, 0x1A18ACu);
    ctx->pc = 0x1A18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18A4u;
    // 0x1a18a8: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A18A4u, 0x1A18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18ACu;
label_1a18ac:
    // 0x1a18ac: 0xc065976  jal         func_1965D8
    ctx->pc = 0x1A18ACu;
    SET_GPR_U32(ctx, 31, 0x1A18B4u);
    ctx->pc = 0x1A18B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18ACu;
    // 0x1a18b0: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965D8u, 0x1A18ACu, 0x1A18B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18B4u;
label_1a18b4:
    // 0x1a18b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A18B4u;
    {
        const bool branch_taken_0x1a18b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a18b4) {
            ctx->pc = 0x1A18B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A18B4u;
            // 0x1a18b8: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A18DCu;
            goto label_1a18dc;
        }
    }
    ctx->pc = 0x1A18BCu;
    // 0x1a18bc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a18bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1a18c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a18c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a18c4: 0x0  nop
    ctx->pc = 0x1a18c4u;
    // NOP
    // 0x1a18c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a18c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a18cc: 0x0  nop
    ctx->pc = 0x1a18ccu;
    // NOP
    // 0x1a18d0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1A18D0u;
    {
        const bool branch_taken_0x1a18d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18D0u;
        // 0x1a18d4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18d0) {
            ctx->pc = 0x1A1918u;
            goto label_1a1918;
        }
    }
    ctx->pc = 0x1A18D8u;
    // 0x1a18d8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a18dc:
    // 0x1a18dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a18e0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1a18e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1a18e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A18E4u;
    {
        const bool branch_taken_0x1a18e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a18e4) {
            ctx->pc = 0x1A190Cu;
            goto label_1a190c;
        }
    }
    ctx->pc = 0x1A18ECu;
    // 0x1a18ec: 0xc061a12  jal         func_186848
    ctx->pc = 0x1A18ECu;
    SET_GPR_U32(ctx, 31, 0x1A18F4u);
    ctx->pc = 0x1A18F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18ECu;
    // 0x1a18f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A18ECu, 0x1A18F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18F4u;
label_1a18f4:
    // 0x1a18f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a18f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a18f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18fc: 0xc070aa2  jal         func_1C2A88
    ctx->pc = 0x1A18FCu;
    SET_GPR_U32(ctx, 31, 0x1A1904u);
    ctx->pc = 0x1A1900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18FCu;
    // 0x1a1900: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2A88u, 0x1A18FCu, 0x1A1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1904u;
label_1a1904:
    // 0x1a1904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1904u;
    {
        const bool branch_taken_0x1a1904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1904u;
        // 0x1a1908: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1904) {
            ctx->pc = 0x1A1918u;
            goto label_1a1918;
        }
    }
    ctx->pc = 0x1A190Cu;
label_1a190c:
    // 0x1a190c: 0xc068ede  jal         func_1A3B78
    ctx->pc = 0x1A190Cu;
    SET_GPR_U32(ctx, 31, 0x1A1914u);
    ctx->pc = 0x1A1910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A190Cu;
    // 0x1a1910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B78u, 0x1A190Cu, 0x1A1914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1914u;
label_1a1914:
    // 0x1a1914: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1a1918:
    // 0x1a1918: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1a191c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A191Cu;
    {
        const bool branch_taken_0x1a191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A191Cu;
        // 0x1a1920: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a191c) {
            ctx->pc = 0x1A19D8u;
            goto label_1a19d8;
        }
    }
    ctx->pc = 0x1A1924u;
label_1a1924:
    // 0x1a1924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1928: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a1928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1a192c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A192Cu;
    {
        const bool branch_taken_0x1a192c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A192Cu;
        // 0x1a1930: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a192c) {
            ctx->pc = 0x1A1948u;
            goto label_1a1948;
        }
    }
    ctx->pc = 0x1A1934u;
    // 0x1a1934: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a1934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1938: 0x0  nop
    ctx->pc = 0x1a1938u;
    // NOP
    // 0x1a193c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a193cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a1940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1940u;
    {
        const bool branch_taken_0x1a1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1940) {
            ctx->pc = 0x1A1960u;
            goto label_1a1960;
        }
    }
    ctx->pc = 0x1A1948u;
label_1a1948:
    // 0x1a1948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a194c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a1950: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a1950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1954: 0x0  nop
    ctx->pc = 0x1a1954u;
    // NOP
    // 0x1a1958: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a1958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a195c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a195cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a1960:
    // 0x1a1960: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a1960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a1964: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a1964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a1968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a1968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a196c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1a196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1970: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a1970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a1974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a1974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1978: 0x0  nop
    ctx->pc = 0x1a1978u;
    // NOP
    // 0x1a197c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1A197Cu;
    {
        const bool branch_taken_0x1a197c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A197Cu;
        // 0x1a1980: 0x8c822b00  lw          $v0, 0x2B00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a197c) {
            ctx->pc = 0x1A19D8u;
            goto label_1a19d8;
        }
    }
    ctx->pc = 0x1A1984u;
    // 0x1a1984: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1984u;
    {
        const bool branch_taken_0x1a1984 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1984u;
        // 0x1a1988: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1984) {
            ctx->pc = 0x1A19A0u;
            goto label_1a19a0;
        }
    }
    ctx->pc = 0x1A198Cu;
    // 0x1a198c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a198cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1990: 0x0  nop
    ctx->pc = 0x1a1990u;
    // NOP
    // 0x1a1994: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a1994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a1998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1998u;
    {
        const bool branch_taken_0x1a1998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1998) {
            ctx->pc = 0x1A19B8u;
            goto label_1a19b8;
        }
    }
    ctx->pc = 0x1A19A0u;
label_1a19a0:
    // 0x1a19a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a19a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a19a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a19a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a19a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a19a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a19ac: 0x0  nop
    ctx->pc = 0x1a19acu;
    // NOP
    // 0x1a19b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a19b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a19b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a19b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a19b8:
    // 0x1a19b8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a19bc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a19bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a19c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a19c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a19c4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a19c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a19c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a19c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a19cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a19ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a19d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a19d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a19d4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1a19d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1a19d8:
    // 0x1a19d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a19d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a19dc:
    // 0x1a19dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a19dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a19e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a19e4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1a19e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a19e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A19E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19E8u;
        // 0x1a19ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A19E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A19F0u;
}
