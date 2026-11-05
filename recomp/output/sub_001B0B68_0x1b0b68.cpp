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

// Function: sub_001B0B68
// Address: 0x1b0b68 - 0x1b0fd8
void sub_001B0B68_0x1b0b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0B68_0x1b0b68");
#endif

    switch (ctx->pc) {
        case 0x1b0bacu: goto label_1b0bac;
        case 0x1b0bbcu: goto label_1b0bbc;
        case 0x1b0becu: goto label_1b0bec;
        case 0x1b0bfcu: goto label_1b0bfc;
        case 0x1b0c0cu: goto label_1b0c0c;
        case 0x1b0c1cu: goto label_1b0c1c;
        case 0x1b0c58u: goto label_1b0c58;
        case 0x1b0c6cu: goto label_1b0c6c;
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0ce4u: goto label_1b0ce4;
        case 0x1b0cf0u: goto label_1b0cf0;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d30u: goto label_1b0d30;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0ec4u: goto label_1b0ec4;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa8u: goto label_1b0fa8;
        default: break;
    }

    ctx->pc = 0x1b0b68u;

    // 0x1b0b68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b0b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b0b6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0b74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b0b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0b7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b0b80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0b84: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1b0b84u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b0b88: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1b0b88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b0b8c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1b0b8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b0b90: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1b0b90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b0b94: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b0b94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b0b98: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1b0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b0b9c: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x1B0B9Cu;
    {
        const bool branch_taken_0x1b0b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0b9c) {
            ctx->pc = 0x1B0F88u;
            goto label_1b0f88;
        }
    }
    ctx->pc = 0x1B0BA4u;
    // 0x1b0ba4: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1B0BA4u;
    SET_GPR_U32(ctx, 31, 0x1B0BACu);
    ctx->pc = 0x1B0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BA4u;
    // 0x1b0ba8: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1B0BA4u, 0x1B0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BACu;
label_1b0bac:
    // 0x1b0bac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0bb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bb4: 0xc06c16e  jal         func_1B05B8
    ctx->pc = 0x1B0BB4u;
    SET_GPR_U32(ctx, 31, 0x1B0BBCu);
    ctx->pc = 0x1B0BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BB4u;
    // 0x1b0bb8: 0x8c700028  lw          $s0, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B05B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05B8u, 0x1B0BB4u, 0x1B0BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BBCu;
label_1b0bbc:
    // 0x1b0bbc: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b0bc0: 0x8e510088  lw          $s1, 0x88($s2)
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b0bc4: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1b0bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1b0bc8: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1b0bc8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1b0bcc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x1b0bd0: 0x2631fffa  addiu       $s1, $s1, -0x6
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967290));
    // 0x1b0bd4: 0x24424dd0  addiu       $v0, $v0, 0x4DD0
    ctx->pc = 0x1b0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19920));
    // 0x1b0bd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bdc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1b0bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b0be0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b0be4: 0xc0f7364  jal         func_3DCD90
    ctx->pc = 0x1B0BE4u;
    SET_GPR_U32(ctx, 31, 0x1B0BECu);
    ctx->pc = 0x1B0BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BE4u;
    // 0x1b0be8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD90u, 0x1B0BE4u, 0x1B0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BECu;
label_1b0bec:
    // 0x1b0bec: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1b0becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b0bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bf4: 0xc0f7364  jal         func_3DCD90
    ctx->pc = 0x1B0BF4u;
    SET_GPR_U32(ctx, 31, 0x1B0BFCu);
    ctx->pc = 0x1B0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BF4u;
    // 0x1b0bf8: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD90u, 0x1B0BF4u, 0x1B0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BFCu;
label_1b0bfc:
    // 0x1b0bfc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1b0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1b0c00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c04: 0xc0f7364  jal         func_3DCD90
    ctx->pc = 0x1B0C04u;
    SET_GPR_U32(ctx, 31, 0x1B0C0Cu);
    ctx->pc = 0x1B0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C04u;
    // 0x1b0c08: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD90u, 0x1B0C04u, 0x1B0C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C0Cu;
label_1b0c0c:
    // 0x1b0c0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1b0c0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1b0c10: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1b0c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1b0c14: 0xc0f7364  jal         func_3DCD90
    ctx->pc = 0x1B0C14u;
    SET_GPR_U32(ctx, 31, 0x1B0C1Cu);
    ctx->pc = 0x1B0C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C14u;
    // 0x1b0c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD90u, 0x1B0C14u, 0x1B0C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C1Cu;
