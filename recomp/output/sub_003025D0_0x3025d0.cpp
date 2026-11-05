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

// Function: sub_003025D0
// Address: 0x3025d0 - 0x302ac0
void sub_003025D0_0x3025d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003025D0_0x3025d0");
#endif

    switch (ctx->pc) {
        case 0x3026f4u: goto label_3026f4;
        case 0x302774u: goto label_302774;
        case 0x3027f8u: goto label_3027f8;
        case 0x302878u: goto label_302878;
        case 0x3028f8u: goto label_3028f8;
        case 0x302a90u: goto label_302a90;
        default: break;
    }

    ctx->pc = 0x3025d0u;

    // 0x3025d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3025d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3025d4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3025d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3025d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3025d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3025dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3025dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3025e0: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x3025e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x3025e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3025e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3025e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3025e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3025ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3025ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3025f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3025f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3025f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3025f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3025f8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3025F8u;
    {
        const bool branch_taken_0x3025f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025F8u;
        // 0x3025fc: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025f8) {
            ctx->pc = 0x30260Cu;
            goto label_30260c;
        }
    }
    ctx->pc = 0x302600u;
    // 0x302600: 0x8e4211d8  lw          $v0, 0x11D8($s2)
    ctx->pc = 0x302600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4568)));
    // 0x302604: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x302604u;
    {
        const bool branch_taken_0x302604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302604) {
            ctx->pc = 0x302608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302604u;
            // 0x302608: 0x8e420334  lw          $v0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30261Cu;
            goto label_30261c;
        }
    }
    ctx->pc = 0x30260Cu;
label_30260c:
    // 0x30260c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302614: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x302614u;
    {
        const bool branch_taken_0x302614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302614u;
        // 0x302618: 0xe62003e0  swc1        $f0, 0x3E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302614) {
            ctx->pc = 0x302A98u;
            goto label_302a98;
        }
    }
    ctx->pc = 0x30261Cu;
label_30261c:
    // 0x30261c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30261cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302620: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x302620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x302624: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x302624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x302628: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x302628u;
    {
        const bool branch_taken_0x302628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302628u;
        // 0x30262c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302628) {
            ctx->pc = 0x30263Cu;
            goto label_30263c;
        }
    }
    ctx->pc = 0x302630u;
    // 0x302630: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x302630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x302634: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302634u;
    {
        const bool branch_taken_0x302634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x302634) {
            ctx->pc = 0x302640u;
            goto label_302640;
        }
    }
    ctx->pc = 0x30263Cu;
label_30263c:
    // 0x30263c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30263cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302640:
    // 0x302640: 0x54a00019  bnel        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x302640u;
    {
        const bool branch_taken_0x302640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x302640) {
            ctx->pc = 0x302644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302640u;
            // 0x302644: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3026A8u;
            goto label_3026a8;
        }
    }
    ctx->pc = 0x302648u;
    // 0x302648: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x302648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x30264c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302650: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x302650u;
    {
        const bool branch_taken_0x302650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x302654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302650u;
        // 0x302654: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302650) {
            ctx->pc = 0x3026A4u;
            goto label_3026a4;
        }
    }
    ctx->pc = 0x302658u;
    // 0x302658: 0x50820013  beql        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x302658u;
    {
        const bool branch_taken_0x302658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x302658) {
            ctx->pc = 0x30265Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302658u;
            // 0x30265c: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3026A8u;
            goto label_3026a8;
        }
    }
    ctx->pc = 0x302660u;
    // 0x302660: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x302660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x302664: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x302664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x302668: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x302668u;
    {
        const bool branch_taken_0x302668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302668) {
            ctx->pc = 0x30266Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302668u;
            // 0x30266c: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3026A8u;
            goto label_3026a8;
        }
    }
    ctx->pc = 0x302670u;
    // 0x302670: 0x8e4211c0  lw          $v0, 0x11C0($s2)
    ctx->pc = 0x302670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x302674: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x302674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x302678: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x302678u;
    {
        const bool branch_taken_0x302678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302678u;
        // 0x30267c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302678) {
            ctx->pc = 0x3026A4u;
            goto label_3026a4;
        }
    }
    ctx->pc = 0x302680u;
    // 0x302680: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x302680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x302684: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x302684u;
    {
        const bool branch_taken_0x302684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302684u;
        // 0x302688: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302684) {
            ctx->pc = 0x3026A4u;
            goto label_3026a4;
        }
    }
    ctx->pc = 0x30268Cu;
    // 0x30268c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30268Cu;
    {
        const bool branch_taken_0x30268c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30268Cu;
        // 0x302690: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30268c) {
            ctx->pc = 0x3026A4u;
            goto label_3026a4;
        }
    }
    ctx->pc = 0x302694u;
    // 0x302694: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302694u;
    {
        const bool branch_taken_0x302694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302694u;
        // 0x302698: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302694) {
            ctx->pc = 0x3026A4u;
            goto label_3026a4;
        }
    }
    ctx->pc = 0x30269Cu;
    // 0x30269c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30269Cu;
    {
        const bool branch_taken_0x30269c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3026A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30269Cu;
        // 0x3026a0: 0x2482fffa  addiu       $v0, $a0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30269c) {
            ctx->pc = 0x3026D0u;
            goto label_3026d0;
        }
    }
    ctx->pc = 0x3026A4u;
