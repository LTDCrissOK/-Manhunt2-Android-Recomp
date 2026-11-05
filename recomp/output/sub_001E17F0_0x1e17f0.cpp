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

// Function: sub_001E17F0
// Address: 0x1e17f0 - 0x1e19a0
void sub_001E17F0_0x1e17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E17F0_0x1e17f0");
#endif

    switch (ctx->pc) {
        case 0x1e1898u: goto label_1e1898;
        case 0x1e18d0u: goto label_1e18d0;
        case 0x1e18e0u: goto label_1e18e0;
        case 0x1e1900u: goto label_1e1900;
        case 0x1e191cu: goto label_1e191c;
        case 0x1e1954u: goto label_1e1954;
        default: break;
    }

    ctx->pc = 0x1e17f0u;

    // 0x1e17f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e17f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e17f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e17fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e17fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e1800: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1804: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e1804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e1808: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e1808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e180c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e1810: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e1810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e1814: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e1814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e1818: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1e1818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1e181c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e1820: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e1820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1824: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e1824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e1828: 0xe44091cc  swc1        $f0, -0x6E34($v0)
    ctx->pc = 0x1e1828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91CCu, _value); } while (0); }
    // 0x1e182c: 0x7e200000  sq          $zero, 0x0($s1)
    ctx->pc = 0x1e182cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x1e1830: 0x7e200010  sq          $zero, 0x10($s1)
    ctx->pc = 0x1e1830u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 0));
    // 0x1e1834: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1e1834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1e1838: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1e1838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e183c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1e183cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1e1840: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e1840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e1844: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1e1844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1e1848: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e1848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e184c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1e184cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1e1850: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e1850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1854: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1e1854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1e1858: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e1858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e185c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1e185cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1e1860: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1864: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e1864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1868: 0xc440d894  lwc1        $f0, -0x276C($v0)
    ctx->pc = 0x1e1868u;
    { uint32_t bits = FAST_READ32(0x45D894u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e186c: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1e186cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1e1870: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1e1870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x1e1874: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1e1874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1e1878: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1e1878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1e187c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1e187cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1e1880: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1e1880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1e1884: 0xae280044  sw          $t0, 0x44($s1)
    ctx->pc = 0x1e1884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 8));
    // 0x1e1888: 0xae260028  sw          $a2, 0x28($s1)
    ctx->pc = 0x1e1888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 6));
    // 0x1e188c: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x1e188cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x1e1890: 0xc07a3b0  jal         func_1E8EC0
    ctx->pc = 0x1E1890u;
    SET_GPR_U32(ctx, 31, 0x1E1898u);
    ctx->pc = 0x1E1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1890u;
    // 0x1e1894: 0xae270024  sw          $a3, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EC0u, 0x1E1890u, 0x1E1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1898u;
label_1e1898:
    // 0x1e1898: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e1898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e189c: 0x8c6291d0  lw          $v0, -0x6E30($v1)
    ctx->pc = 0x1e189cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91D0u));
    // 0x1e18a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E18A0u;
    {
        const bool branch_taken_0x1e18a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18A0u;
        // 0x1e18a4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18a0) {
            ctx->pc = 0x1E18C4u;
            goto label_1e18c4;
        }
    }
    ctx->pc = 0x1E18A8u;
    // 0x1e18a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e18ac: 0xc44191f8  lwc1        $f1, -0x6E08($v0)
    ctx->pc = 0x1e18acu;
    { uint32_t bits = FAST_READ32(0x3F91F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e18b0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1e18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e18b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e18b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e18b8: 0x0  nop
    ctx->pc = 0x1e18b8u;
    // NOP
    // 0x1e18bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E18BCu;
    {
        const bool branch_taken_0x1e18bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e18bc) {
            ctx->pc = 0x1E18D8u;
            goto label_1e18d8;
        }
    }
    ctx->pc = 0x1E18C4u;
label_1e18c4:
    // 0x1e18c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e18c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18c8: 0xc0784bc  jal         func_1E12F0
    ctx->pc = 0x1E18C8u;
    SET_GPR_U32(ctx, 31, 0x1E18D0u);
    ctx->pc = 0x1E18CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18C8u;
    // 0x1e18cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E12F0u, 0x1E18C8u, 0x1E18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18D0u;
label_1e18d0:
    // 0x1e18d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E18D0u;
    {
        const bool branch_taken_0x1e18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18D0u;
        // 0x1e18d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18d0) {
            ctx->pc = 0x1E1978u;
            goto label_1e1978;
        }
    }
    ctx->pc = 0x1E18D8u;
