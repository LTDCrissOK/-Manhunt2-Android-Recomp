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

// Function: sub_001C2BC8
// Address: 0x1c2bc8 - 0x1c2cb0
void sub_001C2BC8_0x1c2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2BC8_0x1c2bc8");
#endif

    switch (ctx->pc) {
        case 0x1c2bf8u: goto label_1c2bf8;
        case 0x1c2c00u: goto label_1c2c00;
        case 0x1c2c30u: goto label_1c2c30;
        case 0x1c2c40u: goto label_1c2c40;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c8cu: goto label_1c2c8c;
        default: break;
    }

    ctx->pc = 0x1c2bc8u;

    // 0x1c2bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2bcc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c2bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c2bd0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c2bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c2bd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bd8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c2bdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2be0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1c2be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c2be4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2be8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c2bec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c2becu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c2bf0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2BF0u;
    SET_GPR_U32(ctx, 31, 0x1C2BF8u);
    ctx->pc = 0x1C2BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BF0u;
    // 0x1c2bf4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2BF0u, 0x1C2BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BF8u;
label_1c2bf8:
    // 0x1c2bf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2BF8u;
    SET_GPR_U32(ctx, 31, 0x1C2C00u);
    ctx->pc = 0x1C2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BF8u;
    // 0x1c2bfc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2BF8u, 0x1C2C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C00u;
label_1c2c00:
    // 0x1c2c00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2c04: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2C04u;
    {
        const bool branch_taken_0x1c2c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c04) {
            ctx->pc = 0x1C2C6Cu;
            goto label_1c2c6c;
        }
    }
    ctx->pc = 0x1C2C0Cu;
    // 0x1c2c0c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1c2c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c2c10: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1c2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1c2c14: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c2c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c2c18: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2C18u;
    {
        const bool branch_taken_0x1c2c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C18u;
        // 0x1c2c1c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c18) {
            ctx->pc = 0x1C2C54u;
            goto label_1c2c54;
        }
    }
    ctx->pc = 0x1C2C20u;
    // 0x1c2c20: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x1c2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x1c2c24: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x1c2c24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x1c2c28: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1C2C28u;
    SET_GPR_U32(ctx, 31, 0x1C2C30u);
    ctx->pc = 0x1C2C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C28u;
    // 0x1c2c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1C2C28u, 0x1C2C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C30u;
label_1c2c30:
    // 0x1c2c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2C30u;
    {
        const bool branch_taken_0x1c2c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C30u;
        // 0x1c2c34: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c30) {
            ctx->pc = 0x1C2C44u;
            goto label_1c2c44;
        }
    }
    ctx->pc = 0x1C2C38u;
    // 0x1c2c38: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1C2C38u;
    SET_GPR_U32(ctx, 31, 0x1C2C40u);
    ctx->pc = 0x1C2C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C38u;
    // 0x1c2c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1C2C38u, 0x1C2C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C40u;
label_1c2c40:
    // 0x1c2c40: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1c2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1c2c44:
    // 0x1c2c44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2c48: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2c4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C2C4Cu;
    {
        const bool branch_taken_0x1c2c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C4Cu;
        // 0x1c2c50: 0x8e4204bc  lw          $v0, 0x4BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c4c) {
            ctx->pc = 0x1C2C78u;
            goto label_1c2c78;
        }
    }
    ctx->pc = 0x1C2C54u;
label_1c2c54:
    // 0x1c2c54: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x1C2C54u;
    SET_GPR_U32(ctx, 31, 0x1C2C5Cu);
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1C2C54u, 0x1C2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C5Cu;
label_1c2c5c:
    // 0x1c2c5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2c60: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2C64u;
    {
        const bool branch_taken_0x1c2c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C64u;
        // 0x1c2c68: 0x8e4204bc  lw          $v0, 0x4BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c64) {
            ctx->pc = 0x1C2C78u;
            goto label_1c2c78;
        }
    }
    ctx->pc = 0x1C2C6Cu;
label_1c2c6c:
    // 0x1c2c6c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c2c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2c70: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2c74: 0x8e4204bc  lw          $v0, 0x4BC($s2)
    ctx->pc = 0x1c2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1c2c78:
    // 0x1c2c78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2c7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c2c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c80: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2c84: 0xc07197c  jal         func_1C65F0
    ctx->pc = 0x1C2C84u;
    SET_GPR_U32(ctx, 31, 0x1C2C8Cu);
    ctx->pc = 0x1C2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C84u;
    // 0x1c2c88: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C65F0u, 0x1C2C84u, 0x1C2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C8Cu;
label_1c2c8c:
    // 0x1c2c8c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c2c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2c90: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c2c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2c94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c2c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2c98: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c2c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2c9c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1c2c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CA0u;
        // 0x1c2ca4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2CA8u;
    // 0x1c2ca8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c2ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2cac: 0x0  nop
    ctx->pc = 0x1c2cacu;
    // NOP
    ctx->pc = 0x1c2cb0u;
}
