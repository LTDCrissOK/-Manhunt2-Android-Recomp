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

// Function: sub_002A89C0
// Address: 0x2a89c0 - 0x2a8d80
void sub_002A89C0_0x2a89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A89C0_0x2a89c0");
#endif

    switch (ctx->pc) {
        case 0x2a8a60u: goto label_2a8a60;
        case 0x2a8aecu: goto label_2a8aec;
        case 0x2a8b10u: goto label_2a8b10;
        case 0x2a8b34u: goto label_2a8b34;
        case 0x2a8b70u: goto label_2a8b70;
        case 0x2a8b84u: goto label_2a8b84;
        case 0x2a8b9cu: goto label_2a8b9c;
        case 0x2a8ba8u: goto label_2a8ba8;
        case 0x2a8bf4u: goto label_2a8bf4;
        case 0x2a8c30u: goto label_2a8c30;
        case 0x2a8c44u: goto label_2a8c44;
        case 0x2a8c5cu: goto label_2a8c5c;
        case 0x2a8c68u: goto label_2a8c68;
        case 0x2a8cd0u: goto label_2a8cd0;
        case 0x2a8d10u: goto label_2a8d10;
        case 0x2a8d58u: goto label_2a8d58;
        default: break;
    }

    ctx->pc = 0x2a89c0u;

    // 0x2a89c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a89c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a89c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a89cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a89d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a89d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89d4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2a89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2a89d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a89d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a89e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a89e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89e4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2a89e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a89e8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a89e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a89ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a89f0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2a89f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2a89f4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2a89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2a89f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a89f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a89fc: 0x14a200c4  bne         $a1, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2A89FCu;
    {
        const bool branch_taken_0x2a89fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89FCu;
        // 0x2a8a00: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89fc) {
            ctx->pc = 0x2A8D10u;
            goto label_2a8d10;
        }
    }
    ctx->pc = 0x2A8A04u;
    // 0x2a8a04: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a8a08: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2a8a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a0c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2a8a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a10: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2a8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a8a14: 0xc4422b30  lwc1        $f2, 0x2B30($v0)
    ctx->pc = 0x2a8a14u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8a18: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2a8a18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8a20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a8a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a8a24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a8a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a28: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2a8a28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2a8a2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a8a30: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a8a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a8a34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a8a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a8a38: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2a8a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8a3c: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x2a8a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a8a40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a8a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8a44: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2a8a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2a8a48: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8A48u;
    {
        const bool branch_taken_0x2a8a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A48u;
        // 0x2a8a4c: 0xe4740004  swc1        $f20, 0x4($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a48) {
            ctx->pc = 0x2A8A9Cu;
            goto label_2a8a9c;
        }
    }
    ctx->pc = 0x2A8A50u;
    // 0x2a8a50: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a8a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a8a54: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2a8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2a8a58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A8A58u;
    SET_GPR_U32(ctx, 31, 0x2A8A60u);
    ctx->pc = 0x2A8A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8A58u;
    // 0x2a8a5c: 0x24a5d968  addiu       $a1, $a1, -0x2698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A8A58u, 0x2A8A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8A60u;
label_2a8a60:
    // 0x2a8a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a8a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8a64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A8A64u;
    {
        const bool branch_taken_0x2a8a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8a64) {
            ctx->pc = 0x2A8A9Cu;
            goto label_2a8a9c;
        }
    }
    ctx->pc = 0x2A8A6Cu;
    // 0x2a8a6c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2a8a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8a70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2a8a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8a74: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a8a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a8a78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8a7c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2a8a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8a80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a8a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a8a84: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x2a8a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a8a88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a8a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a8a8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a8a90: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a8a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2a8a94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8A94u;
    {
        const bool branch_taken_0x2a8a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A94u;
        // 0x2a8a98: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a94) {
            ctx->pc = 0x2A8ABCu;
            goto label_2a8abc;
        }
    }
    ctx->pc = 0x2A8A9Cu;
label_2a8a9c:
    // 0x2a8a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8aa4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a8aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a8aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8aac: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a8aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2a8ab0: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2a8ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a8ab4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a8ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a8ab8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2a8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2a8abc:
    // 0x2a8abc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2a8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a8ac0: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8AC0u;
    {
        const bool branch_taken_0x2a8ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8ac0) {
            ctx->pc = 0x2A8AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8AC0u;
            // 0x2a8ac4: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8B14u;
            goto label_2a8b14;
        }
    }
    ctx->pc = 0x2A8AC8u;
    // 0x2a8ac8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A8AC8u;
    {
        const bool branch_taken_0x2a8ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AC8u;
        // 0x2a8acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ac8) {
            ctx->pc = 0x2A8AF4u;
            goto label_2a8af4;
        }
    }
    ctx->pc = 0x2A8AD0u;
    // 0x2a8ad0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a8ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ad4: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x2a8ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a8ad8: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x2a8ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a8adc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a8adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ae0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2a8ae0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ae4: 0xc0aa360  jal         func_2A8D80
    ctx->pc = 0x2A8AE4u;
    SET_GPR_U32(ctx, 31, 0x2A8AECu);
    ctx->pc = 0x2A8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8AE4u;
    // 0x2a8ae8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D80u, 0x2A8AE4u, 0x2A8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8AECu;
