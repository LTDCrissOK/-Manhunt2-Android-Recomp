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

// Function: sub_00193B10
// Address: 0x193b10 - 0x193be0
void sub_00193B10_0x193b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193B10_0x193b10");
#endif

    switch (ctx->pc) {
        case 0x193b10u: goto label_193b10;
        case 0x193b14u: goto label_193b14;
        case 0x193b18u: goto label_193b18;
        case 0x193b1cu: goto label_193b1c;
        case 0x193b20u: goto label_193b20;
        case 0x193b24u: goto label_193b24;
        case 0x193b28u: goto label_193b28;
        case 0x193b2cu: goto label_193b2c;
        case 0x193b30u: goto label_193b30;
        case 0x193b34u: goto label_193b34;
        case 0x193b38u: goto label_193b38;
        case 0x193b3cu: goto label_193b3c;
        case 0x193b40u: goto label_193b40;
        case 0x193b44u: goto label_193b44;
        case 0x193b48u: goto label_193b48;
        case 0x193b4cu: goto label_193b4c;
        case 0x193b50u: goto label_193b50;
        case 0x193b54u: goto label_193b54;
        case 0x193b58u: goto label_193b58;
        case 0x193b5cu: goto label_193b5c;
        case 0x193b60u: goto label_193b60;
        case 0x193b64u: goto label_193b64;
        case 0x193b68u: goto label_193b68;
        case 0x193b6cu: goto label_193b6c;
        case 0x193b70u: goto label_193b70;
        case 0x193b74u: goto label_193b74;
        case 0x193b78u: goto label_193b78;
        case 0x193b7cu: goto label_193b7c;
        case 0x193b80u: goto label_193b80;
        case 0x193b84u: goto label_193b84;
        case 0x193b88u: goto label_193b88;
        case 0x193b8cu: goto label_193b8c;
        case 0x193b90u: goto label_193b90;
        case 0x193b94u: goto label_193b94;
        case 0x193b98u: goto label_193b98;
        case 0x193b9cu: goto label_193b9c;
        case 0x193ba0u: goto label_193ba0;
        case 0x193ba4u: goto label_193ba4;
        case 0x193ba8u: goto label_193ba8;
        case 0x193bacu: goto label_193bac;
        case 0x193bb0u: goto label_193bb0;
        case 0x193bb4u: goto label_193bb4;
        case 0x193bb8u: goto label_193bb8;
        case 0x193bbcu: goto label_193bbc;
        case 0x193bc0u: goto label_193bc0;
        case 0x193bc4u: goto label_193bc4;
        case 0x193bc8u: goto label_193bc8;
        case 0x193bccu: goto label_193bcc;
        case 0x193bd0u: goto label_193bd0;
        case 0x193bd4u: goto label_193bd4;
        case 0x193bd8u: goto label_193bd8;
        case 0x193bdcu: goto label_193bdc;
        default: break;
    }

    ctx->pc = 0x193b10u;

label_193b10:
    // 0x193b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193b14:
    // 0x193b14: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x193b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_193b18:
    // 0x193b18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x193b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193b1c:
    // 0x193b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_193b20:
    // 0x193b20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193b24:
    // 0x193b24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x193b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_193b28:
    // 0x193b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193b2c:
    // 0x193b2c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x193b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_193b30:
    // 0x193b30: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x193b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193b34:
    // 0x193b34: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x193b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_193b38:
    // 0x193b38: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x193b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193b3c:
    // 0x193b3c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x193b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_193b40:
    // 0x193b40: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x193b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193b44:
    // 0x193b44: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x193b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_193b48:
    // 0x193b48: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_193b4c:
    // 0x193b4c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x193b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_193b50:
    // 0x193b50: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_193b54:
    // 0x193b54: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x193b54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_193b58:
    // 0x193b58: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x193b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_193b5c:
    // 0x193b5c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x193b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_193b60:
    // 0x193b60: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x193b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_193b64:
    // 0x193b64: 0xe602004c  swc1        $f2, 0x4C($s0)
    ctx->pc = 0x193b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_193b68:
    // 0x193b68: 0xc061a16  jal         func_186858
label_193b6c:
    if (ctx->pc == 0x193B6Cu) {
        ctx->pc = 0x193B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B68u;
        // 0x193b6c: 0xe6020048  swc1        $f2, 0x48($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B70u;
        goto label_193b70;
    }
    ctx->pc = 0x193B68u;
    SET_GPR_U32(ctx, 31, 0x193B70u);
    ctx->pc = 0x193B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B68u;
    // 0x193b6c: 0xe6020048  swc1        $f2, 0x48($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193B68u, 0x193B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B70u;
