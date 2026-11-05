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

// Function: sub_001F4D80
// Address: 0x1f4d80 - 0x1f4f18
void sub_001F4D80_0x1f4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4D80_0x1f4d80");
#endif

    switch (ctx->pc) {
        case 0x1f4da8u: goto label_1f4da8;
        default: break;
    }

    ctx->pc = 0x1f4d80u;

    // 0x1f4d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4d84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d94: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1f4d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f4d98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1f4d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4da0: 0xc07d3c8  jal         func_1F4F20
    ctx->pc = 0x1F4DA0u;
    SET_GPR_U32(ctx, 31, 0x1F4DA8u);
    ctx->pc = 0x1F4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DA0u;
    // 0x1f4da4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F20u, 0x1F4DA0u, 0x1F4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DA8u;
label_1f4da8:
    // 0x1f4da8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f4da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4dac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f4dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f4db0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F4DB0u;
    {
        const bool branch_taken_0x1f4db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DB0u;
        // 0x1f4db4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4db0) {
            ctx->pc = 0x1F4EC0u;
            goto label_1f4ec0;
        }
    }
    ctx->pc = 0x1F4DB8u;
    // 0x1f4db8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f4dbc: 0x2442f990  addiu       $v0, $v0, -0x670
    ctx->pc = 0x1f4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x1f4dc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4dc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f4dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4dc8: 0x800008  jr          $a0
    ctx->pc = 0x1F4DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4DD0u: goto label_1f4dd0;
            case 0x1F4E00u: goto label_1f4e00;
            case 0x1F4E30u: goto label_1f4e30;
            case 0x1F4E60u: goto label_1f4e60;
            case 0x1F4E90u: goto label_1f4e90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4DC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4DD0u;