label_3026a4:
    // 0x3026a4: 0xc62003e0  lwc1        $f0, 0x3E0($s1)
    ctx->pc = 0x3026a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3026a8:
    // 0x3026a8: 0xc6210414  lwc1        $f1, 0x414($s1)
    ctx->pc = 0x3026a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3026acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3026b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3026b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3026b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3026b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3026b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3026b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3026bc: 0x0  nop
    ctx->pc = 0x3026bcu;
    // NOP
    // 0x3026c0: 0x450000f5  bc1f        . + 4 + (0xF5 << 2)
    ctx->pc = 0x3026C0u;
    {
        const bool branch_taken_0x3026c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3026C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026C0u;
        // 0x3026c4: 0xe62003e0  swc1        $f0, 0x3E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026c0) {
            ctx->pc = 0x302A98u;
            goto label_302a98;
        }
    }
    ctx->pc = 0x3026C8u;
    // 0x3026c8: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x3026C8u;
    {
        const bool branch_taken_0x3026c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3026CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026C8u;
        // 0x3026cc: 0xe62203e0  swc1        $f2, 0x3E0($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026c8) {
            ctx->pc = 0x302A98u;
            goto label_302a98;
        }
    }
    ctx->pc = 0x3026D0u;
label_3026d0:
    // 0x3026d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3026d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3026d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3026d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3026d8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3026D8u;
    {
        const bool branch_taken_0x3026d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3026DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3026D8u;
        // 0x3026dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3026d8) {
            ctx->pc = 0x302714u;
            goto label_302714;
        }
    }
    ctx->pc = 0x3026E0u;
    // 0x3026e0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3026e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3026e4: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3026E4u;
    {
        const bool branch_taken_0x3026e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3026e4) {
            ctx->pc = 0x3026E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3026E4u;
            // 0x3026e8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302718u;
            goto label_302718;
        }
    }
    ctx->pc = 0x3026ECu;
    // 0x3026ec: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x3026ECu;
    SET_GPR_U32(ctx, 31, 0x3026F4u);
    ctx->pc = 0x3026F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3026ECu;
    // 0x3026f0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x3026ECu, 0x3026F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026F4u;
label_3026f4:
    // 0x3026f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3026F4u;
    {
        const bool branch_taken_0x3026f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3026f4) {
            ctx->pc = 0x3026F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3026F4u;
            // 0x3026f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302718u;
            goto label_302718;
        }
    }
    ctx->pc = 0x3026FCu;
    // 0x3026fc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x3026fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302700: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x302700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x302704: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302704u;
    {
        const bool branch_taken_0x302704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302704u;
        // 0x302708: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302704) {
            ctx->pc = 0x302714u;
            goto label_302714;
        }
    }
    ctx->pc = 0x30270Cu;
    // 0x30270c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30270Cu;
    {
        const bool branch_taken_0x30270c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30270c) {
            ctx->pc = 0x302718u;
            goto label_302718;
        }
    }
    ctx->pc = 0x302714u;
