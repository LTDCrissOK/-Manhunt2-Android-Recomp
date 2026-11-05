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

// Function: sub_0026FE18
// Address: 0x26fe18 - 0x270000
void sub_0026FE18_0x26fe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FE18_0x26fe18");
#endif

    switch (ctx->pc) {
        case 0x26fe18u: goto label_26fe18;
        case 0x26fe1cu: goto label_26fe1c;
        case 0x26fe20u: goto label_26fe20;
        case 0x26fe24u: goto label_26fe24;
        case 0x26fe28u: goto label_26fe28;
        case 0x26fe2cu: goto label_26fe2c;
        case 0x26fe30u: goto label_26fe30;
        case 0x26fe34u: goto label_26fe34;
        case 0x26fe38u: goto label_26fe38;
        case 0x26fe3cu: goto label_26fe3c;
        case 0x26fe40u: goto label_26fe40;
        case 0x26fe44u: goto label_26fe44;
        case 0x26fe48u: goto label_26fe48;
        case 0x26fe4cu: goto label_26fe4c;
        case 0x26fe50u: goto label_26fe50;
        case 0x26fe54u: goto label_26fe54;
        case 0x26fe58u: goto label_26fe58;
        case 0x26fe5cu: goto label_26fe5c;
        case 0x26fe60u: goto label_26fe60;
        case 0x26fe64u: goto label_26fe64;
        case 0x26fe68u: goto label_26fe68;
        case 0x26fe6cu: goto label_26fe6c;
        case 0x26fe70u: goto label_26fe70;
        case 0x26fe74u: goto label_26fe74;
        case 0x26fe78u: goto label_26fe78;
        case 0x26fe7cu: goto label_26fe7c;
        case 0x26fe80u: goto label_26fe80;
        case 0x26fe84u: goto label_26fe84;
        case 0x26fe88u: goto label_26fe88;
        case 0x26fe8cu: goto label_26fe8c;
        case 0x26fe90u: goto label_26fe90;
        case 0x26fe94u: goto label_26fe94;
        case 0x26fe98u: goto label_26fe98;
        case 0x26fe9cu: goto label_26fe9c;
        case 0x26fea0u: goto label_26fea0;
        case 0x26fea4u: goto label_26fea4;
        case 0x26fea8u: goto label_26fea8;
        case 0x26feacu: goto label_26feac;
        case 0x26feb0u: goto label_26feb0;
        case 0x26feb4u: goto label_26feb4;
        case 0x26feb8u: goto label_26feb8;
        case 0x26febcu: goto label_26febc;
        case 0x26fec0u: goto label_26fec0;
        case 0x26fec4u: goto label_26fec4;
        case 0x26fec8u: goto label_26fec8;
        case 0x26feccu: goto label_26fecc;
        case 0x26fed0u: goto label_26fed0;
        case 0x26fed4u: goto label_26fed4;
        case 0x26fed8u: goto label_26fed8;
        case 0x26fedcu: goto label_26fedc;
        case 0x26fee0u: goto label_26fee0;
        case 0x26fee4u: goto label_26fee4;
        case 0x26fee8u: goto label_26fee8;
        case 0x26feecu: goto label_26feec;
        case 0x26fef0u: goto label_26fef0;
        case 0x26fef4u: goto label_26fef4;
        case 0x26fef8u: goto label_26fef8;
        case 0x26fefcu: goto label_26fefc;
        case 0x26ff00u: goto label_26ff00;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff08u: goto label_26ff08;
        case 0x26ff0cu: goto label_26ff0c;
        case 0x26ff10u: goto label_26ff10;
        case 0x26ff14u: goto label_26ff14;
        case 0x26ff18u: goto label_26ff18;
        case 0x26ff1cu: goto label_26ff1c;
        case 0x26ff20u: goto label_26ff20;
        case 0x26ff24u: goto label_26ff24;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff2cu: goto label_26ff2c;
        case 0x26ff30u: goto label_26ff30;
        case 0x26ff34u: goto label_26ff34;
        case 0x26ff38u: goto label_26ff38;
        case 0x26ff3cu: goto label_26ff3c;
        case 0x26ff40u: goto label_26ff40;
        case 0x26ff44u: goto label_26ff44;
        case 0x26ff48u: goto label_26ff48;
        case 0x26ff4cu: goto label_26ff4c;
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff54u: goto label_26ff54;
        case 0x26ff58u: goto label_26ff58;
        case 0x26ff5cu: goto label_26ff5c;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff64u: goto label_26ff64;
        case 0x26ff68u: goto label_26ff68;
        case 0x26ff6cu: goto label_26ff6c;
        case 0x26ff70u: goto label_26ff70;
        case 0x26ff74u: goto label_26ff74;
        case 0x26ff78u: goto label_26ff78;
        case 0x26ff7cu: goto label_26ff7c;
        case 0x26ff80u: goto label_26ff80;
        case 0x26ff84u: goto label_26ff84;
        case 0x26ff88u: goto label_26ff88;
        case 0x26ff8cu: goto label_26ff8c;
        case 0x26ff90u: goto label_26ff90;
        case 0x26ff94u: goto label_26ff94;
        case 0x26ff98u: goto label_26ff98;
        case 0x26ff9cu: goto label_26ff9c;
        case 0x26ffa0u: goto label_26ffa0;
        case 0x26ffa4u: goto label_26ffa4;
        case 0x26ffa8u: goto label_26ffa8;
        case 0x26ffacu: goto label_26ffac;
        case 0x26ffb0u: goto label_26ffb0;
        case 0x26ffb4u: goto label_26ffb4;
        case 0x26ffb8u: goto label_26ffb8;
        case 0x26ffbcu: goto label_26ffbc;
        case 0x26ffc0u: goto label_26ffc0;
        case 0x26ffc4u: goto label_26ffc4;
        case 0x26ffc8u: goto label_26ffc8;
        case 0x26ffccu: goto label_26ffcc;
        case 0x26ffd0u: goto label_26ffd0;
        case 0x26ffd4u: goto label_26ffd4;
        case 0x26ffd8u: goto label_26ffd8;
        case 0x26ffdcu: goto label_26ffdc;
        case 0x26ffe0u: goto label_26ffe0;
        case 0x26ffe4u: goto label_26ffe4;
        case 0x26ffe8u: goto label_26ffe8;
        case 0x26ffecu: goto label_26ffec;
        case 0x26fff0u: goto label_26fff0;
        case 0x26fff4u: goto label_26fff4;
        case 0x26fff8u: goto label_26fff8;
        case 0x26fffcu: goto label_26fffc;
        default: break;
    }

    ctx->pc = 0x26fe18u;