label_1b0c1c:
    // 0x1b0c1c: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1b0c20: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b0c24: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B0C24u;
    {
        const bool branch_taken_0x1b0c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C24u;
        // 0x1b0c28: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c24) {
            ctx->pc = 0x1B0D3Cu;
            goto label_1b0d3c;
        }
    }
    ctx->pc = 0x1B0C2Cu;
    // 0x1b0c2c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B0C2Cu;
    {
        const bool branch_taken_0x1b0c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c2c) {
            ctx->pc = 0x1B0D3Cu;
            goto label_1b0d3c;
        }
    }
    ctx->pc = 0x1B0C34u;
    // 0x1b0c34: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1b0c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0c38: 0x0  nop
    ctx->pc = 0x1b0c38u;
    // NOP
    // 0x1b0c3c: 0x450000d2  bc1f        . + 4 + (0xD2 << 2)
    ctx->pc = 0x1B0C3Cu;
    {
        const bool branch_taken_0x1b0c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C3Cu;
        // 0x1b0c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c3c) {
            ctx->pc = 0x1B0F88u;
            goto label_1b0f88;
        }
    }
    ctx->pc = 0x1B0C44u;
    // 0x1b0c44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0c48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b0c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b0c4c: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b0c50: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B0C50u;
    SET_GPR_U32(ctx, 31, 0x1B0C58u);
    ctx->pc = 0x1B0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C50u;
    // 0x1b0c54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B0C50u, 0x1B0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C58u;
label_1b0c58:
    // 0x1b0c58: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1b0c5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0C5Cu;
    {
        const bool branch_taken_0x1b0c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C5Cu;
        // 0x1b0c60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c5c) {
            ctx->pc = 0x1B0C6Cu;
            goto label_1b0c6c;
        }
    }
    ctx->pc = 0x1B0C64u;
    // 0x1b0c64: 0xc06c504  jal         func_1B1410
    ctx->pc = 0x1B0C64u;
    SET_GPR_U32(ctx, 31, 0x1B0C6Cu);
    ctx->pc = 0x1B0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C64u;
    // 0x1b0c68: 0x264500a4  addiu       $a1, $s2, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1410u, 0x1B0C64u, 0x1B0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0C6Cu;
label_1b0c6c:
    // 0x1b0c6c: 0xc64100f8  lwc1        $f1, 0xF8($s2)
    ctx->pc = 0x1b0c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0c74: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b0c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b0c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0c7c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b0c80: 0x0  nop
    ctx->pc = 0x1b0c80u;
    // NOP
    // 0x1b0c84: 0x0  nop
    ctx->pc = 0x1b0c84u;
    // NOP
    // 0x1b0c88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b0c88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b0c8c: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x1b0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1b0c90: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b0c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b0c94: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x1b0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1b0c98: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x1b0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
    // 0x1b0c9c: 0xae4500a4  sw          $a1, 0xA4($s2)
    ctx->pc = 0x1b0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 5));
    // 0x1b0ca0: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x1b0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x1b0ca4: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x1b0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x1b0ca8: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x1b0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
    // 0x1b0cac: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b0cb0: 0x8c510110  lw          $s1, 0x110($v0)
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1b0cb4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1b0cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1b0cb8: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1b0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1b0cbc: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x1b0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b0cc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b0cc4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b0cc8: 0xc06c4b0  jal         func_1B12C0
    ctx->pc = 0x1B0CC8u;
    SET_GPR_U32(ctx, 31, 0x1B0CD0u);
    ctx->pc = 0x1B0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CC8u;
    // 0x1b0ccc: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12C0u, 0x1B0CC8u, 0x1B0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CD0u;
label_1b0cd0:
    // 0x1b0cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cdc: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B0CDCu;
    SET_GPR_U32(ctx, 31, 0x1B0CE4u);
    ctx->pc = 0x1B0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CDCu;
    // 0x1b0ce0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B0CDCu, 0x1B0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CE4u;
label_1b0ce4:
    // 0x1b0ce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b0ce8: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1B0CE8u;
    SET_GPR_U32(ctx, 31, 0x1B0CF0u);
    ctx->pc = 0x1B0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0CE8u;
    // 0x1b0cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1B0CE8u, 0x1B0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0CF0u;