label_302714:
    // 0x302714: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x302714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302718:
    // 0x302718: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x302718u;
    {
        const bool branch_taken_0x302718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x302718) {
            ctx->pc = 0x302738u;
            goto label_302738;
        }
    }
    ctx->pc = 0x302720u;
    // 0x302720: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x302720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x302724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x302728: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x302728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30272c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302730: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x302730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x302734: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x302734u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_302738:
    // 0x302738: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x302738u;
    {
        const bool branch_taken_0x302738 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x302738) {
            ctx->pc = 0x30273Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302738u;
            // 0x30273c: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302748u;
            goto label_302748;
        }
    }
    ctx->pc = 0x302740u;
    // 0x302740: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x302740u;
    {
        const bool branch_taken_0x302740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302740u;
        // 0x302744: 0xc62003fc  lwc1        $f0, 0x3FC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302740) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x302748u;
label_302748:
    // 0x302748: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x302748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30274c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x30274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302750: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x302750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x302754: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x302754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x302758: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x302758u;
    {
        const bool branch_taken_0x302758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302758u;
        // 0x30275c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302758) {
            ctx->pc = 0x302794u;
            goto label_302794;
        }
    }
    ctx->pc = 0x302760u;
    // 0x302760: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x302760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x302764: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x302764u;
    {
        const bool branch_taken_0x302764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302764) {
            ctx->pc = 0x302768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302764u;
            // 0x302768: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302798u;
            goto label_302798;
        }
    }
    ctx->pc = 0x30276Cu;
    // 0x30276c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x30276Cu;
    SET_GPR_U32(ctx, 31, 0x302774u);
    ctx->pc = 0x302770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30276Cu;
    // 0x302770: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x30276Cu, 0x302774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302774u;
label_302774:
    // 0x302774: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x302774u;
    {
        const bool branch_taken_0x302774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302774) {
            ctx->pc = 0x302778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302774u;
            // 0x302778: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302798u;
            goto label_302798;
        }
    }
    ctx->pc = 0x30277Cu;
    // 0x30277c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x30277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302780: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x302780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x302784: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302784u;
    {
        const bool branch_taken_0x302784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302784u;
        // 0x302788: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302784) {
            ctx->pc = 0x302794u;
            goto label_302794;
        }
    }
    ctx->pc = 0x30278Cu;
    // 0x30278c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30278Cu;
    {
        const bool branch_taken_0x30278c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30278c) {
            ctx->pc = 0x302798u;
            goto label_302798;
        }
    }
    ctx->pc = 0x302794u;
label_302794:
    // 0x302794: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x302794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302798:
    // 0x302798: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x302798u;
    {
        const bool branch_taken_0x302798 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x302798) {
            ctx->pc = 0x3027BCu;
            goto label_3027bc;
        }
    }
    ctx->pc = 0x3027A0u;
    // 0x3027a0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x3027a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3027a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3027a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3027a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3027a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3027ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3027acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3027b0: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x3027b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x3027b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3027B4u;
    {
        const bool branch_taken_0x3027b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3027b4) {
            ctx->pc = 0x3027B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3027B4u;
            // 0x3027b8: 0x2854003d  slti        $s4, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3027BCu;
            goto label_3027bc;
        }
    }
    ctx->pc = 0x3027BCu;
