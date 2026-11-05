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

// Function: sub_002FF310
// Address: 0x2ff310 - 0x2ff3f8
void sub_002FF310_0x2ff310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF310_0x2ff310");
#endif

    switch (ctx->pc) {
        case 0x2ff3c0u: goto label_2ff3c0;
        case 0x2ff3c8u: goto label_2ff3c8;
        case 0x2ff3d0u: goto label_2ff3d0;
        case 0x2ff3e8u: goto label_2ff3e8;
        default: break;
    }

    ctx->pc = 0x2ff310u;

    // 0x2ff310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff320: 0x920202f0  lbu         $v0, 0x2F0($s0)
    ctx->pc = 0x2ff320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x2ff324: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2FF324u;
    {
        const bool branch_taken_0x2ff324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff324) {
            ctx->pc = 0x2FF328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF324u;
            // 0x2ff328: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF3ECu;
            goto label_2ff3ec;
        }
    }
    ctx->pc = 0x2FF32Cu;
    // 0x2ff32c: 0xc60102e4  lwc1        $f1, 0x2E4($s0)
    ctx->pc = 0x2ff32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ff330: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x2ff330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x2ff334: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ff334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ff338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff33c: 0x0  nop
    ctx->pc = 0x2ff33cu;
    // NOP
    // 0x2ff340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ff340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff344: 0x0  nop
    ctx->pc = 0x2ff344u;
    // NOP
    // 0x2ff348: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2FF348u;
    {
        const bool branch_taken_0x2ff348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF348u;
        // 0x2ff34c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff348) {
            ctx->pc = 0x2FF3E0u;
            goto label_2ff3e0;
        }
    }
    ctx->pc = 0x2FF350u;
    // 0x2ff350: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2ff350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2ff354: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF354u;
    {
        const bool branch_taken_0x2ff354 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF354u;
        // 0x2ff358: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff354) {
            ctx->pc = 0x2FF370u;
            goto label_2ff370;
        }
    }
    ctx->pc = 0x2FF35Cu;
    // 0x2ff35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff360: 0x0  nop
    ctx->pc = 0x2ff360u;
    // NOP
    // 0x2ff364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ff368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF368u;
    {
        const bool branch_taken_0x2ff368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff368) {
            ctx->pc = 0x2FF388u;
            goto label_2ff388;
        }
    }
    ctx->pc = 0x2FF370u;
label_2ff370:
    // 0x2ff370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ff370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ff374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ff374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ff378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff37c: 0x0  nop
    ctx->pc = 0x2ff37cu;
    // NOP
    // 0x2ff380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ff384: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ff384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ff388:
    // 0x2ff388: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ff388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2ff38c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ff38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2ff390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ff390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ff394: 0xc60202ec  lwc1        $f2, 0x2EC($s0)
    ctx->pc = 0x2ff394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ff398: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2ff398u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2ff39c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x2ff39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x2ff3a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ff3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff3a4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2ff3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2ff3a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ff3a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ff3ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff3b0: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x2ff3b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x2ff3b4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2ff3b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2ff3b8: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x2FF3B8u;
    SET_GPR_U32(ctx, 31, 0x2FF3C0u);
    ctx->pc = 0x2FF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3B8u;
    // 0x2ff3bc: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x2FF3B8u, 0x2FF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3C0u;
label_2ff3c0:
    // 0x2ff3c0: 0xc0e3ff6  jal         func_38FFD8
    ctx->pc = 0x2FF3C0u;
    SET_GPR_U32(ctx, 31, 0x2FF3C8u);
    ctx->pc = 0x2FF3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3C0u;
    // 0x2ff3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD8u, 0x2FF3C0u, 0x2FF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3C8u;
label_2ff3c8:
    // 0x2ff3c8: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x2FF3C8u;
    SET_GPR_U32(ctx, 31, 0x2FF3D0u);
    ctx->pc = 0x2FF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3C8u;
    // 0x2ff3cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x2FF3C8u, 0x2FF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3D0u;
label_2ff3d0:
    // 0x2ff3d0: 0xc60102e4  lwc1        $f1, 0x2E4($s0)
    ctx->pc = 0x2ff3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ff3d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ff3d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ff3d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF3D8u;
    {
        const bool branch_taken_0x2ff3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3D8u;
        // 0x2ff3dc: 0xe60102e4  swc1        $f1, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3d8) {
            ctx->pc = 0x2FF3E8u;
            goto label_2ff3e8;
        }
    }
    ctx->pc = 0x2FF3E0u;
label_2ff3e0:
    // 0x2ff3e0: 0xc0bfd1c  jal         func_2FF470
    ctx->pc = 0x2FF3E0u;
    SET_GPR_U32(ctx, 31, 0x2FF3E8u);
    ctx->pc = 0x2FF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3E0u;
    // 0x2ff3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF470u, 0x2FF3E0u, 0x2FF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3E8u;
label_2ff3e8:
    // 0x2ff3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff3ec:
    // 0x2ff3ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3F0u;
        // 0x2ff3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF3F8u;
}