label_2a8aec:
    // 0x2a8aec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8AECu;
    {
        const bool branch_taken_0x2a8aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8AECu;
        // 0x2a8af0: 0xc601001c  lwc1        $f1, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8aec) {
            ctx->pc = 0x2A8B14u;
            goto label_2a8b14;
        }
    }
    ctx->pc = 0x2A8AF4u;
label_2a8af4:
    // 0x2a8af4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a8af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8af8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a8af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8afc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a8afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b00: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a8b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b04: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2a8b04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b08: 0xc0aa360  jal         func_2A8D80
    ctx->pc = 0x2A8B08u;
    SET_GPR_U32(ctx, 31, 0x2A8B10u);
    ctx->pc = 0x2A8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B08u;
    // 0x2a8b0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D80u, 0x2A8B08u, 0x2A8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B10u;
label_2a8b10:
    // 0x2a8b10: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2a8b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a8b14:
    // 0x2a8b14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b18: 0x0  nop
    ctx->pc = 0x2a8b18u;
    // NOP
    // 0x2a8b1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8b20: 0x0  nop
    ctx->pc = 0x2a8b20u;
    // NOP
    // 0x2a8b24: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x2A8B24u;
    {
        const bool branch_taken_0x2a8b24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8b24) {
            ctx->pc = 0x2A8B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8B24u;
            // 0x2a8b28: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8BD8u;
            goto label_2a8bd8;
        }
    }
    ctx->pc = 0x2A8B2Cu;
    // 0x2a8b2c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B34u);
    ctx->pc = 0x2A8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B2Cu;
    // 0x2a8b30: 0x8e110038  lw          $s1, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8B2Cu, 0x2A8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B34u;
label_2a8b34:
    // 0x2a8b34: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8B34u;
    {
        const bool branch_taken_0x2a8b34 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2A8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B34u;
        // 0x2a8b38: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b34) {
            ctx->pc = 0x2A8B50u;
            goto label_2a8b50;
        }
    }
    ctx->pc = 0x2A8B3Cu;
    // 0x2a8b3c: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x2a8b3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8b40: 0x0  nop
    ctx->pc = 0x2a8b40u;
    // NOP
    // 0x2a8b44: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8b48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8B48u;
    {
        const bool branch_taken_0x2a8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8b48) {
            ctx->pc = 0x2A8B68u;
            goto label_2a8b68;
        }
    }
    ctx->pc = 0x2A8B50u;
label_2a8b50:
    // 0x2a8b50: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a8b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2a8b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8b58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8b5c: 0x0  nop
    ctx->pc = 0x2a8b5cu;
    // NOP
    // 0x2a8b60: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8b64: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a8b64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a8b68:
    // 0x2a8b68: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2A8B68u;
    SET_GPR_U32(ctx, 31, 0x2A8B70u);
    ctx->pc = 0x2A8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B68u;
    // 0x2a8b6c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A8B68u, 0x2A8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B70u;
label_2a8b70:
    // 0x2a8b70: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x2a8b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2a8b74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8B74u;
    {
        const bool branch_taken_0x2a8b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B74u;
        // 0x2a8b78: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b74) {
            ctx->pc = 0x2A8B94u;
            goto label_2a8b94;
        }
    }
    ctx->pc = 0x2A8B7Cu;
    // 0x2a8b7c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B84u);
    ctx->pc = 0x2A8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B7Cu;
    // 0x2a8b80: 0xc6140030  lwc1        $f20, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8B7Cu, 0x2A8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B84u;
label_2a8b84:
    // 0x2a8b84: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a8b84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a8b88: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x2a8b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8b8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A8B8Cu;
    {
        const bool branch_taken_0x2a8b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B8Cu;
        // 0x2a8b90: 0xe614001c  swc1        $f20, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b8c) {
            ctx->pc = 0x2A8BD0u;
            goto label_2a8bd0;
        }
    }
    ctx->pc = 0x2A8B94u;
label_2a8b94:
    // 0x2a8b94: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8B94u;
    SET_GPR_U32(ctx, 31, 0x2A8B9Cu);
    ctx->pc = 0x2A8B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B94u;
    // 0x2a8b98: 0xc614002c  lwc1        $f20, 0x2C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8B94u, 0x2A8B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8B9Cu;
