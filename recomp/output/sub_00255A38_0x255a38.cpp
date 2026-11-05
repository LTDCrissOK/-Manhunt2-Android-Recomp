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

// Function: sub_00255A38
// Address: 0x255a38 - 0x255e10
void sub_00255A38_0x255a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255A38_0x255a38");
#endif

    switch (ctx->pc) {
        case 0x255a74u: goto label_255a74;
        case 0x255a8cu: goto label_255a8c;
        case 0x255b48u: goto label_255b48;
        case 0x255b54u: goto label_255b54;
        case 0x255b9cu: goto label_255b9c;
        case 0x255becu: goto label_255bec;
        case 0x255bf8u: goto label_255bf8;
        case 0x255c20u: goto label_255c20;
        case 0x255c40u: goto label_255c40;
        case 0x255d10u: goto label_255d10;
        case 0x255d2cu: goto label_255d2c;
        case 0x255d78u: goto label_255d78;
        case 0x255db8u: goto label_255db8;
        case 0x255dc0u: goto label_255dc0;
        default: break;
    }

    ctx->pc = 0x255a38u;

    // 0x255a38: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x255a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x255a3c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x255a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x255a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x255a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a44: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x255a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x255a48: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x255a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x255a4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x255a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x255a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a54: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x255a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x255a58: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x255a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x255a5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x255a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x255a60: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x255a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x255a64: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x255a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x255a68: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x255a68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x255a6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255A6Cu;
    SET_GPR_U32(ctx, 31, 0x255A74u);
    ctx->pc = 0x255A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A6Cu;
    // 0x255a70: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255A6Cu, 0x255A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A74u;
label_255a74:
    // 0x255a74: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x255a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x255a78: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x255a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x255a7c: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x255a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x255a80: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x255a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x255a84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255A84u;
    SET_GPR_U32(ctx, 31, 0x255A8Cu);
    ctx->pc = 0x255A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A84u;
    // 0x255a88: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255A84u, 0x255A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A8Cu;
label_255a8c:
    // 0x255a8c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x255a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x255a90: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x255a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x255a94: 0x7fa00060  sq          $zero, 0x60($sp)
    ctx->pc = 0x255a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 0));
    // 0x255a98: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x255a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x255a9c: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x255a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255aa0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x255aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x255aa4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x255aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255aa8: 0x24533d20  addiu       $s3, $v0, 0x3D20
    ctx->pc = 0x255aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x255aac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x255aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255ab0: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x255ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x255ab4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x255ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255ab8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x255ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x255abc: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x255abcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x255ac0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x255ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ac4: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x255ac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x255ac8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x255ac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255acc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x255accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x255ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x255ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ad4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x255ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x255ad8: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x255ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x255adc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x255adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x255ae0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x255ae0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255ae4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x255ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x255ae8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x255ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x255aec: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x255aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x255af0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x255af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x255af4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x255af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x255af8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x255af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x255afc: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x255afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x255b00: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x255b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x255b04: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x255b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x255b08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x255b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255b0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x255b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255b10: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x255b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255b14: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x255b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x255b18: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x255b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x255b1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x255b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255b20: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x255b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x255b24: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x255b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255b28: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x255b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x255b2c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x255b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255b30: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x255b30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x255b34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x255b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x255b38: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x255b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x255b3c: 0xe4e20030  swc1        $f2, 0x30($a3)
    ctx->pc = 0x255b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x255b40: 0xc08d78e  jal         func_235E38
    ctx->pc = 0x255B40u;
    SET_GPR_U32(ctx, 31, 0x255B48u);
    ctx->pc = 0x255B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B40u;
    // 0x255b44: 0xe4e30020  swc1        $f3, 0x20($a3) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E38u, 0x255B40u, 0x255B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B48u;
label_255b48:
    // 0x255b48: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x255b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x255b4c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255B4Cu;
    SET_GPR_U32(ctx, 31, 0x255B54u);
    ctx->pc = 0x255B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B4Cu;
    // 0x255b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255B4Cu, 0x255B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B54u;
label_255b54:
    // 0x255b54: 0x26100f90  addiu       $s0, $s0, 0xF90
    ctx->pc = 0x255b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
    // 0x255b58: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x255b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x255b5c: 0xafb000e8  sw          $s0, 0xE8($sp)
    ctx->pc = 0x255b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 16));
    // 0x255b60: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x255b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x255b64: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x255b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x255b68: 0x24421408  addiu       $v0, $v0, 0x1408
    ctx->pc = 0x255b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5128));
    // 0x255b6c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x255b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x255b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b74: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x255b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x255b78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x255b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b7c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x255b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x255b80: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x255b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x255b84: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x255b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x255b88: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x255b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x255b8c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x255b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x255b90: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x255b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x255b94: 0xc06fc1a  jal         func_1BF068
    ctx->pc = 0x255B94u;
    SET_GPR_U32(ctx, 31, 0x255B9Cu);
    ctx->pc = 0x255B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255B94u;
    // 0x255b98: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF068u, 0x255B94u, 0x255B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255B9Cu;