label_3027bc:
    // 0x3027bc: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3027BCu;
    {
        const bool branch_taken_0x3027bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3027bc) {
            ctx->pc = 0x3027C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3027BCu;
            // 0x3027c0: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3027CCu;
            goto label_3027cc;
        }
    }
    ctx->pc = 0x3027C4u;
    // 0x3027c4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3027C4u;
    {
        const bool branch_taken_0x3027c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027C4u;
        // 0x3027c8: 0xc62003f0  lwc1        $f0, 0x3F0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027c4) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x3027CCu;
label_3027cc:
    // 0x3027cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3027ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027d0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x3027d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3027d4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x3027d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x3027d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3027d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3027dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3027DCu;
    {
        const bool branch_taken_0x3027dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3027E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027DCu;
        // 0x3027e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027dc) {
            ctx->pc = 0x302818u;
            goto label_302818;
        }
    }
    ctx->pc = 0x3027E4u;
    // 0x3027e4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3027e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3027e8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3027E8u;
    {
        const bool branch_taken_0x3027e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3027e8) {
            ctx->pc = 0x3027ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3027E8u;
            // 0x3027ec: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30281Cu;
            goto label_30281c;
        }
    }
    ctx->pc = 0x3027F0u;
    // 0x3027f0: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x3027F0u;
    SET_GPR_U32(ctx, 31, 0x3027F8u);
    ctx->pc = 0x3027F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027F0u;
    // 0x3027f4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x3027F0u, 0x3027F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027F8u;
label_3027f8:
    // 0x3027f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3027F8u;
    {
        const bool branch_taken_0x3027f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3027f8) {
            ctx->pc = 0x3027FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3027F8u;
            // 0x3027fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30281Cu;
            goto label_30281c;
        }
    }
    ctx->pc = 0x302800u;
    // 0x302800: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x302800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302804: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x302804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x302808: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302808u;
    {
        const bool branch_taken_0x302808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302808u;
        // 0x30280c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302808) {
            ctx->pc = 0x302818u;
            goto label_302818;
        }
    }
    ctx->pc = 0x302810u;
    // 0x302810: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302810u;
    {
        const bool branch_taken_0x302810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x302810) {
            ctx->pc = 0x30281Cu;
            goto label_30281c;
        }
    }
    ctx->pc = 0x302818u;
label_302818:
    // 0x302818: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x302818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30281c:
    // 0x30281c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x30281Cu;
    {
        const bool branch_taken_0x30281c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x30281c) {
            ctx->pc = 0x30283Cu;
            goto label_30283c;
        }
    }
    ctx->pc = 0x302824u;
    // 0x302824: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x302824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x302828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30282c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x302830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x302830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302834: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x302834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x302838: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x302838u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30283c:
    // 0x30283c: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30283Cu;
    {
        const bool branch_taken_0x30283c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x30283c) {
            ctx->pc = 0x302840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30283Cu;
            // 0x302840: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30284Cu;
            goto label_30284c;
        }
    }
    ctx->pc = 0x302844u;
    // 0x302844: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x302844u;
    {
        const bool branch_taken_0x302844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302844u;
        // 0x302848: 0xc62003f8  lwc1        $f0, 0x3F8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302844) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x30284Cu;
label_30284c:
    // 0x30284c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30284cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302850: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x302850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302854: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x302854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x302858: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x302858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30285c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30285Cu;
    {
        const bool branch_taken_0x30285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30285Cu;
        // 0x302860: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30285c) {
            ctx->pc = 0x302898u;
            goto label_302898;
        }
    }
    ctx->pc = 0x302864u;
    // 0x302864: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x302864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x302868: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x302868u;
    {
        const bool branch_taken_0x302868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302868) {
            ctx->pc = 0x30286Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302868u;
            // 0x30286c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30289Cu;
            goto label_30289c;
        }
    }
    ctx->pc = 0x302870u;
    // 0x302870: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x302870u;
    SET_GPR_U32(ctx, 31, 0x302878u);
    ctx->pc = 0x302874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302870u;
    // 0x302874: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x302870u, 0x302878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302878u;
label_302878:
    // 0x302878: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x302878u;
    {
        const bool branch_taken_0x302878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302878) {
            ctx->pc = 0x30287Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302878u;
            // 0x30287c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30289Cu;
            goto label_30289c;
        }
    }
    ctx->pc = 0x302880u;
    // 0x302880: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x302880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302884: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x302888: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302888u;
    {
        const bool branch_taken_0x302888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302888u;
        // 0x30288c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302888) {
            ctx->pc = 0x302898u;
            goto label_302898;
        }
    }
    ctx->pc = 0x302890u;
    // 0x302890: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302890u;
    {
        const bool branch_taken_0x302890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x302890) {
            ctx->pc = 0x30289Cu;
            goto label_30289c;
        }
    }
    ctx->pc = 0x302898u;