label_193b70:
    // 0x193b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193b74:
    // 0x193b74: 0xc06ee66  jal         func_1BB998
label_193b78:
    if (ctx->pc == 0x193B78u) {
        ctx->pc = 0x193B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B74u;
        // 0x193b78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B7Cu;
        goto label_193b7c;
    }
    ctx->pc = 0x193B74u;
    SET_GPR_U32(ctx, 31, 0x193B7Cu);
    ctx->pc = 0x193B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B74u;
    // 0x193b78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x193B74u, 0x193B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B7Cu;
label_193b7c:
    // 0x193b7c: 0xc061a16  jal         func_186858
label_193b80:
    if (ctx->pc == 0x193B80u) {
        ctx->pc = 0x193B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B7Cu;
        // 0x193b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B84u;
        goto label_193b84;
    }
    ctx->pc = 0x193B7Cu;
    SET_GPR_U32(ctx, 31, 0x193B84u);
    ctx->pc = 0x193B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B7Cu;
    // 0x193b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193B7Cu, 0x193B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B84u;
label_193b84:
    // 0x193b84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193b88:
    // 0x193b88: 0xc06eebe  jal         func_1BBAF8
label_193b8c:
    if (ctx->pc == 0x193B8Cu) {
        ctx->pc = 0x193B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B88u;
        // 0x193b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B90u;
        goto label_193b90;
    }
    ctx->pc = 0x193B88u;
    SET_GPR_U32(ctx, 31, 0x193B90u);
    ctx->pc = 0x193B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B88u;
    // 0x193b8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x193B88u, 0x193B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B90u;
label_193b90:
    // 0x193b90: 0xc061a16  jal         func_186858
label_193b94:
    if (ctx->pc == 0x193B94u) {
        ctx->pc = 0x193B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B90u;
        // 0x193b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B98u;
        goto label_193b98;
    }
    ctx->pc = 0x193B90u;
    SET_GPR_U32(ctx, 31, 0x193B98u);
    ctx->pc = 0x193B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B90u;
    // 0x193b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193B90u, 0x193B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B98u;
label_193b98:
    // 0x193b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193b9c:
    // 0x193b9c: 0xc061a16  jal         func_186858
label_193ba0:
    if (ctx->pc == 0x193BA0u) {
        ctx->pc = 0x193BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B9Cu;
        // 0x193ba0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BA4u;
        goto label_193ba4;
    }
    ctx->pc = 0x193B9Cu;
    SET_GPR_U32(ctx, 31, 0x193BA4u);
    ctx->pc = 0x193BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B9Cu;
    // 0x193ba0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193B9Cu, 0x193BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BA4u;
label_193ba4:
    // 0x193ba4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_193ba8:
    // 0x193ba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193bac:
    // 0x193bac: 0x0  nop
    ctx->pc = 0x193bacu;
    // NOP
label_193bb0:
    // 0x193bb0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x193bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_193bb4:
    // 0x193bb4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x193bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_193bb8:
    // 0x193bb8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_193bbc:
    // 0x193bbc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x193bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_193bc0:
    // 0x193bc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x193bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_193bc4:
    // 0x193bc4: 0x60f809  jalr        $v1
label_193bc8:
    if (ctx->pc == 0x193BC8u) {
        ctx->pc = 0x193BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BC4u;
        // 0x193bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BCCu;
        goto label_193bcc;
    }
    ctx->pc = 0x193BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x193BCCu);
        ctx->pc = 0x193BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BC4u;
        // 0x193bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BC4u, 0x193BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BCCu;
label_193bcc:
    // 0x193bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193bd0:
    // 0x193bd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x193bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193bd4:
    // 0x193bd4: 0x3e00008  jr          $ra
label_193bd8:
    if (ctx->pc == 0x193BD8u) {
        ctx->pc = 0x193BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BD4u;
        // 0x193bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BDCu;
        goto label_193bdc;
    }
    ctx->pc = 0x193BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BD4u;
        // 0x193bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193BDCu;
label_193bdc:
    // 0x193bdc: 0x0  nop
    ctx->pc = 0x193bdcu;
    // NOP
    ctx->pc = 0x193be0u;
}