label_2a8b9c:
    // 0x2a8b9c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a8b9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a8ba0: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8BA0u;
    SET_GPR_U32(ctx, 31, 0x2A8BA8u);
    ctx->pc = 0x2A8BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BA0u;
    // 0x2a8ba4: 0xe614001c  swc1        $f20, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8BA0u, 0x2A8BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BA8u;
label_2a8ba8:
    // 0x2a8ba8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a8ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a8bac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8bb0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2a8bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8bb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8bb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8bbc: 0x0  nop
    ctx->pc = 0x2a8bbcu;
    // NOP
    // 0x2a8bc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8BC0u;
    {
        const bool branch_taken_0x2a8bc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BC0u;
        // 0x2a8bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bc0) {
            ctx->pc = 0x2A8BCCu;
            goto label_2a8bcc;
        }
    }
    ctx->pc = 0x2A8BC8u;
    // 0x2a8bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8bcc:
    // 0x2a8bcc: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x2a8bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_2a8bd0:
    // 0x2a8bd0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2a8bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a8bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a8bd8:
    // 0x2a8bd8: 0x0  nop
    ctx->pc = 0x2a8bd8u;
    // NOP
    // 0x2a8bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8be0: 0x0  nop
    ctx->pc = 0x2a8be0u;
    // NOP
    // 0x2a8be4: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x2A8BE4u;
    {
        const bool branch_taken_0x2a8be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8be4) {
            ctx->pc = 0x2A8BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8BE4u;
            // 0x2a8be8: 0x92020034  lbu         $v0, 0x34($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8C94u;
            goto label_2a8c94;
        }
    }
    ctx->pc = 0x2A8BECu;
    // 0x2a8bec: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8BECu;
    SET_GPR_U32(ctx, 31, 0x2A8BF4u);
    ctx->pc = 0x2A8BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BECu;
    // 0x2a8bf0: 0x8e110038  lw          $s1, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8BECu, 0x2A8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8BF4u;
label_2a8bf4:
    // 0x2a8bf4: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8BF4u;
    {
        const bool branch_taken_0x2a8bf4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2A8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8BF4u;
        // 0x2a8bf8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8bf4) {
            ctx->pc = 0x2A8C10u;
            goto label_2a8c10;
        }
    }
    ctx->pc = 0x2A8BFCu;
    // 0x2a8bfc: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x2a8bfcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8c00: 0x0  nop
    ctx->pc = 0x2a8c00u;
    // NOP
    // 0x2a8c04: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8c08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8C08u;
    {
        const bool branch_taken_0x2a8c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c08) {
            ctx->pc = 0x2A8C28u;
            goto label_2a8c28;
        }
    }
    ctx->pc = 0x2A8C10u;
label_2a8c10:
    // 0x2a8c10: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a8c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2a8c14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a8c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a8c18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8c1c: 0x0  nop
    ctx->pc = 0x2a8c1cu;
    // NOP
    // 0x2a8c20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a8c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a8c24: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a8c24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a8c28:
    // 0x2a8c28: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2A8C28u;
    SET_GPR_U32(ctx, 31, 0x2A8C30u);
    ctx->pc = 0x2A8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C28u;
    // 0x2a8c2c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A8C28u, 0x2A8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C30u;
label_2a8c30:
    // 0x2a8c30: 0x92030035  lbu         $v1, 0x35($s0)
    ctx->pc = 0x2a8c30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x2a8c34: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8C34u;
    {
        const bool branch_taken_0x2a8c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C34u;
        // 0x2a8c38: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c34) {
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C3Cu;
    // 0x2a8c3c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A8C44u);
    ctx->pc = 0x2A8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C3Cu;
    // 0x2a8c40: 0xc6140030  lwc1        $f20, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8C3Cu, 0x2A8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C44u;
label_2a8c44:
    // 0x2a8c44: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a8c44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a8c48: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x2a8c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a8c4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A8C4Cu;
    {
        const bool branch_taken_0x2a8c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C4Cu;
        // 0x2a8c50: 0xe6140020  swc1        $f20, 0x20($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c4c) {
            ctx->pc = 0x2A8C90u;
            goto label_2a8c90;
        }
    }
    ctx->pc = 0x2A8C54u;
label_2a8c54:
    // 0x2a8c54: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8C54u;
    SET_GPR_U32(ctx, 31, 0x2A8C5Cu);
    ctx->pc = 0x2A8C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C54u;
    // 0x2a8c58: 0xc614002c  lwc1        $f20, 0x2C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8C54u, 0x2A8C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C5Cu;
label_2a8c5c:
    // 0x2a8c5c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a8c5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a8c60: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A8C60u;
    SET_GPR_U32(ctx, 31, 0x2A8C68u);
    ctx->pc = 0x2A8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8C60u;
    // 0x2a8c64: 0xe6140020  swc1        $f20, 0x20($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A8C60u, 0x2A8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C68u;