label_1b0cf0:
    // 0x1b0cf0: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x1b0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0cf8: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x1b0cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0cfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b0cfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b0d00: 0x0  nop
    ctx->pc = 0x1b0d00u;
    // NOP
    // 0x1b0d04: 0x0  nop
    ctx->pc = 0x1b0d04u;
    // NOP
    // 0x1b0d08: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1b0d08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1b0d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d10: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1b0d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b0d14: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B0D14u;
    SET_GPR_U32(ctx, 31, 0x1B0D1Cu);
    ctx->pc = 0x1B0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D14u;
    // 0x1b0d18: 0xae5000a0  sw          $s0, 0xA0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B0D14u, 0x1B0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D1Cu;
label_1b0d1c:
    // 0x1b0d1c: 0xa2400100  sb          $zero, 0x100($s2)
    ctx->pc = 0x1b0d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0d20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0d24: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1b0d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b0d28: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1B0D28u;
    SET_GPR_U32(ctx, 31, 0x1B0D30u);
    ctx->pc = 0x1B0D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D28u;
    // 0x1b0d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1B0D28u, 0x1B0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D30u;
label_1b0d30:
    // 0x1b0d30: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x1b0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0d34: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1B0D34u;
    {
        const bool branch_taken_0x1b0d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D34u;
        // 0x1b0d38: 0xe64000fc  swc1        $f0, 0xFC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d34) {
            ctx->pc = 0x1B0F88u;
            goto label_1b0f88;
        }
    }
    ctx->pc = 0x1B0D3Cu;
label_1b0d3c:
    // 0x1b0d3c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1b0d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0d44: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b0d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b0d48: 0x45010060  bc1t        . + 4 + (0x60 << 2)
    ctx->pc = 0x1B0D48u;
    {
        const bool branch_taken_0x1b0d48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D48u;
        // 0x1b0d4c: 0xa2400100  sb          $zero, 0x100($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d48) {
            ctx->pc = 0x1B0ECCu;
            goto label_1b0ecc;
        }
    }
    ctx->pc = 0x1B0D50u;
    // 0x1b0d50: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x1b0d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0d54: 0x0  nop
    ctx->pc = 0x1b0d54u;
    // NOP
    // 0x1b0d58: 0x4502005c  bc1fl       . + 4 + (0x5C << 2)
    ctx->pc = 0x1B0D58u;
    {
        const bool branch_taken_0x1b0d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0d58) {
            ctx->pc = 0x1B0D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0D58u;
            // 0x1b0d5c: 0xae4000f0  sw          $zero, 0xF0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0ECCu;
            goto label_1b0ecc;
        }
    }
    ctx->pc = 0x1B0D60u;
    // 0x1b0d60: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b0d64: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B0D64u;
    {
        const bool branch_taken_0x1b0d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D64u;
        // 0x1b0d68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d64) {
            ctx->pc = 0x1B0DC8u;
            goto label_1b0dc8;
        }
    }
    ctx->pc = 0x1B0D6Cu;
    // 0x1b0d6c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x1b0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1b0d70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0D70u;
    {
        const bool branch_taken_0x1b0d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D70u;
        // 0x1b0d74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d70) {
            ctx->pc = 0x1B0D88u;
            goto label_1b0d88;
        }
    }
    ctx->pc = 0x1B0D78u;
    // 0x1b0d78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0D78u;
    {
        const bool branch_taken_0x1b0d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D78u;
        // 0x1b0d7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d78) {
            ctx->pc = 0x1B0D88u;
            goto label_1b0d88;
        }
    }
    ctx->pc = 0x1B0D80u;
    // 0x1b0d80: 0x54620053  bnel        $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1B0D80u;
    {
        const bool branch_taken_0x1b0d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0d80) {
            ctx->pc = 0x1B0D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0D80u;
            // 0x1b0d84: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0ED0u;
            goto label_1b0ed0;
        }
    }
    ctx->pc = 0x1B0D88u;
