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

// Function: sub_00272DE8
// Address: 0x272de8 - 0x272f20
void sub_00272DE8_0x272de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272DE8_0x272de8");
#endif

    switch (ctx->pc) {
        case 0x272de8u: goto label_272de8;
        case 0x272decu: goto label_272dec;
        case 0x272df0u: goto label_272df0;
        case 0x272df4u: goto label_272df4;
        case 0x272df8u: goto label_272df8;
        case 0x272dfcu: goto label_272dfc;
        case 0x272e00u: goto label_272e00;
        case 0x272e04u: goto label_272e04;
        case 0x272e08u: goto label_272e08;
        case 0x272e0cu: goto label_272e0c;
        case 0x272e10u: goto label_272e10;
        case 0x272e14u: goto label_272e14;
        case 0x272e18u: goto label_272e18;
        case 0x272e1cu: goto label_272e1c;
        case 0x272e20u: goto label_272e20;
        case 0x272e24u: goto label_272e24;
        case 0x272e28u: goto label_272e28;
        case 0x272e2cu: goto label_272e2c;
        case 0x272e30u: goto label_272e30;
        case 0x272e34u: goto label_272e34;
        case 0x272e38u: goto label_272e38;
        case 0x272e3cu: goto label_272e3c;
        case 0x272e40u: goto label_272e40;
        case 0x272e44u: goto label_272e44;
        case 0x272e48u: goto label_272e48;
        case 0x272e4cu: goto label_272e4c;
        case 0x272e50u: goto label_272e50;
        case 0x272e54u: goto label_272e54;
        case 0x272e58u: goto label_272e58;
        case 0x272e5cu: goto label_272e5c;
        case 0x272e60u: goto label_272e60;
        case 0x272e64u: goto label_272e64;
        case 0x272e68u: goto label_272e68;
        case 0x272e6cu: goto label_272e6c;
        case 0x272e70u: goto label_272e70;
        case 0x272e74u: goto label_272e74;
        case 0x272e78u: goto label_272e78;
        case 0x272e7cu: goto label_272e7c;
        case 0x272e80u: goto label_272e80;
        case 0x272e84u: goto label_272e84;
        case 0x272e88u: goto label_272e88;
        case 0x272e8cu: goto label_272e8c;
        case 0x272e90u: goto label_272e90;
        case 0x272e94u: goto label_272e94;
        case 0x272e98u: goto label_272e98;
        case 0x272e9cu: goto label_272e9c;
        case 0x272ea0u: goto label_272ea0;
        case 0x272ea4u: goto label_272ea4;
        case 0x272ea8u: goto label_272ea8;
        case 0x272eacu: goto label_272eac;
        case 0x272eb0u: goto label_272eb0;
        case 0x272eb4u: goto label_272eb4;
        case 0x272eb8u: goto label_272eb8;
        case 0x272ebcu: goto label_272ebc;
        case 0x272ec0u: goto label_272ec0;
        case 0x272ec4u: goto label_272ec4;
        case 0x272ec8u: goto label_272ec8;
        case 0x272eccu: goto label_272ecc;
        case 0x272ed0u: goto label_272ed0;
        case 0x272ed4u: goto label_272ed4;
        case 0x272ed8u: goto label_272ed8;
        case 0x272edcu: goto label_272edc;
        case 0x272ee0u: goto label_272ee0;
        case 0x272ee4u: goto label_272ee4;
        case 0x272ee8u: goto label_272ee8;
        case 0x272eecu: goto label_272eec;
        case 0x272ef0u: goto label_272ef0;
        case 0x272ef4u: goto label_272ef4;
        case 0x272ef8u: goto label_272ef8;
        case 0x272efcu: goto label_272efc;
        case 0x272f00u: goto label_272f00;
        case 0x272f04u: goto label_272f04;
        case 0x272f08u: goto label_272f08;
        case 0x272f0cu: goto label_272f0c;
        case 0x272f10u: goto label_272f10;
        case 0x272f14u: goto label_272f14;
        case 0x272f18u: goto label_272f18;
        case 0x272f1cu: goto label_272f1c;
        default: break;
    }

    ctx->pc = 0x272de8u;