label_1f4dd0:
    // 0x1f4dd0: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1f4dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1f4dd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4dd8: 0x0  nop
    ctx->pc = 0x1f4dd8u;
    // NOP
    // 0x1f4ddc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f4ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4de0: 0x0  nop
    ctx->pc = 0x1f4de0u;
    // NOP
    // 0x1f4de4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4DE4u;
    {
        const bool branch_taken_0x1f4de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4de4) {
            ctx->pc = 0x1F4DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4DE4u;
            // 0x1f4de8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4DF8u;
            goto label_1f4df8;
        }
    }
    ctx->pc = 0x1F4DECu;
    // 0x1f4dec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4df0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F4DF0u;
    {
        const bool branch_taken_0x1f4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DF0u;
        // 0x1f4df4: 0x2442f8c8  addiu       $v0, $v0, -0x738 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4df0) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4DF8u;
label_1f4df8:
    // 0x1f4df8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1F4DF8u;
    {
        const bool branch_taken_0x1f4df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DF8u;
        // 0x1f4dfc: 0x2442f8d8  addiu       $v0, $v0, -0x728 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4df8) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E00u;
label_1f4e00:
    // 0x1f4e00: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1f4e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1f4e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4e08: 0x0  nop
    ctx->pc = 0x1f4e08u;
    // NOP
    // 0x1f4e0c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f4e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4e10: 0x0  nop
    ctx->pc = 0x1f4e10u;
    // NOP
    // 0x1f4e14: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4E14u;
    {
        const bool branch_taken_0x1f4e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4e14) {
            ctx->pc = 0x1F4E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4E14u;
            // 0x1f4e18: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4E28u;
            goto label_1f4e28;
        }
    }
    ctx->pc = 0x1F4E1Cu;
    // 0x1f4e1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4e20: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F4E20u;
    {
        const bool branch_taken_0x1f4e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E20u;
        // 0x1f4e24: 0x2442f8e8  addiu       $v0, $v0, -0x718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e20) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E28u;
label_1f4e28:
    // 0x1f4e28: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F4E28u;
    {
        const bool branch_taken_0x1f4e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E28u;
        // 0x1f4e2c: 0x2442f8f8  addiu       $v0, $v0, -0x708 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e28) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E30u;
label_1f4e30:
    // 0x1f4e30: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1f4e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4e38: 0x0  nop
    ctx->pc = 0x1f4e38u;
    // NOP
    // 0x1f4e3c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f4e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4e40: 0x0  nop
    ctx->pc = 0x1f4e40u;
    // NOP
    // 0x1f4e44: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4E44u;
    {
        const bool branch_taken_0x1f4e44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4e44) {
            ctx->pc = 0x1F4E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4E44u;
            // 0x1f4e48: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4E58u;
            goto label_1f4e58;
        }
    }
    ctx->pc = 0x1F4E4Cu;
    // 0x1f4e4c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4e50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F4E50u;
    {
        const bool branch_taken_0x1f4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E50u;
        // 0x1f4e54: 0x2442f908  addiu       $v0, $v0, -0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e50) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E58u;
label_1f4e58:
    // 0x1f4e58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4E58u;
    {
        const bool branch_taken_0x1f4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E58u;
        // 0x1f4e5c: 0x2442f920  addiu       $v0, $v0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e58) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E60u;
label_1f4e60:
    // 0x1f4e60: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1f4e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4e68: 0x0  nop
    ctx->pc = 0x1f4e68u;
    // NOP
    // 0x1f4e6c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f4e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4e70: 0x0  nop
    ctx->pc = 0x1f4e70u;
    // NOP
    // 0x1f4e74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4E74u;
    {
        const bool branch_taken_0x1f4e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4e74) {
            ctx->pc = 0x1F4E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4E74u;
            // 0x1f4e78: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4E88u;
            goto label_1f4e88;
        }
    }
    ctx->pc = 0x1F4E7Cu;
    // 0x1f4e7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4e80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F4E80u;
    {
        const bool branch_taken_0x1f4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E80u;
        // 0x1f4e84: 0x2442f938  addiu       $v0, $v0, -0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e80) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E88u;
label_1f4e88:
    // 0x1f4e88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F4E88u;
    {
        const bool branch_taken_0x1f4e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E88u;
        // 0x1f4e8c: 0x2442f948  addiu       $v0, $v0, -0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e88) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4E90u;
label_1f4e90:
    // 0x1f4e90: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1f4e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1f4e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4e98: 0x0  nop
    ctx->pc = 0x1f4e98u;
    // NOP
    // 0x1f4e9c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f4e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4ea0: 0x0  nop
    ctx->pc = 0x1f4ea0u;
    // NOP
    // 0x1f4ea4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4EA4u;
    {
        const bool branch_taken_0x1f4ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EA4u;
        // 0x1f4ea8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ea4) {
            ctx->pc = 0x1F4EB4u;
            goto label_1f4eb4;
        }
    }
    ctx->pc = 0x1F4EACu;
    // 0x1f4eac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4EACu;
    {
        const bool branch_taken_0x1f4eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EACu;
        // 0x1f4eb0: 0x2442f958  addiu       $v0, $v0, -0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4eac) {
            ctx->pc = 0x1F4EBCu;
            goto label_1f4ebc;
        }
    }
    ctx->pc = 0x1F4EB4u;
label_1f4eb4:
    // 0x1f4eb4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4eb8: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x1f4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
label_1f4ebc:
    // 0x1f4ebc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f4ec0:
    // 0x1f4ec0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1f4ec4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f4ec8: 0x8cc39294  lw          $v1, -0x6D6C($a2)
    ctx->pc = 0x1f4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9294u));
    // 0x1f4ecc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F4ECCu;
    {
        const bool branch_taken_0x1f4ecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ecc) {
            ctx->pc = 0x1F4ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4ECCu;
            // 0x1f4ed0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4ED4u;
            goto label_1f4ed4;
        }
    }
    ctx->pc = 0x1F4ED4u;
label_1f4ed4:
    // 0x1f4ed4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f4ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f4ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4edc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f4ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4ee4: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1f4ee4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f4ee8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1f4ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f4eec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f4ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4ef4: 0x2010  mfhi        $a0
    ctx->pc = 0x1f4ef4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f4ef8: 0xacc49294  sw          $a0, -0x6D6C($a2)
    ctx->pc = 0x1f4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939284), GPR_U32(ctx, 4));
    // 0x1f4efc: 0x94c59294  lhu         $a1, -0x6D6C($a2)
    ctx->pc = 0x1f4efcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294939284)));
    // 0x1f4f00: 0xae270104  sw          $a3, 0x104($s1)
    ctx->pc = 0x1f4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 7));
    // 0x1f4f04: 0xa62500f4  sh          $a1, 0xF4($s1)
    ctx->pc = 0x1f4f04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f4f08: 0xa22300fc  sb          $v1, 0xFC($s1)
    ctx->pc = 0x1f4f08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F10u;
        // 0x1f4f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4F18u;
}