label_26fe18:
    // 0x26fe18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26fe1c:
    // 0x26fe1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_26fe20:
    // 0x26fe20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_26fe24:
    // 0x26fe24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26fe28:
    // 0x26fe28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26fe2c:
    // 0x26fe2c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26fe30:
    // 0x26fe30: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x26fe30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26fe34:
    // 0x26fe34: 0xc0f70ce  jal         func_3DC338
label_26fe38:
    if (ctx->pc == 0x26FE38u) {
        ctx->pc = 0x26FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE34u;
        // 0x26fe38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE3Cu;
        goto label_26fe3c;
    }
    ctx->pc = 0x26FE34u;
    SET_GPR_U32(ctx, 31, 0x26FE3Cu);
    ctx->pc = 0x26FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE34u;
    // 0x26fe38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26FE34u, 0x26FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE3Cu;
label_26fe3c:
    // 0x26fe3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26fe40:
    if (ctx->pc == 0x26FE40u) {
        ctx->pc = 0x26FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE3Cu;
        // 0x26fe40: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE44u;
        goto label_26fe44;
    }
    ctx->pc = 0x26FE3Cu;
    {
        const bool branch_taken_0x26fe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe3c) {
            ctx->pc = 0x26FE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FE3Cu;
            // 0x26fe40: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FE50u;
            goto label_26fe50;
        }
    }
    ctx->pc = 0x26FE44u;
label_26fe44:
    // 0x26fe44: 0xc0c4900  jal         func_312400
label_26fe48:
    if (ctx->pc == 0x26FE48u) {
        ctx->pc = 0x26FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE44u;
        // 0x26fe48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE4Cu;
        goto label_26fe4c;
    }
    ctx->pc = 0x26FE44u;
    SET_GPR_U32(ctx, 31, 0x26FE4Cu);
    ctx->pc = 0x26FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE44u;
    // 0x26fe48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26FE44u, 0x26FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE4Cu;
