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

// Function: sub_001DF9E8
// Address: 0x1df9e8 - 0x1dfc10
void sub_001DF9E8_0x1df9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF9E8_0x1df9e8");
#endif

    switch (ctx->pc) {
        case 0x1dfa30u: goto label_1dfa30;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfb34u: goto label_1dfb34;
        case 0x1dfb48u: goto label_1dfb48;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfb84u: goto label_1dfb84;
        default: break;
    }

    ctx->pc = 0x1df9e8u;

    // 0x1df9e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1df9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1df9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9f0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1df9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1df9f4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1df9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1df9f8: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1df9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1df9fc: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x1df9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x1dfa00: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1dfa00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa04: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1dfa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1dfa08: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1dfa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1dfa0c: 0x2604c758  addiu       $a0, $s0, -0x38A8
    ctx->pc = 0x1dfa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952792));
    // 0x1dfa10: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1dfa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1dfa14: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1dfa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1dfa18: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1dfa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1dfa1c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1dfa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1dfa20: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1dfa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1dfa24: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1dfa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1dfa28: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1DFA28u;
    SET_GPR_U32(ctx, 31, 0x1DFA30u);
    ctx->pc = 0x1DFA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA28u;
    // 0x1dfa2c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1DFA28u, 0x1DFA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA30u;
label_1dfa30:
    // 0x1dfa30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dfa34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1dfa34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1dfa38: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x1dfa38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x1dfa3c: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1DFA3Cu;
    {
        const bool branch_taken_0x1dfa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA3Cu;
        // 0x1dfa40: 0xaca091f4  sw          $zero, -0x6E0C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa3c) {
            ctx->pc = 0x1DFBC4u;
            goto label_1dfbc4;
        }
    }
    ctx->pc = 0x1DFA44u;
    // 0x1dfa44: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1dfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1dfa48: 0x8c76bd20  lw          $s6, -0x42E0($v1)
    ctx->pc = 0x1dfa48u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x1dfa4c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dfa50: 0x18400061  blez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1DFA50u;
    {
        const bool branch_taken_0x1dfa50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA50u;
        // 0x1dfa54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa50) {
            ctx->pc = 0x1DFBD8u;
            goto label_1dfbd8;
        }
    }
    ctx->pc = 0x1DFA58u;
    // 0x1dfa58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1dfa5c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1dfa5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa60: 0xc454d870  lwc1        $f20, -0x2790($v0)
    ctx->pc = 0x1dfa60u;
    { uint32_t bits = FAST_READ32(0x45D870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dfa64: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfa68: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1dfa68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dfa6c: 0x240301c4  addiu       $v1, $zero, 0x1C4
    ctx->pc = 0x1dfa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
label_1dfa70:
    // 0x1dfa70: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x1dfa74: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1dfa74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dfa78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dfa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfa7c: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x1dfa7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dfa80: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1dfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1dfa84: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFA84u;
    {
        const bool branch_taken_0x1dfa84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA84u;
        // 0x1dfa88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa84) {
            ctx->pc = 0x1DFA90u;
            goto label_1dfa90;
        }
    }
    ctx->pc = 0x1DFA8Cu;
    // 0x1dfa8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfa90:
    // 0x1dfa90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dfa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dfa94: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1DFA94u;
    {
        const bool branch_taken_0x1dfa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA94u;
        // 0x1dfa98: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa94) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFA9Cu;
    // 0x1dfa9c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1dfa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1dfaa0: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1dfaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1dfaa4: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x1dfaa8: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1dfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dfaac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dfab0: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1dfab4: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1dfab4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dfab8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1dfab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfabc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1dfabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dfac0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1dfac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfac4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1dfac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dfac8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1dfac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfacc: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1dfaccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1dfad0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1dfad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfad4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1dfad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1dfad8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1dfad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfadc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1dfadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1dfae0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1dfae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfae4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1dfae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dfae8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1dfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfaec: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1dfaecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dfaf0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x1dfaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1dfaf4: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x1dfaf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1dfaf8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1dfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfafc: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1dfafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1dfb00: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1dfb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb04: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x1dfb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1dfb08: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1dfb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfb0c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1dfb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb10: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1dfb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dfb14: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x1dfb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1dfb18: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1dfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfb1c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1dfb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1dfb20: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1dfb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb24: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFB24u;
    {
        const bool branch_taken_0x1dfb24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB24u;
        // 0x1dfb28: 0xe681000c  swc1        $f1, 0xC($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb24) {
            ctx->pc = 0x1DFB48u;
            goto label_1dfb48;
        }
    }
    ctx->pc = 0x1DFB2Cu;
    // 0x1dfb2c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1DFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB34u);
    ctx->pc = 0x1DFB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB2Cu;
    // 0x1dfb30: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1DFB2Cu, 0x1DFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB34u;
label_1dfb34:
    // 0x1dfb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfb38: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1dfb3c: 0x2464f9e0  addiu       $a0, $v1, -0x620
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965728));
    // 0x1dfb40: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x1DFB40u;
    SET_GPR_U32(ctx, 31, 0x1DFB48u);
    ctx->pc = 0x1DFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB40u;
    // 0x1dfb44: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x1DFB40u, 0x1DFB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB48u;
