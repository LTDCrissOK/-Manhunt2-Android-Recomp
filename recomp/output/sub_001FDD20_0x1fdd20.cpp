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

// Function: sub_001FDD20
// Address: 0x1fdd20 - 0x1fdfa0
void sub_001FDD20_0x1fdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDD20_0x1fdd20");
#endif

    switch (ctx->pc) {
        case 0x1fdd68u: goto label_1fdd68;
        case 0x1fdd70u: goto label_1fdd70;
        case 0x1fdd78u: goto label_1fdd78;
        case 0x1fdd80u: goto label_1fdd80;
        case 0x1fdd8cu: goto label_1fdd8c;
        case 0x1fdd98u: goto label_1fdd98;
        case 0x1fddb8u: goto label_1fddb8;
        case 0x1fddc0u: goto label_1fddc0;
        case 0x1fddccu: goto label_1fddcc;
        case 0x1fddecu: goto label_1fddec;
        case 0x1fde20u: goto label_1fde20;
        case 0x1fde28u: goto label_1fde28;
        case 0x1fde44u: goto label_1fde44;
        case 0x1fde58u: goto label_1fde58;
        case 0x1fde70u: goto label_1fde70;
        case 0x1fde78u: goto label_1fde78;
        case 0x1fde94u: goto label_1fde94;
        case 0x1fdea8u: goto label_1fdea8;
        case 0x1fdec4u: goto label_1fdec4;
        case 0x1fdedcu: goto label_1fdedc;
        case 0x1fdeecu: goto label_1fdeec;
        case 0x1fdef4u: goto label_1fdef4;
        case 0x1fdf0cu: goto label_1fdf0c;
        case 0x1fdf1cu: goto label_1fdf1c;
        case 0x1fdf24u: goto label_1fdf24;
        case 0x1fdf30u: goto label_1fdf30;
        case 0x1fdf38u: goto label_1fdf38;
        case 0x1fdf44u: goto label_1fdf44;
        case 0x1fdf50u: goto label_1fdf50;
        default: break;
    }

    ctx->pc = 0x1fdd20u;

    // 0x1fdd20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fdd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fdd24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdd28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fdd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fdd2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fdd30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fdd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fdd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fdd38: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1fdd3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fdd40: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1fdd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fdd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fdd48: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fdd48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdd4c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1fdd4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1fdd50: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1fdd50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fdd54: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1fdd54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fdd58: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x1fdd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x1fdd5c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x1fdd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x1fdd60: 0xc08065c  jal         func_201970
    ctx->pc = 0x1FDD60u;
    SET_GPR_U32(ctx, 31, 0x1FDD68u);
    ctx->pc = 0x1FDD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD60u;
    // 0x1fdd64: 0xa2220050  sb          $v0, 0x50($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201970u, 0x1FDD60u, 0x1FDD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD68u;
label_1fdd68:
    // 0x1fdd68: 0xc0816fe  jal         func_205BF8
    ctx->pc = 0x1FDD68u;
    SET_GPR_U32(ctx, 31, 0x1FDD70u);
    ctx->pc = 0x205BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205BF8u, 0x1FDD68u, 0x1FDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD70u;
label_1fdd70:
    // 0x1fdd70: 0xc08173c  jal         func_205CF0
    ctx->pc = 0x1FDD70u;
    SET_GPR_U32(ctx, 31, 0x1FDD78u);
    ctx->pc = 0x1FDD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD70u;
    // 0x1fdd74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CF0u, 0x1FDD70u, 0x1FDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD78u;
label_1fdd78:
    // 0x1fdd78: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDD78u;
    SET_GPR_U32(ctx, 31, 0x1FDD80u);
    ctx->pc = 0x1FDD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD78u;
    // 0x1fdd7c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDD78u, 0x1FDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD80u;
label_1fdd80:
    // 0x1fdd80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fdd84: 0xc0815a8  jal         func_2056A0
    ctx->pc = 0x1FDD84u;
    SET_GPR_U32(ctx, 31, 0x1FDD8Cu);
    ctx->pc = 0x1FDD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD84u;
    // 0x1fdd88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2056A0u, 0x1FDD84u, 0x1FDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD8Cu;
label_1fdd8c:
    // 0x1fdd8c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1fdd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1fdd90: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDD90u;
    SET_GPR_U32(ctx, 31, 0x1FDD98u);
    ctx->pc = 0x1FDD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD90u;
    // 0x1fdd94: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDD90u, 0x1FDD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD98u;
label_1fdd98:
    // 0x1fdd98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fdda0: 0x24065dc0  addiu       $a2, $zero, 0x5DC0
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x1fdda4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fdda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdda8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fdda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fddac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fddacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fddb0: 0xc081368  jal         func_204DA0
    ctx->pc = 0x1FDDB0u;
    SET_GPR_U32(ctx, 31, 0x1FDDB8u);
    ctx->pc = 0x1FDDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDB0u;
    // 0x1fddb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA0u, 0x1FDDB0u, 0x1FDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDDB8u;
