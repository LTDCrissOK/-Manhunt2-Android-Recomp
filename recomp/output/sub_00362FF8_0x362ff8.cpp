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

// Function: sub_00362FF8
// Address: 0x362ff8 - 0x3630c8
void sub_00362FF8_0x362ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362FF8_0x362ff8");
#endif

    switch (ctx->pc) {
        case 0x362ff8u: goto label_362ff8;
        case 0x362ffcu: goto label_362ffc;
        case 0x363000u: goto label_363000;
        case 0x363004u: goto label_363004;
        case 0x363008u: goto label_363008;
        case 0x36300cu: goto label_36300c;
        case 0x363010u: goto label_363010;
        case 0x363014u: goto label_363014;
        case 0x363018u: goto label_363018;
        case 0x36301cu: goto label_36301c;
        case 0x363020u: goto label_363020;
        case 0x363024u: goto label_363024;
        case 0x363028u: goto label_363028;
        case 0x36302cu: goto label_36302c;
        case 0x363030u: goto label_363030;
        case 0x363034u: goto label_363034;
        case 0x363038u: goto label_363038;
        case 0x36303cu: goto label_36303c;
        case 0x363040u: goto label_363040;
        case 0x363044u: goto label_363044;
        case 0x363048u: goto label_363048;
        case 0x36304cu: goto label_36304c;
        case 0x363050u: goto label_363050;
        case 0x363054u: goto label_363054;
        case 0x363058u: goto label_363058;
        case 0x36305cu: goto label_36305c;
        case 0x363060u: goto label_363060;
        case 0x363064u: goto label_363064;
        case 0x363068u: goto label_363068;
        case 0x36306cu: goto label_36306c;
        case 0x363070u: goto label_363070;
        case 0x363074u: goto label_363074;
        case 0x363078u: goto label_363078;
        case 0x36307cu: goto label_36307c;
        case 0x363080u: goto label_363080;
        case 0x363084u: goto label_363084;
        case 0x363088u: goto label_363088;
        case 0x36308cu: goto label_36308c;
        case 0x363090u: goto label_363090;
        case 0x363094u: goto label_363094;
        case 0x363098u: goto label_363098;
        case 0x36309cu: goto label_36309c;
        case 0x3630a0u: goto label_3630a0;
        case 0x3630a4u: goto label_3630a4;
        case 0x3630a8u: goto label_3630a8;
        case 0x3630acu: goto label_3630ac;
        case 0x3630b0u: goto label_3630b0;
        case 0x3630b4u: goto label_3630b4;
        case 0x3630b8u: goto label_3630b8;
        case 0x3630bcu: goto label_3630bc;
        case 0x3630c0u: goto label_3630c0;
        case 0x3630c4u: goto label_3630c4;
        default: break;
    }

    ctx->pc = 0x362ff8u;

label_362ff8:
    // 0x362ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_362ffc:
    // 0x362ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_363000:
    // 0x363000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x363000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_363004:
    // 0x363004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363008:
    // 0x363008: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x363008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_36300c:
    // 0x36300c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x36300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_363010:
    // 0x363010: 0x30427001  andi        $v0, $v0, 0x7001
    ctx->pc = 0x363010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28673);
label_363014:
    // 0x363014: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x363014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
label_363018:
    // 0x363018: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_36301c:
    if (ctx->pc == 0x36301Cu) {
        ctx->pc = 0x36301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363018u;
        // 0x36301c: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x363020u;
        goto label_363020;
    }
    ctx->pc = 0x363018u;
    {
        const bool branch_taken_0x363018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363018) {
            ctx->pc = 0x36301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363018u;
            // 0x36301c: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x363038u;
            goto label_363038;
        }
    }
    ctx->pc = 0x363020u;
label_363020:
    // 0x363020: 0x8c6402e4  lw          $a0, 0x2E4($v1)
    ctx->pc = 0x363020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 740)));
label_363024:
    // 0x363024: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x363024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_363028:
    // 0x363028: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x363028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_36302c:
    // 0x36302c: 0x40f809  jalr        $v0
label_363030:
    if (ctx->pc == 0x363030u) {
        ctx->pc = 0x363034u;
        goto label_363034;
    }
    ctx->pc = 0x36302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36302Cu, 0x363034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363034u;
label_363034:
    // 0x363034: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x363034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363038:
    // 0x363038: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x363038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_36303c:
    // 0x36303c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36303cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_363040:
    // 0x363040: 0x0  nop
    ctx->pc = 0x363040u;
    // NOP
label_363044:
    // 0x363044: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x363044u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363048:
    // 0x363048: 0x0  nop
    ctx->pc = 0x363048u;
    // NOP