label_26fe4c:
    // 0x26fe4c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x26fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26fe50:
    // 0x26fe50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_26fe54:
    // 0x26fe54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26fe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26fe58:
    // 0x26fe58: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_26fe5c:
    if (ctx->pc == 0x26FE5Cu) {
        ctx->pc = 0x26FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE58u;
        // 0x26fe5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE60u;
        goto label_26fe60;
    }
    ctx->pc = 0x26FE58u;
    {
        const bool branch_taken_0x26fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE58u;
        // 0x26fe5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe58) {
            ctx->pc = 0x26FEFCu;
            goto label_26fefc;
        }
    }
    ctx->pc = 0x26FE60u;
label_26fe60:
    // 0x26fe60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26fe60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26fe64:
    // 0x26fe64: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x26fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_26fe68:
    // 0x26fe68: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x26fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fe6c:
    // 0x26fe6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26fe6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26fe70:
    // 0x26fe70: 0x0  nop
    ctx->pc = 0x26fe70u;
    // NOP
label_26fe74:
    // 0x26fe74: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_26fe78:
    if (ctx->pc == 0x26FE78u) {
        ctx->pc = 0x26FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE74u;
        // 0x26fe78: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FE7Cu;
        goto label_26fe7c;
    }
    ctx->pc = 0x26FE74u;
    {
        const bool branch_taken_0x26fe74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE74u;
        // 0x26fe78: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe74) {
            ctx->pc = 0x26FEFCu;
            goto label_26fefc;
        }
    }
    ctx->pc = 0x26FE7Cu;
label_26fe7c:
    // 0x26fe7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fe7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26fe80:
    // 0x26fe80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fe80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26fe84:
    // 0x26fe84: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x26fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_26fe88:
    // 0x26fe88: 0xc46094d4  lwc1        $f0, -0x6B2C($v1)
    ctx->pc = 0x26fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294939860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26fe8c:
    // 0x26fe8c: 0xc44c2450  lwc1        $f12, 0x2450($v0)
    ctx->pc = 0x26fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26fe90:
    // 0x26fe90: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x26fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_26fe94:
    // 0x26fe94: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x26fe94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_26fe98:
    // 0x26fe98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26fe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26fe9c:
    // 0x26fe9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26fe9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26fea0:
    // 0x26fea0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26fea0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_26fea4:
    // 0x26fea4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26fea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26fea8:
    // 0x26fea8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26fea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26feac:
    // 0x26feac: 0xc4802b30  lwc1        $f0, 0x2B30($a0)
    ctx->pc = 0x26feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26feb0:
    // 0x26feb0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26feb4:
    // 0x26feb4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26feb4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_26feb8:
    // 0x26feb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26febc:
    // 0x26febc: 0xc0b15d0  jal         func_2C5740
label_26fec0:
    if (ctx->pc == 0x26FEC0u) {
        ctx->pc = 0x26FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEBCu;
        // 0x26fec0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FEC4u;
        goto label_26fec4;
    }
    ctx->pc = 0x26FEBCu;
    SET_GPR_U32(ctx, 31, 0x26FEC4u);
    ctx->pc = 0x26FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FEBCu;
    // 0x26fec0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x26FEBCu, 0x26FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEC4u;
label_26fec4:
    // 0x26fec4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26fec8:
    // 0x26fec8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26fecc:
    // 0x26fecc: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x26feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_26fed0:
    // 0x26fed0: 0xc0b14ae  jal         func_2C52B8
label_26fed4:
    if (ctx->pc == 0x26FED4u) {
        ctx->pc = 0x26FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FED0u;
        // 0x26fed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FED8u;
        goto label_26fed8;
    }
    ctx->pc = 0x26FED0u;
    SET_GPR_U32(ctx, 31, 0x26FED8u);
    ctx->pc = 0x26FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FED0u;
    // 0x26fed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x26FED0u, 0x26FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FED8u;