label_1fddb8:
    // 0x1fddb8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1fddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1fddbc: 0x0  nop
    ctx->pc = 0x1fddbcu;
    // NOP
label_1fddc0:
    // 0x1fddc0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1fddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1fddc4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDDC4u;
    SET_GPR_U32(ctx, 31, 0x1FDDCCu);
    ctx->pc = 0x1FDDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDC4u;
    // 0x1fddc8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDDC4u, 0x1FDDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDDCCu;
label_1fddcc:
    // 0x1fddcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fddd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fddd4: 0x24065dc0  addiu       $a2, $zero, 0x5DC0
    ctx->pc = 0x1fddd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x1fddd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fddd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdddc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fdddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdde0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fdde0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdde4: 0xc081368  jal         func_204DA0
    ctx->pc = 0x1FDDE4u;
    SET_GPR_U32(ctx, 31, 0x1FDDECu);
    ctx->pc = 0x1FDDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDE4u;
    // 0x1fdde8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA0u, 0x1FDDE4u, 0x1FDDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDDECu;
label_1fddec:
    // 0x1fddec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fddecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fddf0: 0x641fff3  bgez        $s2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FDDF0u;
    {
        const bool branch_taken_0x1fddf0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF0u;
        // 0x1fddf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf0) {
            ctx->pc = 0x1FDDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fddc0;
        }
    }
    ctx->pc = 0x1FDDF8u;
    // 0x1fddf8: 0xa220003c  sb          $zero, 0x3C($s1)
    ctx->pc = 0x1fddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fddfc: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x1fddfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1fde00: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x1fde00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fde04: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1fde04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fde08: 0xa2200049  sb          $zero, 0x49($s1)
    ctx->pc = 0x1fde08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fde0c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1fde0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fde10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fde10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fde14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fde14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fde18: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1fde18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1fde1c: 0x0  nop
    ctx->pc = 0x1fde1cu;
    // NOP
label_1fde20:
    // 0x1fde20: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDE20u;
    SET_GPR_U32(ctx, 31, 0x1FDE28u);
    ctx->pc = 0x1FDE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE20u;
    // 0x1fde24: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDE20u, 0x1FDE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE28u;
label_1fde28:
    // 0x1fde28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fde28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fde2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fde2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde30: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1fde30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x1fde34: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1fde34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fde38: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1fde38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1fde3c: 0xc08245a  jal         func_209168
    ctx->pc = 0x1FDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE44u);
    ctx->pc = 0x1FDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE3Cu;
    // 0x1fde40: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209168u, 0x1FDE3Cu, 0x1FDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE44u;
label_1fde44:
    // 0x1fde44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fde44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fde48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fde48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fde4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde50: 0xc0824dc  jal         func_209370
    ctx->pc = 0x1FDE50u;
    SET_GPR_U32(ctx, 31, 0x1FDE58u);
    ctx->pc = 0x1FDE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE50u;
    // 0x1fde54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209370u, 0x1FDE50u, 0x1FDE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE58u;
label_1fde58:
    // 0x1fde58: 0x641fff1  bgez        $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FDE58u;
    {
        const bool branch_taken_0x1fde58 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE58u;
        // 0x1fde5c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde58) {
            ctx->pc = 0x1FDE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fde20;
        }
    }
    ctx->pc = 0x1FDE60u;
    // 0x1fde60: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x1fde60u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x1fde64: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1fde64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde68: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1fde68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fde6c: 0x0  nop
    ctx->pc = 0x1fde6cu;
    // NOP
label_1fde70:
    // 0x1fde70: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDE70u;
    SET_GPR_U32(ctx, 31, 0x1FDE78u);
    ctx->pc = 0x1FDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE70u;
    // 0x1fde74: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDE70u, 0x1FDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE78u;
label_1fde78:
    // 0x1fde78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fde78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fde7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fde7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde80: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1fde80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x1fde84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1fde84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fde88: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1fde88u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1fde8c: 0xc08245a  jal         func_209168
    ctx->pc = 0x1FDE8Cu;
    SET_GPR_U32(ctx, 31, 0x1FDE94u);
    ctx->pc = 0x1FDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE8Cu;
    // 0x1fde90: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209168u, 0x1FDE8Cu, 0x1FDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDE94u;
label_1fde94:
    // 0x1fde94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fde94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fde98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fde98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fde9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdea0: 0xc0824dc  jal         func_209370
    ctx->pc = 0x1FDEA0u;
    SET_GPR_U32(ctx, 31, 0x1FDEA8u);
    ctx->pc = 0x1FDEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEA0u;
    // 0x1fdea4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209370u, 0x1FDEA0u, 0x1FDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEA8u;