label_302898:
    // 0x302898: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x302898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30289c:
    // 0x30289c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x30289Cu;
    {
        const bool branch_taken_0x30289c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x30289c) {
            ctx->pc = 0x3028BCu;
            goto label_3028bc;
        }
    }
    ctx->pc = 0x3028A4u;
    // 0x3028a4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x3028a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3028a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3028ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3028acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3028b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3028b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3028b4: 0x38630045  xori        $v1, $v1, 0x45
    ctx->pc = 0x3028b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
    // 0x3028b8: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x3028b8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3028bc:
    // 0x3028bc: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3028BCu;
    {
        const bool branch_taken_0x3028bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3028bc) {
            ctx->pc = 0x3028C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3028BCu;
            // 0x3028c0: 0x8e500334  lw          $s0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3028CCu;
            goto label_3028cc;
        }
    }
    ctx->pc = 0x3028C4u;
    // 0x3028c4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3028C4u;
    {
        const bool branch_taken_0x3028c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3028C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028C4u;
        // 0x3028c8: 0xc62003ec  lwc1        $f0, 0x3EC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028c4) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x3028CCu;
label_3028cc:
    // 0x3028cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3028ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028d0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x3028d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3028d4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x3028d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x3028d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3028d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3028dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3028DCu;
    {
        const bool branch_taken_0x3028dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3028E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028DCu;
        // 0x3028e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3028dc) {
            ctx->pc = 0x302918u;
            goto label_302918;
        }
    }
    ctx->pc = 0x3028E4u;
    // 0x3028e4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3028e8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3028E8u;
    {
        const bool branch_taken_0x3028e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3028e8) {
            ctx->pc = 0x3028ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3028E8u;
            // 0x3028ec: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30291Cu;
            goto label_30291c;
        }
    }
    ctx->pc = 0x3028F0u;
    // 0x3028f0: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x3028F0u;
    SET_GPR_U32(ctx, 31, 0x3028F8u);
    ctx->pc = 0x3028F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3028F0u;
    // 0x3028f4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x3028F0u, 0x3028F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3028F8u;
label_3028f8:
    // 0x3028f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3028F8u;
    {
        const bool branch_taken_0x3028f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3028f8) {
            ctx->pc = 0x3028FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3028F8u;
            // 0x3028fc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30291Cu;
            goto label_30291c;
        }
    }
    ctx->pc = 0x302900u;
    // 0x302900: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x302900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302904: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x302904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x302908: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302908u;
    {
        const bool branch_taken_0x302908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302908u;
        // 0x30290c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302908) {
            ctx->pc = 0x302918u;
            goto label_302918;
        }
    }
    ctx->pc = 0x302910u;
    // 0x302910: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x302910u;
    {
        const bool branch_taken_0x302910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x302910) {
            ctx->pc = 0x30291Cu;
            goto label_30291c;
        }
    }
    ctx->pc = 0x302918u;
