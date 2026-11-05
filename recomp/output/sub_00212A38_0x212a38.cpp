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

// Function: sub_00212A38
// Address: 0x212a38 - 0x212ae8
void sub_00212A38_0x212a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212A38_0x212a38");
#endif

    switch (ctx->pc) {
        case 0x212a74u: goto label_212a74;
        case 0x212aacu: goto label_212aac;
        case 0x212ab4u: goto label_212ab4;
        case 0x212accu: goto label_212acc;
        case 0x212ad4u: goto label_212ad4;
        default: break;
    }

    ctx->pc = 0x212a38u;

    // 0x212a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212a3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x212a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x212a40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x212a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x212a44: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x212a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x212a48: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x212a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x212a4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x212A4Cu;
    {
        const bool branch_taken_0x212a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A4Cu;
        // 0x212a50: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a4c) {
            ctx->pc = 0x212A64u;
            goto label_212a64;
        }
    }
    ctx->pc = 0x212A54u;
    // 0x212a54: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x212a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x212a58: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x212A58u;
    {
        const bool branch_taken_0x212a58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A58u;
        // 0x212a5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a58) {
            ctx->pc = 0x212ABCu;
            goto label_212abc;
        }
    }
    ctx->pc = 0x212A60u;
    // 0x212a60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x212a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_212a64:
    // 0x212a64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x212a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a68: 0x8c62bcf0  lw          $v0, -0x4310($v1)
    ctx->pc = 0x212a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950128)));
    // 0x212a6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x212A6Cu;
    SET_GPR_U32(ctx, 31, 0x212A74u);
    ctx->pc = 0x212A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A6Cu;
    // 0x212a70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x212A6Cu, 0x212A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A74u;
label_212a74:
    // 0x212a74: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x212a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x212a78: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x212a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x212a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212a80: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x212a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x212a84: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x212a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x212a88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x212a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x212a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212a90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x212a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212a94: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x212a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x212a98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x212a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x212a9c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x212a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x212aa0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x212aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x212aa4: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x212AA4u;
    SET_GPR_U32(ctx, 31, 0x212AACu);
    ctx->pc = 0x212AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AA4u;
    // 0x212aa8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x212AA4u, 0x212AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AACu;
label_212aac:
    // 0x212aac: 0xc0c48da  jal         func_312368
    ctx->pc = 0x212AACu;
    SET_GPR_U32(ctx, 31, 0x212AB4u);
    ctx->pc = 0x212AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AACu;
    // 0x212ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x212AACu, 0x212AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AB4u;
label_212ab4:
    // 0x212ab4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x212AB4u;
    {
        const bool branch_taken_0x212ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AB4u;
        // 0x212ab8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ab4) {
            ctx->pc = 0x212AD8u;
            goto label_212ad8;
        }
    }
    ctx->pc = 0x212ABCu;
label_212abc:
    // 0x212abc: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x212abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x212ac0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x212ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212ac4: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x212AC4u;
    SET_GPR_U32(ctx, 31, 0x212ACCu);
    ctx->pc = 0x212AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AC4u;
    // 0x212ac8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x212AC4u, 0x212ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ACCu;
label_212acc:
    // 0x212acc: 0xc0c48da  jal         func_312368
    ctx->pc = 0x212ACCu;
    SET_GPR_U32(ctx, 31, 0x212AD4u);
    ctx->pc = 0x212AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212ACCu;
    // 0x212ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x212ACCu, 0x212AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AD4u;
label_212ad4:
    // 0x212ad4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x212ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212ad8:
    // 0x212ad8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x212ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212adc: 0x3e00008  jr          $ra
    ctx->pc = 0x212ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ADCu;
        // 0x212ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212AE4u;
    // 0x212ae4: 0x0  nop
    ctx->pc = 0x212ae4u;
    // NOP
    ctx->pc = 0x212ae8u;
}