label_2a8c68:
    // 0x2a8c68: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a8c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a8c6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a8c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a8c70: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2a8c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8c74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2a8c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a8c78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a8c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8c7c: 0x0  nop
    ctx->pc = 0x2a8c7cu;
    // NOP
    // 0x2a8c80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8C80u;
    {
        const bool branch_taken_0x2a8c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C80u;
        // 0x2a8c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8c80) {
            ctx->pc = 0x2A8C8Cu;
            goto label_2a8c8c;
        }
    }
    ctx->pc = 0x2A8C88u;
    // 0x2a8c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8c8c:
    // 0x2a8c8c: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x2a8c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
label_2a8c90:
    // 0x2a8c90: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x2a8c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_2a8c94:
    // 0x2a8c94: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A8C94u;
    {
        const bool branch_taken_0x2a8c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8c94) {
            ctx->pc = 0x2A8C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8C94u;
            // 0x2a8c98: 0x92020035  lbu         $v0, 0x35($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8CD4u;
            goto label_2a8cd4;
        }
    }
    ctx->pc = 0x2A8C9Cu;
    // 0x2a8c9c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2a8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a8ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a8ca4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a8ca8: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x2a8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2a8cac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8CACu;
    {
        const bool branch_taken_0x2a8cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CACu;
        // 0x2a8cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8cac) {
            ctx->pc = 0x2A8CD0u;
            goto label_2a8cd0;
        }
    }
    ctx->pc = 0x2A8CB4u;
    // 0x2a8cb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a8cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cb8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a8cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cbc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a8cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a8cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2a8cc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc8: 0xc0aa360  jal         func_2A8D80
    ctx->pc = 0x2A8CC8u;
    SET_GPR_U32(ctx, 31, 0x2A8CD0u);
    ctx->pc = 0x2A8CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CC8u;
    // 0x2a8ccc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D80u, 0x2A8CC8u, 0x2A8CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CD0u;
label_2a8cd0:
    // 0x2a8cd0: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x2a8cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_2a8cd4:
    // 0x2a8cd4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A8CD4u;
    {
        const bool branch_taken_0x2a8cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8cd4) {
            ctx->pc = 0x2A8CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8CD4u;
            // 0x2a8cd8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D14u;
            goto label_2a8d14;
        }
    }
    ctx->pc = 0x2A8CDCu;
    // 0x2a8cdc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a8ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a8ce4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a8ce8: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x2a8ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2a8cec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8CECu;
    {
        const bool branch_taken_0x2a8cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8CECu;
        // 0x2a8cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8cec) {
            ctx->pc = 0x2A8D10u;
            goto label_2a8d10;
        }
    }
    ctx->pc = 0x2A8CF4u;
    // 0x2a8cf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a8cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cf8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a8cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cfc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a8cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d00: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2a8d00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a8d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2a8d08: 0xc0aa360  jal         func_2A8D80
    ctx->pc = 0x2A8D08u;
    SET_GPR_U32(ctx, 31, 0x2A8D10u);
    ctx->pc = 0x2A8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D08u;
    // 0x2a8d0c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D80u, 0x2A8D08u, 0x2A8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D10u;
label_2a8d10:
    // 0x2a8d10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a8d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a8d14:
    // 0x2a8d14: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2a8d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a8d18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a8d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8d1c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2a8d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8d20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a8d20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8d24: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2a8d24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8d28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a8d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8d2c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2a8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8d30: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2a8d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8d34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D34u;
        // 0x2a8d38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D3Cu;
    // 0x2a8d3c: 0x0  nop
    ctx->pc = 0x2a8d3cu;
    // NOP
    // 0x2a8d40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a8d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d48: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x2a8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x2a8d4c: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2a8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2a8d50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a8d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a8d54: 0x0  nop
    ctx->pc = 0x2a8d54u;
    // NOP
label_2a8d58:
    // 0x2a8d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8d5c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a8d60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8D60u;
    {
        const bool branch_taken_0x2a8d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D60u;
        // 0x2a8d64: 0x2ca30004  sltiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d60) {
            ctx->pc = 0x2A8D6Cu;
            goto label_2a8d6c;
        }
    }
    ctx->pc = 0x2A8D68u;
    // 0x2a8d68: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2a8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_2a8d6c:
    // 0x2a8d6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A8D6Cu;
    {
        const bool branch_taken_0x2a8d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D6Cu;
        // 0x2a8d70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d6c) {
            ctx->pc = 0x2A8D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8d58;
        }
    }
    ctx->pc = 0x2A8D74u;
    // 0x2a8d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D7Cu;
    // 0x2a8d7c: 0x0  nop
    ctx->pc = 0x2a8d7cu;
    // NOP
    ctx->pc = 0x2a8d80u;
}