label_255b9c:
    // 0x255b9c: 0xde431020  ld          $v1, 0x1020($s2)
    ctx->pc = 0x255b9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
    // 0x255ba0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x255ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x255ba4: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x255ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x255ba8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x255ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x255bac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x255bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x255bb0: 0xfe431020  sd          $v1, 0x1020($s2)
    ctx->pc = 0x255bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4128), GPR_U64(ctx, 3));
    // 0x255bb4: 0x8c82bd70  lw          $v0, -0x4290($a0)
    ctx->pc = 0x255bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x255bb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x255bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x255bbc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x255BBCu;
    {
        const bool branch_taken_0x255bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255bbc) {
            ctx->pc = 0x255BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255BBCu;
            // 0x255bc0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255BFCu;
            goto label_255bfc;
        }
    }
    ctx->pc = 0x255BC4u;
    // 0x255bc4: 0x8e500fe8  lw          $s0, 0xFE8($s2)
    ctx->pc = 0x255bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x255bc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255bd0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x255bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x255bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bd8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x255bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x255bdc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x255bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x255be0: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x255be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x255be4: 0xc06f894  jal         func_1BE250
    ctx->pc = 0x255BE4u;
    SET_GPR_U32(ctx, 31, 0x255BECu);
    ctx->pc = 0x255BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BE4u;
    // 0x255be8: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE250u, 0x255BE4u, 0x255BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BECu;
label_255bec:
    // 0x255bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255bf0: 0xc0701da  jal         func_1C0768
    ctx->pc = 0x255BF0u;
    SET_GPR_U32(ctx, 31, 0x255BF8u);
    ctx->pc = 0x255BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255BF0u;
    // 0x255bf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0768u, 0x255BF0u, 0x255BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255BF8u;
label_255bf8:
    // 0x255bf8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x255bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_255bfc:
    // 0x255bfc: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x255bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x255c00: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x255c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x255c04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x255c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x255c08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x255c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x255c0c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x255c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x255c10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x255c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x255c14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x255c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255c18: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x255C18u;
    {
        const bool branch_taken_0x255c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255C18u;
        // 0x255c1c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c18) {
            ctx->pc = 0x255D78u;
            goto label_255d78;
        }
    }
    ctx->pc = 0x255C20u;
label_255c20:
    // 0x255c20: 0x52120056  beql        $s0, $s2, . + 4 + (0x56 << 2)
    ctx->pc = 0x255C20u;
    {
        const bool branch_taken_0x255c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x255c20) {
            ctx->pc = 0x255C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C20u;
            // 0x255c24: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D7Cu;
            goto label_255d7c;
        }
    }
    ctx->pc = 0x255C28u;
    // 0x255c28: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x255c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x255c2c: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x255c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x255c30: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x255C30u;
    {
        const bool branch_taken_0x255c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255c30) {
            ctx->pc = 0x255C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C30u;
            // 0x255c34: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D7Cu;
            goto label_255d7c;
        }
    }
    ctx->pc = 0x255C38u;
    // 0x255c38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x255C38u;
    SET_GPR_U32(ctx, 31, 0x255C40u);
    ctx->pc = 0x255C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255C38u;
    // 0x255c3c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x255C38u, 0x255C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255C40u;
label_255c40:
    // 0x255c40: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x255c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x255c44: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x255c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x255c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x255c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255c4c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x255c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x255c50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x255c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255c54: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x255c54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x255c58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x255c58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x255c5c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x255c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x255c60: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x255c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x255c64: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x255c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255c68: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x255c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255c6c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x255c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x255c70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x255c70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x255c74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x255c74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x255c78: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x255c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x255c7c: 0x46010044  c1          0x10044
    ctx->pc = 0x255c7cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x255c80: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x255c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x255c84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x255c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x255c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255c8c: 0x0  nop
    ctx->pc = 0x255c8cu;
    // NOP
    // 0x255c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255c94: 0x0  nop
    ctx->pc = 0x255c94u;
    // NOP
    // 0x255c98: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x255C98u;
    {
        const bool branch_taken_0x255c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255c98) {
            ctx->pc = 0x255C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255C98u;
            // 0x255c9c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D7Cu;
            goto label_255d7c;
        }
    }
    ctx->pc = 0x255CA0u;
    // 0x255ca0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x255ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x255ca4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x255ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x255ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255cac: 0x0  nop
    ctx->pc = 0x255cacu;
    // NOP
    // 0x255cb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x255cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255cb4: 0x0  nop
    ctx->pc = 0x255cb4u;
    // NOP
    // 0x255cb8: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x255CB8u;
    {
        const bool branch_taken_0x255cb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255cb8) {
            ctx->pc = 0x255CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255CB8u;
            // 0x255cbc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255D7Cu;
            goto label_255d7c;
        }
    }
    ctx->pc = 0x255CC0u;
    // 0x255cc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255cc8: 0x0  nop
    ctx->pc = 0x255cc8u;
    // NOP
    // 0x255ccc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x255cccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x255cd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x255cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x255cd4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x255cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x255cd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x255cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x255cdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x255cdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x255ce0: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x255ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x255ce4: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x255ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255ce8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x255ce8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x255cec: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x255cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255cf0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x255cf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x255cf4: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x255cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255cf8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x255cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255cfc: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x255cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x255d00: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x255d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x255d04: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x255d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x255d08: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x255D08u;
    SET_GPR_U32(ctx, 31, 0x255D10u);
    ctx->pc = 0x255D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D08u;
    // 0x255d0c: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x255D08u, 0x255D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D10u;