label_26fed8:
    // 0x26fed8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x26fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_26fedc:
    // 0x26fedc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_26fee0:
    if (ctx->pc == 0x26FEE0u) {
        ctx->pc = 0x26FEE4u;
        goto label_26fee4;
    }
    ctx->pc = 0x26FEDCu;
    {
        const bool branch_taken_0x26fedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fedc) {
            ctx->pc = 0x26FEF4u;
            goto label_26fef4;
        }
    }
    ctx->pc = 0x26FEE4u;
label_26fee4:
    // 0x26fee4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26fee8:
    // 0x26fee8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26feec:
    // 0x26feec: 0xc076508  jal         func_1D9420
label_26fef0:
    if (ctx->pc == 0x26FEF0u) {
        ctx->pc = 0x26FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEECu;
        // 0x26fef0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FEF4u;
        goto label_26fef4;
    }
    ctx->pc = 0x26FEECu;
    SET_GPR_U32(ctx, 31, 0x26FEF4u);
    ctx->pc = 0x26FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FEECu;
    // 0x26fef0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9420u, 0x26FEECu, 0x26FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEF4u;
label_26fef4:
    // 0x26fef4: 0xc0843aa  jal         func_210EA8
label_26fef8:
    if (ctx->pc == 0x26FEF8u) {
        ctx->pc = 0x26FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEF4u;
        // 0x26fef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FEFCu;
        goto label_26fefc;
    }
    ctx->pc = 0x26FEF4u;
    SET_GPR_U32(ctx, 31, 0x26FEFCu);
    ctx->pc = 0x26FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FEF4u;
    // 0x26fef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x26FEF4u, 0x26FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FEFCu;
label_26fefc:
    // 0x26fefc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x26fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26ff00:
    // 0x26ff00: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x26ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_26ff04:
    // 0x26ff04: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_26ff08:
    if (ctx->pc == 0x26FF08u) {
        ctx->pc = 0x26FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF04u;
        // 0x26ff08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF0Cu;
        goto label_26ff0c;
    }
    ctx->pc = 0x26FF04u;
    {
        const bool branch_taken_0x26ff04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF04u;
        // 0x26ff08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff04) {
            ctx->pc = 0x26FFE8u;
            goto label_26ffe8;
        }
    }
    ctx->pc = 0x26FF0Cu;
label_26ff0c:
    // 0x26ff0c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x26ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26ff10:
    // 0x26ff10: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x26ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26ff14:
    // 0x26ff14: 0xc07466e  jal         func_1D19B8
label_26ff18:
    if (ctx->pc == 0x26FF18u) {
        ctx->pc = 0x26FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF14u;
        // 0x26ff18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF1Cu;
        goto label_26ff1c;
    }
    ctx->pc = 0x26FF14u;
    SET_GPR_U32(ctx, 31, 0x26FF1Cu);
    ctx->pc = 0x26FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF14u;
    // 0x26ff18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x26FF14u, 0x26FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF1Cu;
label_26ff1c:
    // 0x26ff1c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x26ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_26ff20:
    // 0x26ff20: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x26ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_26ff24:
    // 0x26ff24: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_26ff28:
    if (ctx->pc == 0x26FF28u) {
        ctx->pc = 0x26FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF24u;
        // 0x26ff28: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF2Cu;
        goto label_26ff2c;
    }
    ctx->pc = 0x26FF24u;
    {
        const bool branch_taken_0x26ff24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff24) {
            ctx->pc = 0x26FF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF24u;
            // 0x26ff28: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF78u;
            goto label_26ff78;
        }
    }
    ctx->pc = 0x26FF2Cu;
label_26ff2c:
    // 0x26ff2c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x26ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_26ff30:
    // 0x26ff30: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x26ff30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_26ff34:
    // 0x26ff34: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_26ff38:
    if (ctx->pc == 0x26FF38u) {
        ctx->pc = 0x26FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF34u;
        // 0x26ff38: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF3Cu;
        goto label_26ff3c;
    }
    ctx->pc = 0x26FF34u;
    {
        const bool branch_taken_0x26ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ff34) {
            ctx->pc = 0x26FF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF34u;
            // 0x26ff38: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF78u;
            goto label_26ff78;
        }
    }
    ctx->pc = 0x26FF3Cu;