label_1dfb48:
    // 0x1dfb48: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1dfb4c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1dfb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1dfb50: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dfb50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1dfb54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dfb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dfb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dfb5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb60: 0xc0786de  jal         func_1E1B78
    ctx->pc = 0x1DFB60u;
    SET_GPR_U32(ctx, 31, 0x1DFB68u);
    ctx->pc = 0x1DFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB60u;
    // 0x1dfb64: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1B78u, 0x1DFB60u, 0x1DFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB68u;
label_1dfb68:
    // 0x1dfb68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFB68u;
    {
        const bool branch_taken_0x1dfb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB68u;
        // 0x1dfb6c: 0x8fc291f4  lw          $v0, -0x6E0C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb68) {
            ctx->pc = 0x1DFB8Cu;
            goto label_1dfb8c;
        }
    }
    ctx->pc = 0x1DFB70u;
    // 0x1dfb70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dfb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb78: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dfb7c: 0xc078bee  jal         func_1E2FB8
    ctx->pc = 0x1DFB7Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB84u);
    ctx->pc = 0x1DFB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB7Cu;
    // 0x1dfb80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FB8u, 0x1DFB7Cu, 0x1DFB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB84u;
label_1dfb84:
    // 0x1dfb84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFB84u;
    {
        const bool branch_taken_0x1dfb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB84u;
        // 0x1dfb88: 0x8fc291f4  lw          $v0, -0x6E0C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb84) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFB8Cu;
label_1dfb8c:
    // 0x1dfb8c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x1dfb90: 0x2464c758  addiu       $a0, $v1, -0x38A8
    ctx->pc = 0x1dfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952792));
    // 0x1dfb94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dfb98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dfb9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dfba0: 0xafc291f4  sw          $v0, -0x6E0C($fp)
    ctx->pc = 0x1dfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294939124), GPR_U32(ctx, 2));
    // 0x1dfba4: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1dfba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1dfba8:
    // 0x1dfba8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dfbac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1dfbacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1dfbb0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1dfbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dfbb4: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x1DFBB4u;
    {
        const bool branch_taken_0x1dfbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBB4u;
        // 0x1dfbb8: 0x240301c4  addiu       $v1, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbb4) {
            ctx->pc = 0x1DFA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfa70;
        }
    }
    ctx->pc = 0x1DFBBCu;
    // 0x1dfbbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFBBCu;
    {
        const bool branch_taken_0x1dfbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbbc) {
            ctx->pc = 0x1DFBDCu;
            goto label_1dfbdc;
        }
    }
    ctx->pc = 0x1DFBC4u;
label_1dfbc4:
    // 0x1dfbc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1dfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1dfbc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfbcc: 0x8c44bd28  lw          $a0, -0x42D8($v0)
    ctx->pc = 0x1dfbccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x1dfbd0: 0xaca391f4  sw          $v1, -0x6E0C($a1)
    ctx->pc = 0x1dfbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 3));
    // 0x1dfbd4: 0xae04c758  sw          $a0, -0x38A8($s0)
    ctx->pc = 0x1dfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952792), GPR_U32(ctx, 4));
label_1dfbd8:
    // 0x1dfbd8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1dfbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dfbdc:
    // 0x1dfbdc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1dfbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dfbe0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1dfbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dfbe4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1dfbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1dfbe8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1dfbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfbec: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1dfbecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dfbf0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1dfbf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dfbf4: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1dfbf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dfbf8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1dfbf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dfbfc: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1dfbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dfc00: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1dfc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dfc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC04u;
        // 0x1dfc08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC0Cu;
    // 0x1dfc0c: 0x0  nop
    ctx->pc = 0x1dfc0cu;
    // NOP
    ctx->pc = 0x1dfc10u;
}