label_255d10:
    // 0x255d10: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x255d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255d14: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x255d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x255d18: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x255d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x255d1c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x255d1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x255d20: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x255d20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x255d24: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x255D24u;
    SET_GPR_U32(ctx, 31, 0x255D2Cu);
    ctx->pc = 0x255D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D24u;
    // 0x255d28: 0xe7a10110  swc1        $f1, 0x110($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x255D24u, 0x255D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D2Cu;
label_255d2c:
    // 0x255d2c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x255d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255d30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x255d30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x255d34: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x255d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x255d38: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x255d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x255d3c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x255d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x255d40: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x255d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x255d44: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x255d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x255d48: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x255d48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x255d4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x255d4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x255d50: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x255d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x255d54: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x255d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x255d58: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x255d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x255d5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x255d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x255d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d64: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x255d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x255d68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x255d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x255d6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x255d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x255d70: 0xc08fd5a  jal         func_23F568
    ctx->pc = 0x255D70u;
    SET_GPR_U32(ctx, 31, 0x255D78u);
    ctx->pc = 0x255D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255D70u;
    // 0x255d74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F568u, 0x255D70u, 0x255D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255D78u;
label_255d78:
    // 0x255d78: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x255d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_255d7c:
    // 0x255d7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x255d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x255D80u;
    {
        const bool branch_taken_0x255d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D80u;
        // 0x255d84: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d80) {
            ctx->pc = 0x255D8Cu;
            goto label_255d8c;
        }
    }
    ctx->pc = 0x255D88u;
    // 0x255d88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x255d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_255d8c:
    // 0x255d8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255D8Cu;
    {
        const bool branch_taken_0x255d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255d8c) {
            ctx->pc = 0x255D9Cu;
            goto label_255d9c;
        }
    }
    ctx->pc = 0x255D94u;
    // 0x255d94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x255d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x255d98: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x255d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_255d9c:
    // 0x255d9c: 0x1600ffa0  bnez        $s0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x255D9Cu;
    {
        const bool branch_taken_0x255d9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x255DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255D9Cu;
        // 0x255da0: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d9c) {
            ctx->pc = 0x255C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255c20;
        }
    }
    ctx->pc = 0x255DA4u;
    // 0x255da4: 0x26a20f90  addiu       $v0, $s5, 0xF90
    ctx->pc = 0x255da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3984));
    // 0x255da8: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x255da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x255dac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x255DACu;
    {
        const bool branch_taken_0x255dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DACu;
        // 0x255db0: 0xafa300ac  sw          $v1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dac) {
            ctx->pc = 0x255DD0u;
            goto label_255dd0;
        }
    }
    ctx->pc = 0x255DB4u;
    // 0x255db4: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x255db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_255db8:
    // 0x255db8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x255DB8u;
    SET_GPR_U32(ctx, 31, 0x255DC0u);
    ctx->pc = 0x255DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255DB8u;
    // 0x255dbc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x255DB8u, 0x255DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255DC0u;
label_255dc0:
    // 0x255dc0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x255dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x255dc4: 0x0  nop
    ctx->pc = 0x255dc4u;
    // NOP
    // 0x255dc8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x255DC8u;
    {
        const bool branch_taken_0x255dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255DC8u;
        // 0x255dcc: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dc8) {
            ctx->pc = 0x255DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255db8;
        }
    }
    ctx->pc = 0x255DD0u;
label_255dd0:
    // 0x255dd0: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x255dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x255dd4: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x255dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x255dd8: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x255dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x255ddc: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x255ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x255de0: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x255de0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x255de4: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x255de4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x255de8: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x255de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x255dec: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x255decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x255df0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x255df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255df4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x255df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x255df8: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x255df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x255dfc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x255dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x255e00: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x255e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x255e04: 0x3e00008  jr          $ra
    ctx->pc = 0x255E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E04u;
        // 0x255e08: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255E0Cu;
    // 0x255e0c: 0x0  nop
    ctx->pc = 0x255e0cu;
    // NOP
    ctx->pc = 0x255e10u;
}