label_26ff3c:
    // 0x26ff3c: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x26ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_26ff40:
    // 0x26ff40: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_26ff44:
    if (ctx->pc == 0x26FF44u) {
        ctx->pc = 0x26FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF40u;
        // 0x26ff44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF48u;
        goto label_26ff48;
    }
    ctx->pc = 0x26FF40u;
    {
        const bool branch_taken_0x26ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff40) {
            ctx->pc = 0x26FF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF40u;
            // 0x26ff44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFECu;
            goto label_26ffec;
        }
    }
    ctx->pc = 0x26FF48u;
label_26ff48:
    // 0x26ff48: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x26ff48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_26ff4c:
    // 0x26ff4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_26ff50:
    // 0x26ff50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26ff54:
    if (ctx->pc == 0x26FF54u) {
        ctx->pc = 0x26FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF50u;
        // 0x26ff54: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF58u;
        goto label_26ff58;
    }
    ctx->pc = 0x26FF50u;
    {
        const bool branch_taken_0x26ff50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ff50) {
            ctx->pc = 0x26FF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF50u;
            // 0x26ff54: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF78u;
            goto label_26ff78;
        }
    }
    ctx->pc = 0x26FF58u;
label_26ff58:
    // 0x26ff58: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x26ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
label_26ff5c:
    // 0x26ff5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ff60:
    // 0x26ff60: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_26ff64:
    if (ctx->pc == 0x26FF64u) {
        ctx->pc = 0x26FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF60u;
        // 0x26ff64: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF68u;
        goto label_26ff68;
    }
    ctx->pc = 0x26FF60u;
    {
        const bool branch_taken_0x26ff60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ff60) {
            ctx->pc = 0x26FF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF60u;
            // 0x26ff64: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FF78u;
            goto label_26ff78;
        }
    }
    ctx->pc = 0x26FF68u;
label_26ff68:
    // 0x26ff68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ff6c:
    // 0x26ff6c: 0xc0848ba  jal         func_2122E8
label_26ff70:
    if (ctx->pc == 0x26FF70u) {
        ctx->pc = 0x26FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF6Cu;
        // 0x26ff70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF74u;
        goto label_26ff74;
    }
    ctx->pc = 0x26FF6Cu;
    SET_GPR_U32(ctx, 31, 0x26FF74u);
    ctx->pc = 0x26FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF6Cu;
    // 0x26ff70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x26FF6Cu, 0x26FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF74u;
label_26ff74:
    // 0x26ff74: 0x8e040250  lw          $a0, 0x250($s0)
    ctx->pc = 0x26ff74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_26ff78:
    // 0x26ff78: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_26ff7c:
    if (ctx->pc == 0x26FF7Cu) {
        ctx->pc = 0x26FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF78u;
        // 0x26ff7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF80u;
        goto label_26ff80;
    }
    ctx->pc = 0x26FF78u;
    {
        const bool branch_taken_0x26ff78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff78) {
            ctx->pc = 0x26FF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF78u;
            // 0x26ff7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFECu;
            goto label_26ffec;
        }
    }
    ctx->pc = 0x26FF80u;
label_26ff80:
    // 0x26ff80: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x26ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_26ff84:
    // 0x26ff84: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_26ff88:
    if (ctx->pc == 0x26FF88u) {
        ctx->pc = 0x26FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF84u;
        // 0x26ff88: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF8Cu;
        goto label_26ff8c;
    }
    ctx->pc = 0x26FF84u;
    {
        const bool branch_taken_0x26ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff84) {
            ctx->pc = 0x26FF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FF84u;
            // 0x26ff88: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FFECu;
            goto label_26ffec;
        }
    }
    ctx->pc = 0x26FF8Cu;
label_26ff8c:
    // 0x26ff8c: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x26ff8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
label_26ff90:
    // 0x26ff90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_26ff94:
    // 0x26ff94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26ff98:
    if (ctx->pc == 0x26FF98u) {
        ctx->pc = 0x26FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF94u;
        // 0x26ff98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FF9Cu;
        goto label_26ff9c;
    }
    ctx->pc = 0x26FF94u;
    {
        const bool branch_taken_0x26ff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF94u;
        // 0x26ff98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff94) {
            ctx->pc = 0x26FFB4u;
            goto label_26ffb4;
        }
    }
    ctx->pc = 0x26FF9Cu;
label_26ff9c:
    // 0x26ff9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ffa0:
    // 0x26ffa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ffa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ffa4:
    // 0x26ffa4: 0xc07400e  jal         func_1D0038
