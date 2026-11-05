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

// Function: sub_0036CC80
// Address: 0x36cc80 - 0x36cd50
void sub_0036CC80_0x36cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CC80_0x36cc80");
#endif

    switch (ctx->pc) {
        case 0x36cc94u: goto label_36cc94;
        case 0x36cca4u: goto label_36cca4;
        default: break;
    }

    ctx->pc = 0x36cc80u;

    // 0x36cc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cc88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36cc8c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x36CC8Cu;
    SET_GPR_U32(ctx, 31, 0x36CC94u);
    ctx->pc = 0x36CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC8Cu;
    // 0x36cc90: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x36CC8Cu, 0x36CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC94u;
label_36cc94:
    // 0x36cc94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36cc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36cc9c: 0xc0fbe22  jal         func_3EF888
    ctx->pc = 0x36CC9Cu;
    SET_GPR_U32(ctx, 31, 0x36CCA4u);
    ctx->pc = 0x36CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC9Cu;
    // 0x36cca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF888u, 0x36CC9Cu, 0x36CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CCA4u;
label_36cca4:
    // 0x36cca4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x36cca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36cca8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ccac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36ccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36ccb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36ccb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ccb4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x36ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x36ccb8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x36ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x36ccbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x36ccbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x36ccc0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x36ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x36ccc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ccc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ccc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x36ccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x36cccc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36ccccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36ccd0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x36ccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x36ccd4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x36ccd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36ccd8: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x36ccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ccdc: 0xe6040078  swc1        $f4, 0x78($s0)
    ctx->pc = 0x36ccdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x36cce0: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x36cce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x36cce4: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x36cce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x36cce8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x36cce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ccec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x36ccecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ccf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x36ccf4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x36ccf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x36ccf8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x36ccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x36ccfc: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x36ccfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x36cd00: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x36cd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x36cd04: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x36cd04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x36cd08: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x36cd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x36cd0c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x36cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x36cd10: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x36cd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x36cd14: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x36cd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x36cd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cd1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cd20: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x36cd20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x36cd24: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x36cd24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x36cd28: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x36cd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36cd2c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x36cd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x36cd30: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x36cd30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x36cd34: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x36cd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x36cd38: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x36cd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x36cd3c: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x36cd3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x36cd40: 0xe4610034  swc1        $f1, 0x34($v1)
    ctx->pc = 0x36cd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x36cd44: 0x3e00008  jr          $ra
    ctx->pc = 0x36CD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD44u;
        // 0x36cd48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CD4Cu;
    // 0x36cd4c: 0x0  nop
    ctx->pc = 0x36cd4cu;
    // NOP
    ctx->pc = 0x36cd50u;
}
