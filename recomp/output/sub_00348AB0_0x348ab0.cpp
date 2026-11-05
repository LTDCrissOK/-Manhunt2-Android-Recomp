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

// Function: sub_00348AB0
// Address: 0x348ab0 - 0x348b70
void sub_00348AB0_0x348ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348AB0_0x348ab0");
#endif

    switch (ctx->pc) {
        case 0x348ae0u: goto label_348ae0;
        case 0x348b28u: goto label_348b28;
        case 0x348b40u: goto label_348b40;
        case 0x348b48u: goto label_348b48;
        case 0x348b5cu: goto label_348b5c;
        default: break;
    }

    ctx->pc = 0x348ab0u;

    // 0x348ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348ab4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x348ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348abc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x348ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ac4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x348ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348ac8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x348ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348acc: 0x0  nop
    ctx->pc = 0x348accu;
    // NOP
    // 0x348ad0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x348AD0u;
    {
        const bool branch_taken_0x348ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AD0u;
        // 0x348ad4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ad0) {
            ctx->pc = 0x348B40u;
            goto label_348b40;
        }
    }
    ctx->pc = 0x348AD8u;
    // 0x348ad8: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x348AD8u;
    SET_GPR_U32(ctx, 31, 0x348AE0u);
    ctx->pc = 0x348ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AD8u;
    // 0x348adc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x348AD8u, 0x348AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348AE0u;
label_348ae0:
    // 0x348ae0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x348ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x348ae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348aec: 0x0  nop
    ctx->pc = 0x348aecu;
    // NOP
    // 0x348af0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x348af0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348af4: 0x0  nop
    ctx->pc = 0x348af4u;
    // NOP
    // 0x348af8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x348AF8u;
    {
        const bool branch_taken_0x348af8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AF8u;
        // 0x348afc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348af8) {
            ctx->pc = 0x348B30u;
            goto label_348b30;
        }
    }
    ctx->pc = 0x348B00u;
    // 0x348b00: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x348b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x348b04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348b08: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x348b0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x348b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x348b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x348b14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x348b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348b18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x348b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x348b1c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x348b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x348b20: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x348B20u;
    SET_GPR_U32(ctx, 31, 0x348B28u);
    ctx->pc = 0x348B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B20u;
    // 0x348b24: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x348B20u, 0x348B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B28u;
label_348b28:
    // 0x348b28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x348B28u;
    {
        const bool branch_taken_0x348b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b28) {
            ctx->pc = 0x348B40u;
            goto label_348b40;
        }
    }
    ctx->pc = 0x348B30u;
label_348b30:
    // 0x348b30: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x348b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x348b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348b38: 0xc0c3244  jal         func_30C910
    ctx->pc = 0x348B38u;
    SET_GPR_U32(ctx, 31, 0x348B40u);
    ctx->pc = 0x348B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B38u;
    // 0x348b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C910u, 0x348B38u, 0x348B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B40u;
label_348b40:
    // 0x348b40: 0xc0d24fc  jal         func_3493F0
    ctx->pc = 0x348B40u;
    SET_GPR_U32(ctx, 31, 0x348B48u);
    ctx->pc = 0x348B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B40u;
    // 0x348b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3493F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3493F0u, 0x348B40u, 0x348B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B48u;
label_348b48:
    // 0x348b48: 0x920200f2  lbu         $v0, 0xF2($s0)
    ctx->pc = 0x348b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x348b4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x348B4Cu;
    {
        const bool branch_taken_0x348b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b4c) {
            ctx->pc = 0x348B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348B4Cu;
            // 0x348b50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348B60u;
            goto label_348b60;
        }
    }
    ctx->pc = 0x348B54u;
    // 0x348b54: 0xc0d2622  jal         func_349888
    ctx->pc = 0x348B54u;
    SET_GPR_U32(ctx, 31, 0x348B5Cu);
    ctx->pc = 0x348B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B54u;
    // 0x348b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349888u, 0x348B54u, 0x348B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348B5Cu;
label_348b5c:
    // 0x348b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348b60:
    // 0x348b60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348b64: 0x3e00008  jr          $ra
    ctx->pc = 0x348B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348B64u;
        // 0x348b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348B6Cu;
    // 0x348b6c: 0x0  nop
    ctx->pc = 0x348b6cu;
    // NOP
    ctx->pc = 0x348b70u;
}