label_26ffa8:
    if (ctx->pc == 0x26FFA8u) {
        ctx->pc = 0x26FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFA4u;
        // 0x26ffa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFACu;
        goto label_26ffac;
    }
    ctx->pc = 0x26FFA4u;
    SET_GPR_U32(ctx, 31, 0x26FFACu);
    ctx->pc = 0x26FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFA4u;
    // 0x26ffa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0038u, 0x26FFA4u, 0x26FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFACu;
label_26ffac:
    // 0x26ffac: 0x1000000f  b           . + 4 + (0xF << 2)
label_26ffb0:
    if (ctx->pc == 0x26FFB0u) {
        ctx->pc = 0x26FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFACu;
        // 0x26ffb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFB4u;
        goto label_26ffb4;
    }
    ctx->pc = 0x26FFACu;
    {
        const bool branch_taken_0x26ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFACu;
        // 0x26ffb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ffac) {
            ctx->pc = 0x26FFECu;
            goto label_26ffec;
        }
    }
    ctx->pc = 0x26FFB4u;
label_26ffb4:
    // 0x26ffb4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26ffb8:
    // 0x26ffb8: 0xc074256  jal         func_1D0958
label_26ffbc:
    if (ctx->pc == 0x26FFBCu) {
        ctx->pc = 0x26FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFB8u;
        // 0x26ffbc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFC0u;
        goto label_26ffc0;
    }
    ctx->pc = 0x26FFB8u;
    SET_GPR_U32(ctx, 31, 0x26FFC0u);
    ctx->pc = 0x26FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFB8u;
    // 0x26ffbc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x26FFB8u, 0x26FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFC0u;
label_26ffc0:
    // 0x26ffc0: 0xc073db6  jal         func_1CF6D8
label_26ffc4:
    if (ctx->pc == 0x26FFC4u) {
        ctx->pc = 0x26FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFC0u;
        // 0x26ffc4: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFC8u;
        goto label_26ffc8;
    }
    ctx->pc = 0x26FFC0u;
    SET_GPR_U32(ctx, 31, 0x26FFC8u);
    ctx->pc = 0x26FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFC0u;
    // 0x26ffc4: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x26FFC0u, 0x26FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFC8u;
label_26ffc8:
    // 0x26ffc8: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x26ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_26ffcc:
    // 0x26ffcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ffccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26ffd0:
    // 0x26ffd0: 0xc0cda26  jal         func_336898
label_26ffd4:
    if (ctx->pc == 0x26FFD4u) {
        ctx->pc = 0x26FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFD0u;
        // 0x26ffd4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFD8u;
        goto label_26ffd8;
    }
    ctx->pc = 0x26FFD0u;
    SET_GPR_U32(ctx, 31, 0x26FFD8u);
    ctx->pc = 0x26FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFD0u;
    // 0x26ffd4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26FFD0u, 0x26FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFD8u;
label_26ffd8:
    // 0x26ffd8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x26ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_26ffdc:
    // 0x26ffdc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x26ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26ffe0:
    // 0x26ffe0: 0x40f809  jalr        $v0
label_26ffe4:
    if (ctx->pc == 0x26FFE4u) {
        ctx->pc = 0x26FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFE0u;
        // 0x26ffe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFE8u;
        goto label_26ffe8;
    }
    ctx->pc = 0x26FFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26FFE8u);
        ctx->pc = 0x26FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFE0u;
        // 0x26ffe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FFE0u, 0x26FFE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FFE8u;
label_26ffe8:
    // 0x26ffe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26ffe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26ffec:
    // 0x26ffec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26ffecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26fff0:
    // 0x26fff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26fff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fff4:
    // 0x26fff4: 0x3e00008  jr          $ra
label_26fff8:
    if (ctx->pc == 0x26FFF8u) {
        ctx->pc = 0x26FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFF4u;
        // 0x26fff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FFFCu;
        goto label_26fffc;
    }
    ctx->pc = 0x26FFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFF4u;
        // 0x26fff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FFFCu;
label_26fffc:
    // 0x26fffc: 0x0  nop
    ctx->pc = 0x26fffcu;
    // NOP
    ctx->pc = 0x270000u;
}