label_302918:
    // 0x302918: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x302918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30291c:
    // 0x30291c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x30291Cu;
    {
        const bool branch_taken_0x30291c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x30291c) {
            ctx->pc = 0x30293Cu;
            goto label_30293c;
        }
    }
    ctx->pc = 0x302924u;
    // 0x302924: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x302924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x302928: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x302928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30292c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x302930: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x302930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302934: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x302934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
    // 0x302938: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x302938u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30293c:
    // 0x30293c: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30293Cu;
    {
        const bool branch_taken_0x30293c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x30293c) {
            ctx->pc = 0x302940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30293Cu;
            // 0x302940: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30294Cu;
            goto label_30294c;
        }
    }
    ctx->pc = 0x302944u;
    // 0x302944: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x302944u;
    {
        const bool branch_taken_0x302944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302944u;
        // 0x302948: 0xc62003f4  lwc1        $f0, 0x3F4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302944) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x30294Cu;
label_30294c:
    // 0x30294c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x302950: 0x38620045  xori        $v0, $v1, 0x45
    ctx->pc = 0x302950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)69);
    // 0x302954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302954u;
    {
        const bool branch_taken_0x302954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302954u;
        // 0x302958: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302954) {
            ctx->pc = 0x302964u;
            goto label_302964;
        }
    }
    ctx->pc = 0x30295Cu;
    // 0x30295c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30295Cu;
    {
        const bool branch_taken_0x30295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30295Cu;
        // 0x302960: 0xc6200404  lwc1        $f0, 0x404($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30295c) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x302964u;
label_302964:
    // 0x302964: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x302964u;
    {
        const bool branch_taken_0x302964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x302968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302964u;
        // 0x302968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302964) {
            ctx->pc = 0x302988u;
            goto label_302988;
        }
    }
    ctx->pc = 0x30296Cu;
    // 0x30296c: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x30296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x302970: 0x24020796  addiu       $v0, $zero, 0x796
    ctx->pc = 0x302970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1942));
    // 0x302974: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302974u;
    {
        const bool branch_taken_0x302974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302974u;
        // 0x302978: 0x24020799  addiu       $v0, $zero, 0x799 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1945));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302974) {
            ctx->pc = 0x302984u;
            goto label_302984;
        }
    }
    ctx->pc = 0x30297Cu;
    // 0x30297c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30297Cu;
    {
        const bool branch_taken_0x30297c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30297c) {
            ctx->pc = 0x302988u;
            goto label_302988;
        }
    }
    ctx->pc = 0x302984u;
label_302984:
    // 0x302984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x302984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_302988:
    // 0x302988: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x302988u;
    {
        const bool branch_taken_0x302988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x302988) {
            ctx->pc = 0x30298Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302988u;
            // 0x30298c: 0xc6230408  lwc1        $f3, 0x408($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302998u;
            goto label_302998;
        }
    }
    ctx->pc = 0x302990u;
    // 0x302990: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x302990u;
    {
        const bool branch_taken_0x302990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302990u;
        // 0x302994: 0xc6200400  lwc1        $f0, 0x400($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302990) {
            ctx->pc = 0x3029E8u;
            goto label_3029e8;
        }
    }
    ctx->pc = 0x302998u;