label_1b0d88:
    // 0x1b0d88: 0x4601c301  sub.s       $f12, $f24, $f1
    ctx->pc = 0x1b0d88u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x1b0d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0d90: 0x0  nop
    ctx->pc = 0x1b0d90u;
    // NOP
    // 0x1b0d94: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1b0d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0d98: 0x0  nop
    ctx->pc = 0x1b0d98u;
    // NOP
    // 0x1b0d9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0D9Cu;
    {
        const bool branch_taken_0x1b0d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D9Cu;
        // 0x1b0da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d9c) {
            ctx->pc = 0x1B0DB8u;
            goto label_1b0db8;
        }
    }
    ctx->pc = 0x1B0DA4u;
    // 0x1b0da4: 0x4601b801  sub.s       $f0, $f23, $f1
    ctx->pc = 0x1b0da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x1b0da8: 0x0  nop
    ctx->pc = 0x1b0da8u;
    // NOP
    // 0x1b0dac: 0x460c0543  div.s       $f21, $f0, $f12
    ctx->pc = 0x1b0dacu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1b0db0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1B0DB0u;
    {
        const bool branch_taken_0x1b0db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DB0u;
        // 0x1b0db4: 0xa2420100  sb          $v0, 0x100($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 256), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0db0) {
            ctx->pc = 0x1B0ECCu;
            goto label_1b0ecc;
        }
    }
    ctx->pc = 0x1B0DB8u;
label_1b0db8:
    // 0x1b0db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b0db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0dbc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b0dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b0dc0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B0DC0u;
    {
        const bool branch_taken_0x1b0dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC0u;
        // 0x1b0dc4: 0xa2420100  sb          $v0, 0x100($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 256), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dc0) {
            ctx->pc = 0x1B0ECCu;
            goto label_1b0ecc;
        }
    }
    ctx->pc = 0x1B0DC8u;
label_1b0dc8:
    // 0x1b0dc8: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x1b0dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0dcc: 0x0  nop
    ctx->pc = 0x1b0dccu;
    // NOP
    // 0x1b0dd0: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1B0DD0u;
    {
        const bool branch_taken_0x1b0dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DD0u;
        // 0x1b0dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dd0) {
            ctx->pc = 0x1B0ECCu;
            goto label_1b0ecc;
        }
    }
    ctx->pc = 0x1B0DD8u;
    // 0x1b0dd8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b0dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b0ddc: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b0ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b0de0: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B0DE0u;
    SET_GPR_U32(ctx, 31, 0x1B0DE8u);
    ctx->pc = 0x1B0DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DE0u;
    // 0x1b0de4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B0DE0u, 0x1B0DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DE8u;
label_1b0de8:
    // 0x1b0de8: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x1b0dec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0DECu;
    {
        const bool branch_taken_0x1b0dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DECu;
        // 0x1b0df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dec) {
            ctx->pc = 0x1B0DFCu;
            goto label_1b0dfc;
        }
    }
    ctx->pc = 0x1B0DF4u;
    // 0x1b0df4: 0xc06c504  jal         func_1B1410
    ctx->pc = 0x1B0DF4u;
    SET_GPR_U32(ctx, 31, 0x1B0DFCu);
    ctx->pc = 0x1B0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DF4u;
    // 0x1b0df8: 0x264500a4  addiu       $a1, $s2, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1410u, 0x1B0DF4u, 0x1B0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DFCu;
label_1b0dfc:
    // 0x1b0dfc: 0xc64100f4  lwc1        $f1, 0xF4($s2)
    ctx->pc = 0x1b0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b0e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b0e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0e0c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b0e10: 0x0  nop
    ctx->pc = 0x1b0e10u;
    // NOP
    // 0x1b0e14: 0x0  nop
    ctx->pc = 0x1b0e14u;
    // NOP
    // 0x1b0e18: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b0e18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b0e1c: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b0e20: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x1b0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1b0e24: 0xae4300a4  sw          $v1, 0xA4($s2)
    ctx->pc = 0x1b0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
    // 0x1b0e28: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x1b0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x1b0e2c: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x1b0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x1b0e30: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b0e34: 0x8c510110  lw          $s1, 0x110($v0)
    ctx->pc = 0x1b0e34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1b0e38: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1b0e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1b0e3c: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x1b0e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b0e40: 0x8e4600f0  lw          $a2, 0xF0($s2)
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b0e44: 0xc06c4b0  jal         func_1B12C0
    ctx->pc = 0x1B0E44u;
    SET_GPR_U32(ctx, 31, 0x1B0E4Cu);
    ctx->pc = 0x1B0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E44u;
    // 0x1b0e48: 0x8e450088  lw          $a1, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12C0u, 0x1B0E44u, 0x1B0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E4Cu;