label_36304c:
    // 0x36304c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_363050:
    if (ctx->pc == 0x363050u) {
        ctx->pc = 0x363050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36304Cu;
        // 0x363050: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x363054u;
        goto label_363054;
    }
    ctx->pc = 0x36304Cu;
    {
        const bool branch_taken_0x36304c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36304c) {
            ctx->pc = 0x363050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36304Cu;
            // 0x363050: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x363068u;
            goto label_363068;
        }
    }
    ctx->pc = 0x363054u;
label_363054:
    // 0x363054: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x363054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_363058:
    // 0x363058: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x363058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36305c:
    // 0x36305c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36305cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_363060:
    // 0x363060: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x363060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_363064:
    // 0x363064: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x363064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363068:
    // 0x363068: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x363068u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36306c:
    // 0x36306c: 0x0  nop
    ctx->pc = 0x36306cu;
    // NOP
label_363070:
    // 0x363070: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_363074:
    if (ctx->pc == 0x363074u) {
        ctx->pc = 0x363074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363070u;
        // 0x363074: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363078u;
        goto label_363078;
    }
    ctx->pc = 0x363070u;
    {
        const bool branch_taken_0x363070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363070) {
            ctx->pc = 0x363074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363070u;
            // 0x363074: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3630A0u;
            goto label_3630a0;
        }
    }
    ctx->pc = 0x363078u;
label_363078:
    // 0x363078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x363078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36307c:
    // 0x36307c: 0x0  nop
    ctx->pc = 0x36307cu;
    // NOP
label_363080:
    // 0x363080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363084:
    // 0x363084: 0x0  nop
    ctx->pc = 0x363084u;
    // NOP
label_363088:
    // 0x363088: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_36308c:
    if (ctx->pc == 0x36308Cu) {
        ctx->pc = 0x36308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363088u;
        // 0x36308c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363090u;
        goto label_363090;
    }
    ctx->pc = 0x363088u;
    {
        const bool branch_taken_0x363088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363088) {
            ctx->pc = 0x36308Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363088u;
            // 0x36308c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3630A0u;
            goto label_3630a0;
        }
    }
    ctx->pc = 0x363090u;
label_363090:
    // 0x363090: 0xc0d8a28  jal         func_3628A0
label_363094:
    if (ctx->pc == 0x363094u) {
        ctx->pc = 0x363094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363090u;
        // 0x363094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363098u;
        goto label_363098;
    }
    ctx->pc = 0x363090u;
    SET_GPR_U32(ctx, 31, 0x363098u);
    ctx->pc = 0x363094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363090u;
    // 0x363094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3628A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3628A0u, 0x363090u, 0x363098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363098u;
label_363098:
    // 0x363098: 0x10000008  b           . + 4 + (0x8 << 2)
label_36309c:
    if (ctx->pc == 0x36309Cu) {
        ctx->pc = 0x36309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363098u;
        // 0x36309c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3630A0u;
        goto label_3630a0;
    }
    ctx->pc = 0x363098u;
    {
        const bool branch_taken_0x363098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363098u;
        // 0x36309c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363098) {
            ctx->pc = 0x3630BCu;
            goto label_3630bc;
        }
    }
    ctx->pc = 0x3630A0u;
label_3630a0:
    // 0x3630a0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3630a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3630a4:
    // 0x3630a4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3630a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3630a8:
    // 0x3630a8: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_3630ac:
    if (ctx->pc == 0x3630ACu) {
        ctx->pc = 0x3630ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630A8u;
        // 0x3630ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3630B0u;
        goto label_3630b0;
    }
    ctx->pc = 0x3630A8u;
    {
        const bool branch_taken_0x3630a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3630a8) {
            ctx->pc = 0x3630ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3630A8u;
            // 0x3630ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3630BCu;
            goto label_3630bc;
        }
    }
    ctx->pc = 0x3630B0u;
label_3630b0:
    // 0x3630b0: 0xc0d8a3a  jal         func_3628E8
label_3630b4:
    if (ctx->pc == 0x3630B4u) {
        ctx->pc = 0x3630B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630B0u;
        // 0x3630b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3630B8u;
        goto label_3630b8;
    }
    ctx->pc = 0x3630B0u;
    SET_GPR_U32(ctx, 31, 0x3630B8u);
    ctx->pc = 0x3630B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630B0u;
    // 0x3630b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3628E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3628E8u, 0x3630B0u, 0x3630B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630B8u;
label_3630b8:
    // 0x3630b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3630b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3630bc:
    // 0x3630bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3630bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3630c0:
    // 0x3630c0: 0x3e00008  jr          $ra
label_3630c4:
    if (ctx->pc == 0x3630C4u) {
        ctx->pc = 0x3630C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630C0u;
        // 0x3630c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3630C8u;
        goto label_fallthrough_0x3630c0;
    }
    ctx->pc = 0x3630C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3630C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630C0u;
        // 0x3630c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3630C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3630c0:
    ctx->pc = 0x3630C8u;
}
