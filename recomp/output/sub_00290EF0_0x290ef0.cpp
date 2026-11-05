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

// Function: sub_00290EF0
// Address: 0x290ef0 - 0x290ff0
void sub_00290EF0_0x290ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290EF0_0x290ef0");
#endif

    switch (ctx->pc) {
        case 0x290f18u: goto label_290f18;
        default: break;
    }

    ctx->pc = 0x290ef0u;

    // 0x290ef0: 0x1d000003  bgtz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290EF0u;
    {
        const bool branch_taken_0x290ef0 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x290EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EF0u;
        // 0x290ef4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ef0) {
            ctx->pc = 0x290F00u;
            goto label_290f00;
        }
    }
    ctx->pc = 0x290EF8u;
    // 0x290ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x290EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EF8u;
        // 0x290efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290F00u;
label_290f00:
    // 0x290f00: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x290f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x290f04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x290f04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f08: 0x19000031  blez        $t0, . + 4 + (0x31 << 2)
    ctx->pc = 0x290F08u;
    {
        const bool branch_taken_0x290f08 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x290F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F08u;
        // 0x290f0c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f08) {
            ctx->pc = 0x290FD0u;
            goto label_290fd0;
        }
    }
    ctx->pc = 0x290F10u;
    // 0x290f10: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x290f10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f14: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x290f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_290f18:
    // 0x290f18: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x290f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f1c: 0x15a0000b  bnez        $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x290F1Cu;
    {
        const bool branch_taken_0x290f1c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x290F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F1Cu;
        // 0x290f20: 0xe21821  addu        $v1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f1c) {
            ctx->pc = 0x290F4Cu;
            goto label_290f4c;
        }
    }
    ctx->pc = 0x290F24u;
    // 0x290f24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290f28: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290f28u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290f2c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x290F2Cu;
    {
        const bool branch_taken_0x290f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f2c) {
            ctx->pc = 0x290F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F2Cu;
            // 0x290f30: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FC4u;
            goto label_290fc4;
        }
    }
    ctx->pc = 0x290F34u;
    // 0x290f34: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x290f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x290f38: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x290f38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290f3c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x290f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290f40: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x290f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x290f44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x290F44u;
    {
        const bool branch_taken_0x290f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F44u;
        // 0x290f48: 0xc463000c  lwc1        $f3, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f44) {
            ctx->pc = 0x290FC0u;
            goto label_290fc0;
        }
    }
    ctx->pc = 0x290F4Cu;
label_290f4c:
    // 0x290f4c: 0x460c1800  add.s       $f0, $f3, $f12
    ctx->pc = 0x290f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x290f50: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x290f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x290f54: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x290f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290f58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x290f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x290f5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x290f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290f60: 0x0  nop
    ctx->pc = 0x290f60u;
    // NOP
    // 0x290f64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x290F64u;
    {
        const bool branch_taken_0x290f64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x290F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F64u;
        // 0x290f68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f64) {
            ctx->pc = 0x290F70u;
            goto label_290f70;
        }
    }
    ctx->pc = 0x290F6Cu;
    // 0x290f6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x290f6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290f70:
    // 0x290f70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290f74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290f74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290f78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x290F78u;
    {
        const bool branch_taken_0x290f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f78) {
            ctx->pc = 0x290F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F78u;
            // 0x290f7c: 0xacca0004  sw          $t2, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290F8Cu;
            goto label_290f8c;
        }
    }
    ctx->pc = 0x290F80u;
    // 0x290f80: 0x5120000b  beql        $t1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x290F80u;
    {
        const bool branch_taken_0x290f80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f80) {
            ctx->pc = 0x290F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F80u;
            // 0x290f84: 0xc560000c  lwc1        $f0, 0xC($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FB0u;
            goto label_290fb0;
        }
    }
    ctx->pc = 0x290F88u;
    // 0x290f88: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x290f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
label_290f8c:
    // 0x290f8c: 0x24cb0010  addiu       $t3, $a2, 0x10
    ctx->pc = 0x290f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x290f90: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x290f90u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x290f94: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x290f94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290f9c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x290f9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x290fa0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290fa0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290fa4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x290fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x290fa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x290FA8u;
    {
        const bool branch_taken_0x290fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FA8u;
        // 0x290fac: 0xa0c20008  sb          $v0, 0x8($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fa8) {
            ctx->pc = 0x290FC0u;
            goto label_290fc0;
        }
    }
    ctx->pc = 0x290FB0u;
label_290fb0:
    // 0x290fb0: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x290fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x290fb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x290fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x290fb8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x290fb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x290fbc: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x290fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_290fc0:
    // 0x290fc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x290fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_290fc4:
    // 0x290fc4: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x290fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x290fc8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x290FC8u;
    {
        const bool branch_taken_0x290fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FC8u;
        // 0x290fcc: 0xa1100  sll         $v0, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fc8) {
            ctx->pc = 0x290F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290f18;
        }
    }
    ctx->pc = 0x290FD0u;
label_290fd0:
    // 0x290fd0: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x290FD0u;
    {
        const bool branch_taken_0x290fd0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FD0u;
        // 0x290fd4: 0xc1100  sll         $v0, $t4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fd0) {
            ctx->pc = 0x290FE8u;
            goto label_290fe8;
        }
    }
    ctx->pc = 0x290FD8u;
    // 0x290fd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290fdc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x290fdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x290fe0: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x290fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x290fe4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x290fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_290fe8:
    // 0x290fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x290FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FE8u;
        // 0x290fec: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290FF0u;
}