label_1b0e4c:
    // 0x1b0e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e58: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B0E58u;
    SET_GPR_U32(ctx, 31, 0x1B0E60u);
    ctx->pc = 0x1B0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E58u;
    // 0x1b0e5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B0E58u, 0x1B0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E60u;
label_1b0e60:
    // 0x1b0e60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b0e60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b0e64: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1B0E64u;
    SET_GPR_U32(ctx, 31, 0x1B0E6Cu);
    ctx->pc = 0x1B0E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E64u;
    // 0x1b0e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1B0E64u, 0x1B0E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E6Cu;
label_1b0e6c:
    // 0x1b0e6c: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x1b0e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0e70: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b0e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b0e74: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x1b0e74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e7c: 0x0  nop
    ctx->pc = 0x1b0e7cu;
    // NOP
    // 0x1b0e80: 0x0  nop
    ctx->pc = 0x1b0e80u;
    // NOP
    // 0x1b0e84: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x1b0e84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1b0e88: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1b0e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b0e8c: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x1b0e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
    // 0x1b0e90: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b0e94: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b0e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0e9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b0ea0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b0ea4: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x1b0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x1b0ea8: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B0EA8u;
    SET_GPR_U32(ctx, 31, 0x1B0EB0u);
    ctx->pc = 0x1B0EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EA8u;
    // 0x1b0eac: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B0EA8u, 0x1B0EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EB0u;
label_1b0eb0:
    // 0x1b0eb0: 0xa2400100  sb          $zero, 0x100($s2)
    ctx->pc = 0x1b0eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0eb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b0eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0eb8: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1b0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b0ebc: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x1B0EBCu;
    SET_GPR_U32(ctx, 31, 0x1B0EC4u);
    ctx->pc = 0x1B0EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EBCu;
    // 0x1b0ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x1B0EBCu, 0x1B0EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EC4u;
label_1b0ec4:
    // 0x1b0ec4: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x1b0ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0ec8: 0xe64000fc  swc1        $f0, 0xFC($s2)
    ctx->pc = 0x1b0ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 252), bits); }
label_1b0ecc:
    // 0x1b0ecc: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1b0ed0:
    // 0x1b0ed0: 0x8c500334  lw          $s0, 0x334($v0)
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b0ed4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1b0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1b0ed8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0ED8u;
    {
        const bool branch_taken_0x1b0ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ED8u;
        // 0x1b0edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ed8) {
            ctx->pc = 0x1B0EE8u;
            goto label_1b0ee8;
        }
    }
    ctx->pc = 0x1B0EE0u;
label_1b0ee0:
    // 0x1b0ee0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B0EE0u;
    {
        const bool branch_taken_0x1b0ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ee0) {
            ctx->pc = 0x1B0F0Cu;
            goto label_1b0f0c;
        }
    }
    ctx->pc = 0x1B0EE8u;
label_1b0ee8:
    // 0x1b0ee8: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1b0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x1b0eec: 0x0  nop
    ctx->pc = 0x1b0eecu;
    // NOP
label_1b0ef0:
    // 0x1b0ef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0ef4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B0EF4u;
    {
        const bool branch_taken_0x1b0ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EF4u;
        // 0x1b0ef8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ef4) {
            ctx->pc = 0x1B0EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ee0;
        }
    }
    ctx->pc = 0x1B0EFCu;
    // 0x1b0efc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1b0efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b0f00: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B0F00u;
    {
        const bool branch_taken_0x1b0f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F00u;
        // 0x1b0f04: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f00) {
            ctx->pc = 0x1B0EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ef0;
        }
    }
    ctx->pc = 0x1B0F08u;
    // 0x1b0f08: 0x8e1101e8  lw          $s1, 0x1E8($s0)
    ctx->pc = 0x1b0f08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_1b0f0c:
    // 0x1b0f0c: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B0F0Cu;
    {
        const bool branch_taken_0x1b0f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f0c) {
            ctx->pc = 0x1B0F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F0Cu;
            // 0x1b0f10: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F7Cu;
            goto label_1b0f7c;
        }
    }
    ctx->pc = 0x1B0F14u;
    // 0x1b0f14: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b0f18: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1b0f1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b0f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b0f20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B0F20u;
    {
        const bool branch_taken_0x1b0f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F20u;
        // 0x1b0f24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f20) {
            ctx->pc = 0x1B0F5Cu;
            goto label_1b0f5c;
        }
    }
    ctx->pc = 0x1B0F28u;
    // 0x1b0f28: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1b0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b0f2c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F2Cu;
            // 0x1b0f30: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F60u;
            goto label_1b0f60;
        }
    }
    ctx->pc = 0x1B0F34u;
    // 0x1b0f34: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x1B0F34u;
    SET_GPR_U32(ctx, 31, 0x1B0F3Cu);
    ctx->pc = 0x1B0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F34u;
    // 0x1b0f38: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1B0F34u, 0x1B0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F3Cu;