label_302998:
    // 0x302998: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x302998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x30299c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x30299cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x3029a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3029a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3029a4: 0xe62303e0  swc1        $f3, 0x3E0($s1)
    ctx->pc = 0x3029a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
    // 0x3029a8: 0xc6400524  lwc1        $f0, 0x524($s2)
    ctx->pc = 0x3029a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3029ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3029acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3029b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3029b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029b4: 0x0  nop
    ctx->pc = 0x3029b4u;
    // NOP
    // 0x3029b8: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x3029B8u;
    {
        const bool branch_taken_0x3029b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3029b8) {
            ctx->pc = 0x3029BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3029B8u;
            // 0x3029bc: 0xc6400500  lwc1        $f0, 0x500($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3029F0u;
            goto label_3029f0;
        }
    }
    ctx->pc = 0x3029C0u;
    // 0x3029c0: 0xc6210410  lwc1        $f1, 0x410($s1)
    ctx->pc = 0x3029c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3029c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3029c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029c8: 0x0  nop
    ctx->pc = 0x3029c8u;
    // NOP
    // 0x3029cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3029CCu;
    {
        const bool branch_taken_0x3029cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3029D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029CCu;
        // 0x3029d0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3029cc) {
            ctx->pc = 0x3029D8u;
            goto label_3029d8;
        }
    }
    ctx->pc = 0x3029D4u;
    // 0x3029d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x3029d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_3029d8:
    // 0x3029d8: 0xc620040c  lwc1        $f0, 0x40C($s1)
    ctx->pc = 0x3029d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3029dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3029dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3029e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3029e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3029e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3029e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3029e8:
    // 0x3029e8: 0xe62003e0  swc1        $f0, 0x3E0($s1)
    ctx->pc = 0x3029e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
    // 0x3029ec: 0xc6400500  lwc1        $f0, 0x500($s2)
    ctx->pc = 0x3029ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3029f0:
    // 0x3029f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3029f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3029f4: 0x0  nop
    ctx->pc = 0x3029f4u;
    // NOP
    // 0x3029f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3029f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3029fc: 0x0  nop
    ctx->pc = 0x3029fcu;
    // NOP
    // 0x302a00: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x302A00u;
    {
        const bool branch_taken_0x302a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302a00) {
            ctx->pc = 0x302A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A00u;
            // 0x302a04: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A54u;
            goto label_302a54;
        }
    }
    ctx->pc = 0x302A08u;
    // 0x302a08: 0xc6401284  lwc1        $f0, 0x1284($s2)
    ctx->pc = 0x302a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x302a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302a10: 0x0  nop
    ctx->pc = 0x302a10u;
    // NOP
    // 0x302a14: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x302A14u;
    {
        const bool branch_taken_0x302a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302a14) {
            ctx->pc = 0x302A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A14u;
            // 0x302a18: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A54u;
            goto label_302a54;
        }
    }
    ctx->pc = 0x302A1Cu;
    // 0x302a1c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x302a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x302a20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x302a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302a24: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x302a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x302a28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302A28u;
    {
        const bool branch_taken_0x302a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x302A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A28u;
        // 0x302a2c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a28) {
            ctx->pc = 0x302A40u;
            goto label_302a40;
        }
    }
    ctx->pc = 0x302A30u;
    // 0x302a30: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x302a34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x302A34u;
    {
        const bool branch_taken_0x302a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302a34) {
            ctx->pc = 0x302A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A34u;
            // 0x302a38: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A54u;
            goto label_302a54;
        }
    }
    ctx->pc = 0x302A3Cu;
    // 0x302a3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x302a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_302a40:
    // 0x302a40: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302A40u;
    {
        const bool branch_taken_0x302a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x302A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A40u;
        // 0x302a44: 0xc62003e0  lwc1        $f0, 0x3E0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a40) {
            ctx->pc = 0x302A5Cu;
            goto label_302a5c;
        }
    }
    ctx->pc = 0x302A48u;
    // 0x302a48: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x302a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302A4Cu;
    {
        const bool branch_taken_0x302a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a4c) {
            ctx->pc = 0x302A5Cu;
            goto label_302a5c;
        }
    }
    ctx->pc = 0x302A54u;
label_302a54:
    // 0x302a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x302A54u;
    {
        const bool branch_taken_0x302a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A54u;
        // 0x302a58: 0xc62103e8  lwc1        $f1, 0x3E8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a54) {
            ctx->pc = 0x302A60u;
            goto label_302a60;
        }
    }
    ctx->pc = 0x302A5Cu;
label_302a5c:
    // 0x302a5c: 0xc62103e4  lwc1        $f1, 0x3E4($s1)
    ctx->pc = 0x302a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_302a60:
    // 0x302a60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302a64: 0xe62003e0  swc1        $f0, 0x3E0($s1)
    ctx->pc = 0x302a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
    // 0x302a68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x302a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x302a6c: 0xc62c03e0  lwc1        $f12, 0x3E0($s1)
    ctx->pc = 0x302a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302a70: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x302a70u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302a74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302a78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x302a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x302a7c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x302a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x302a80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x302a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302a84: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x302a84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x302a88: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x302A88u;
    SET_GPR_U32(ctx, 31, 0x302A90u);
    ctx->pc = 0x302A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302A88u;
    // 0x302a8c: 0x460d0342  mul.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x302A88u, 0x302A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302A90u;
label_302a90:
    // 0x302a90: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x302a90u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x302a94: 0xe63403e0  swc1        $f20, 0x3E0($s1)
    ctx->pc = 0x302a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 992), bits); }
label_302a98:
    // 0x302a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x302a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x302aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x302aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302aa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x302aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302aa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x302aa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302aac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x302aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x302ab0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x302ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x302ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x302AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302AB4u;
        // 0x302ab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302ABCu;
    // 0x302abc: 0x0  nop
    ctx->pc = 0x302abcu;
    // NOP
    ctx->pc = 0x302ac0u;
}