label_1fdea8:
    // 0x1fdea8: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FDEA8u;
    {
        const bool branch_taken_0x1fdea8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1fdea8) {
            ctx->pc = 0x1FDEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDEA8u;
            // 0x1fdeac: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fde70;
        }
    }
    ctx->pc = 0x1FDEB0u;
    // 0x1fdeb0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1fdeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1fdeb4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x1fdeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x1fdeb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1fdeb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1fdebc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDEBCu;
    SET_GPR_U32(ctx, 31, 0x1FDEC4u);
    ctx->pc = 0x1FDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEBCu;
    // 0x1fdec0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDEBCu, 0x1FDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEC4u;
label_1fdec4:
    // 0x1fdec4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fdec4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fdec8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1fdec8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1fdecc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1fdeccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1fded0: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x1fded0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x1fded4: 0xc08245a  jal         func_209168
    ctx->pc = 0x1FDED4u;
    SET_GPR_U32(ctx, 31, 0x1FDEDCu);
    ctx->pc = 0x1FDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDED4u;
    // 0x1fded8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209168u, 0x1FDED4u, 0x1FDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEDCu;
label_1fdedc:
    // 0x1fdedc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdee4: 0xc0824dc  jal         func_209370
    ctx->pc = 0x1FDEE4u;
    SET_GPR_U32(ctx, 31, 0x1FDEECu);
    ctx->pc = 0x1FDEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEE4u;
    // 0x1fdee8: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209370u, 0x1FDEE4u, 0x1FDEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEECu;
label_1fdeec:
    // 0x1fdeec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDEECu;
    SET_GPR_U32(ctx, 31, 0x1FDEF4u);
    ctx->pc = 0x1FDEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEECu;
    // 0x1fdef0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDEECu, 0x1FDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEF4u;
label_1fdef4:
    // 0x1fdef4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1fdef4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1fdef8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fdef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fdefc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1fdefcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1fdf00: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1fdf00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1fdf04: 0xc08245a  jal         func_209168
    ctx->pc = 0x1FDF04u;
    SET_GPR_U32(ctx, 31, 0x1FDF0Cu);
    ctx->pc = 0x1FDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF04u;
    // 0x1fdf08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209168u, 0x1FDF04u, 0x1FDF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF0Cu;
label_1fdf0c:
    // 0x1fdf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fdf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf14: 0xc0824dc  jal         func_209370
    ctx->pc = 0x1FDF14u;
    SET_GPR_U32(ctx, 31, 0x1FDF1Cu);
    ctx->pc = 0x1FDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF14u;
    // 0x1fdf18: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209370u, 0x1FDF14u, 0x1FDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF1Cu;
label_1fdf1c:
    // 0x1fdf1c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDF1Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF24u);
    ctx->pc = 0x1FDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF1Cu;
    // 0x1fdf20: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDF1Cu, 0x1FDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF24u;
label_1fdf24:
    // 0x1fdf24: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1fdf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fdf28: 0xc081862  jal         func_206188
    ctx->pc = 0x1FDF28u;
    SET_GPR_U32(ctx, 31, 0x1FDF30u);
    ctx->pc = 0x1FDF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF28u;
    // 0x1fdf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206188u, 0x1FDF28u, 0x1FDF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF30u;
label_1fdf30:
    // 0x1fdf30: 0xc081d24  jal         func_207490
    ctx->pc = 0x1FDF30u;
    SET_GPR_U32(ctx, 31, 0x1FDF38u);
    ctx->pc = 0x1FDF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF30u;
    // 0x1fdf34: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207490u, 0x1FDF30u, 0x1FDF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF38u;
label_1fdf38:
    // 0x1fdf38: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x1fdf38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fdf3c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1FDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF44u);
    ctx->pc = 0x1FDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF3Cu;
    // 0x1fdf40: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1FDF3Cu, 0x1FDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF44u;
label_1fdf44:
    // 0x1fdf44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fdf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf48: 0xc081862  jal         func_206188
    ctx->pc = 0x1FDF48u;
    SET_GPR_U32(ctx, 31, 0x1FDF50u);
    ctx->pc = 0x1FDF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF48u;
    // 0x1fdf4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206188u, 0x1FDF48u, 0x1FDF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF50u;
label_1fdf50:
    // 0x1fdf50: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1fdf50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x1fdf54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdf58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fdf5c: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x1fdf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x1fdf60: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x1fdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x1fdf64: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x1fdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x1fdf68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdf6c: 0xa2200100  sb          $zero, 0x100($s1)
    ctx->pc = 0x1fdf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdf70: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x1fdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x1fdf74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdf74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdf78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fdf78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdf7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdf80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fdf80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fdf84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdf88: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1fdf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fdf8c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1fdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fdf90: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1fdf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fdf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF94u;
        // 0x1fdf98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDF9Cu;
    // 0x1fdf9c: 0x0  nop
    ctx->pc = 0x1fdf9cu;
    // NOP
    ctx->pc = 0x1fdfa0u;
}