label_272de8:
    // 0x272de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_272dec:
    // 0x272dec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x272decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_272df0:
    // 0x272df0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x272df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_272df4:
    // 0x272df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_272df8:
    // 0x272df8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x272df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_272dfc:
    // 0x272dfc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x272dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272e00:
    // 0x272e00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x272e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_272e04:
    // 0x272e04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x272e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272e08:
    // 0x272e08: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x272e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_272e0c:
    // 0x272e0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_272e10:
    // 0x272e10: 0x24a580c8  addiu       $a1, $a1, -0x7F38
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934728));
label_272e14:
    // 0x272e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x272e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_272e18:
    // 0x272e18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x272e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_272e1c:
    // 0x272e1c: 0xc08357c  jal         func_20D5F0
label_272e20:
    if (ctx->pc == 0x272E20u) {
        ctx->pc = 0x272E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E1Cu;
        // 0x272e20: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E24u;
        goto label_272e24;
    }
    ctx->pc = 0x272E1Cu;
    SET_GPR_U32(ctx, 31, 0x272E24u);
    ctx->pc = 0x272E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E1Cu;
    // 0x272e20: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D5F0u, 0x272E1Cu, 0x272E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E24u;
label_272e24:
    // 0x272e24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x272e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272e28:
    // 0x272e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272e2c:
    // 0x272e2c: 0xc099c02  jal         func_267008
label_272e30:
    if (ctx->pc == 0x272E30u) {
        ctx->pc = 0x272E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E2Cu;
        // 0x272e30: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E34u;
        goto label_272e34;
    }
    ctx->pc = 0x272E2Cu;
    SET_GPR_U32(ctx, 31, 0x272E34u);
    ctx->pc = 0x272E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E2Cu;
    // 0x272e30: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267008u, 0x272E2Cu, 0x272E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E34u;
label_272e34:
    // 0x272e34: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272e38:
    // 0x272e38: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x272e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_272e3c:
    // 0x272e3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272e40:
    // 0x272e40: 0xa0510292  sb          $s1, 0x292($v0)
    ctx->pc = 0x272e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 658), (uint8_t)GPR_U32(ctx, 17));
label_272e44:
    // 0x272e44: 0xc099c64  jal         func_267190
label_272e48:
    if (ctx->pc == 0x272E48u) {
        ctx->pc = 0x272E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E44u;
        // 0x272e48: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E4Cu;
        goto label_272e4c;
    }
    ctx->pc = 0x272E44u;
    SET_GPR_U32(ctx, 31, 0x272E4Cu);
    ctx->pc = 0x272E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E44u;
    // 0x272e48: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267190u, 0x272E44u, 0x272E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E4Cu;
label_272e4c:
    // 0x272e4c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x272e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_272e50:
    // 0x272e50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272e54:
    // 0x272e54: 0xc099c5c  jal         func_267170
label_272e58:
    if (ctx->pc == 0x272E58u) {
        ctx->pc = 0x272E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E54u;
        // 0x272e58: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E5Cu;
        goto label_272e5c;
    }
    ctx->pc = 0x272E54u;
    SET_GPR_U32(ctx, 31, 0x272E5Cu);
    ctx->pc = 0x272E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E54u;
    // 0x272e58: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267170u, 0x272E54u, 0x272E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E5Cu;
label_272e5c:
    // 0x272e5c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x272e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_272e60:
    // 0x272e60: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x272e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_272e64:
    // 0x272e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272e68:
    // 0x272e68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x272e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_272e6c:
    // 0x272e6c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x272e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272e70:
    // 0x272e70: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x272e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_272e74:
    // 0x272e74: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x272e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_272e78:
    // 0x272e78: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x272e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_272e7c:
    // 0x272e7c: 0xc099c44  jal         func_267110
label_272e80:
    if (ctx->pc == 0x272E80u) {
        ctx->pc = 0x272E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E7Cu;
        // 0x272e80: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E84u;
        goto label_272e84;
    }
    ctx->pc = 0x272E7Cu;
    SET_GPR_U32(ctx, 31, 0x272E84u);
    ctx->pc = 0x272E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E7Cu;
    // 0x272e80: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x272E7Cu, 0x272E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E84u;
label_272e84:
    // 0x272e84: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x272e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272e88:
    // 0x272e88: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x272e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_272e8c:
    // 0x272e8c: 0xac7102a4  sw          $s1, 0x2A4($v1)
    ctx->pc = 0x272e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 17));
label_272e90:
    // 0x272e90: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272e94:
    // 0x272e94: 0xac5102a8  sw          $s1, 0x2A8($v0)
    ctx->pc = 0x272e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 17));