label_1e18d8:
    // 0x1e18d8: 0xc07a768  jal         func_1E9DA0
    ctx->pc = 0x1E18D8u;
    SET_GPR_U32(ctx, 31, 0x1E18E0u);
    ctx->pc = 0x1E18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18D8u;
    // 0x1e18dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9DA0u, 0x1E18D8u, 0x1E18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18E0u;
label_1e18e0:
    // 0x1e18e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e18e4: 0x8c6291f4  lw          $v0, -0x6E0C($v1)
    ctx->pc = 0x1e18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1e18e8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E18E8u;
    {
        const bool branch_taken_0x1e18e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18E8u;
        // 0x1e18ec: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18e8) {
            ctx->pc = 0x1E192Cu;
            goto label_1e192c;
        }
    }
    ctx->pc = 0x1E18F0u;
    // 0x1e18f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1e18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1e18f4: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x1e18f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x1e18f8: 0x2452c758  addiu       $s2, $v0, -0x38A8
    ctx->pc = 0x1e18f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1e18fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
label_1e1900:
    // 0x1e1900: 0x26671018  addiu       $a3, $s3, 0x1018
    ctx->pc = 0x1e1900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4120));
    // 0x1e1904: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e1904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1908: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e1908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e190c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1e190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e1910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e1914: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x1E1914u;
    SET_GPR_U32(ctx, 31, 0x1E191Cu);
    ctx->pc = 0x1E1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1914u;
    // 0x1e1918: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x1E1914u, 0x1E191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E191Cu;
label_1e191c:
    // 0x1e191c: 0x8ea391f4  lw          $v1, -0x6E0C($s5)
    ctx->pc = 0x1e191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939124)));
    // 0x1e1920: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1e1920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e1924: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E1924u;
    {
        const bool branch_taken_0x1e1924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1924) {
            ctx->pc = 0x1E1928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1924u;
            // 0x1e1928: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1900;
        }
    }
    ctx->pc = 0x1E192Cu;
label_1e192c:
    // 0x1e192c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1e1930: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1E1930u;
    {
        const bool branch_taken_0x1e1930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1930u;
        // 0x1e1934: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1930) {
            ctx->pc = 0x1E196Cu;
            goto label_1e196c;
        }
    }
    ctx->pc = 0x1E1938u;
    // 0x1e1938: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1e1938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1e193c: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x1e193cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1e1940: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1e1944: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e1948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e194c: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1E194Cu;
    SET_GPR_U32(ctx, 31, 0x1E1954u);
    ctx->pc = 0x1E1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E194Cu;
    // 0x1e1950: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1E194Cu, 0x1E1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1954u;
label_1e1954:
    // 0x1e1954: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x1e1954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x1e1958: 0xae3d0024  sw          $sp, 0x24($s1)
    ctx->pc = 0x1e1958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 29));
    // 0x1e195c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e1960: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1e1960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1e1964: 0xc6c091cc  lwc1        $f0, -0x6E34($s6)
    ctx->pc = 0x1e1964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294939084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1968: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1e1968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1e196c:
    // 0x1e196c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e1970: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e1970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1974: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e1974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1978:
    // 0x1e1978: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e1978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e197c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e197cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1980: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e1980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e1984: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e1984u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1988: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e1988u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e198c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1e198cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1990: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e1990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e1994: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1994u;
        // 0x1e1998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E199Cu;
    // 0x1e199c: 0x0  nop
    ctx->pc = 0x1e199cu;
    // NOP
    ctx->pc = 0x1e19a0u;
}