label_1b0f3c:
    // 0x1b0f3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0F3Cu;
    {
        const bool branch_taken_0x1b0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f3c) {
            ctx->pc = 0x1B0F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F3Cu;
            // 0x1b0f40: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F60u;
            goto label_1b0f60;
        }
    }
    ctx->pc = 0x1B0F44u;
    // 0x1b0f44: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1b0f48: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1b0f4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0F4Cu;
    {
        const bool branch_taken_0x1b0f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F4Cu;
        // 0x1b0f50: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f4c) {
            ctx->pc = 0x1B0F5Cu;
            goto label_1b0f5c;
        }
    }
    ctx->pc = 0x1B0F54u;
    // 0x1b0f54: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0F54u;
    {
        const bool branch_taken_0x1b0f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0f54) {
            ctx->pc = 0x1B0F60u;
            goto label_1b0f60;
        }
    }
    ctx->pc = 0x1B0F5Cu;
label_1b0f5c:
    // 0x1b0f5c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0f60:
    // 0x1b0f60: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0F60u;
    {
        const bool branch_taken_0x1b0f60 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f60) {
            ctx->pc = 0x1B0F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F60u;
            // 0x1b0f64: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F7Cu;
            goto label_1b0f7c;
        }
    }
    ctx->pc = 0x1B0F68u;
    // 0x1b0f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b0f6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b0f70: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B0F70u;
    SET_GPR_U32(ctx, 31, 0x1B0F78u);
    ctx->pc = 0x1B0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F70u;
    // 0x1b0f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B0F70u, 0x1B0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F78u;
label_1b0f78:
    // 0x1b0f78: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b0f7c:
    // 0x1b0f7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b0f7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b0f80: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B0F80u;
    SET_GPR_U32(ctx, 31, 0x1B0F88u);
    ctx->pc = 0x1B0F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F80u;
    // 0x1b0f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B0F80u, 0x1B0F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F88u;
label_1b0f88:
    // 0x1b0f88: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B0F88u;
    SET_GPR_U32(ctx, 31, 0x1B0F90u);
    ctx->pc = 0x1B0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F88u;
    // 0x1b0f8c: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B0F88u, 0x1B0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F90u;
label_1b0f90:
    // 0x1b0f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0F90u;
    {
        const bool branch_taken_0x1b0f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F90u;
        // 0x1b0f94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f90) {
            ctx->pc = 0x1B0FACu;
            goto label_1b0fac;
        }
    }
    ctx->pc = 0x1B0F98u;
    // 0x1b0f98: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B0F98u;
    SET_GPR_U32(ctx, 31, 0x1B0FA0u);
    ctx->pc = 0x1B0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F98u;
    // 0x1b0f9c: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B0F98u, 0x1B0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FA0u;
label_1b0fa0:
    // 0x1b0fa0: 0xc098514  jal         func_261450
    ctx->pc = 0x1B0FA0u;
    SET_GPR_U32(ctx, 31, 0x1B0FA8u);
    ctx->pc = 0x1B0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FA0u;
    // 0x1b0fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x1B0FA0u, 0x1B0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FA8u;
label_1b0fa8:
    // 0x1b0fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0fac:
    // 0x1b0fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0fb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0fb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b0fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0fbc: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x1b0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b0fc0: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1b0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b0fc4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1b0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b0fc8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1b0fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b0fcc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b0fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FD0u;
        // 0x1b0fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0FD8u;
}