label_272e98:
    // 0x272e98: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x272e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272e9c:
    // 0x272e9c: 0xa0600299  sb          $zero, 0x299($v1)
    ctx->pc = 0x272e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 665), (uint8_t)GPR_U32(ctx, 0));
label_272ea0:
    // 0x272ea0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272ea4:
    // 0x272ea4: 0xa040029a  sb          $zero, 0x29A($v0)
    ctx->pc = 0x272ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 666), (uint8_t)GPR_U32(ctx, 0));
label_272ea8:
    // 0x272ea8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x272ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272eac:
    // 0x272eac: 0xe474029c  swc1        $f20, 0x29C($v1)
    ctx->pc = 0x272eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 668), bits); }
label_272eb0:
    // 0x272eb0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272eb4:
    // 0x272eb4: 0xac4402a0  sw          $a0, 0x2A0($v0)
    ctx->pc = 0x272eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 672), GPR_U32(ctx, 4));
label_272eb8:
    // 0x272eb8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x272eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272ebc:
    // 0x272ebc: 0xa0710297  sb          $s1, 0x297($v1)
    ctx->pc = 0x272ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 663), (uint8_t)GPR_U32(ctx, 17));
label_272ec0:
    // 0x272ec0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x272ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272ec4:
    // 0x272ec4: 0xa0510295  sb          $s1, 0x295($v0)
    ctx->pc = 0x272ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 661), (uint8_t)GPR_U32(ctx, 17));
label_272ec8:
    // 0x272ec8: 0xac400224  sw          $zero, 0x224($v0)
    ctx->pc = 0x272ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 0));
label_272ecc:
    // 0x272ecc: 0xac40022c  sw          $zero, 0x22C($v0)
    ctx->pc = 0x272eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 0));
label_272ed0:
    // 0x272ed0: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x272ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_272ed4:
    // 0x272ed4: 0xac400230  sw          $zero, 0x230($v0)
    ctx->pc = 0x272ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 0));
label_272ed8:
    // 0x272ed8: 0xac400238  sw          $zero, 0x238($v0)
    ctx->pc = 0x272ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 568), GPR_U32(ctx, 0));
label_272edc:
    // 0x272edc: 0xac400240  sw          $zero, 0x240($v0)
    ctx->pc = 0x272edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 0));
label_272ee0:
    // 0x272ee0: 0xa0400244  sb          $zero, 0x244($v0)
    ctx->pc = 0x272ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 580), (uint8_t)GPR_U32(ctx, 0));
label_272ee4:
    // 0x272ee4: 0xc09a07e  jal         func_2681F8
label_272ee8:
    if (ctx->pc == 0x272EE8u) {
        ctx->pc = 0x272EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EE4u;
        // 0x272ee8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272EECu;
        goto label_272eec;
    }
    ctx->pc = 0x272EE4u;
    SET_GPR_U32(ctx, 31, 0x272EECu);
    ctx->pc = 0x272EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EE4u;
    // 0x272ee8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2681F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2681F8u, 0x272EE4u, 0x272EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EECu;
label_272eec:
    // 0x272eec: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x272eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_272ef0:
    // 0x272ef0: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x272ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_272ef4:
    // 0x272ef4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x272ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_272ef8:
    // 0x272ef8: 0x40f809  jalr        $v0
label_272efc:
    if (ctx->pc == 0x272EFCu) {
        ctx->pc = 0x272EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EF8u;
        // 0x272efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F00u;
        goto label_272f00;
    }
    ctx->pc = 0x272EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272F00u);
        ctx->pc = 0x272EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272EF8u;
        // 0x272efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272EF8u, 0x272F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272F00u;
label_272f00:
    // 0x272f00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x272f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_272f04:
    // 0x272f04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x272f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_272f08:
    // 0x272f08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x272f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_272f0c:
    // 0x272f0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x272f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_272f10:
    // 0x272f10: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x272f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_272f14:
    // 0x272f14: 0x3e00008  jr          $ra
label_272f18:
    if (ctx->pc == 0x272F18u) {
        ctx->pc = 0x272F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F14u;
        // 0x272f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272F1Cu;
        goto label_272f1c;
    }
    ctx->pc = 0x272F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272F14u;
        // 0x272f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272F1Cu;
label_272f1c:
    // 0x272f1c: 0x0  nop
    ctx->pc = 0x272f1cu;
    // NOP
    ctx->pc = 0x272f20u;
}
