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

// Function: sub_0019CF28
// Address: 0x19cf28 - 0x19d048
void sub_0019CF28_0x19cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CF28_0x19cf28");
#endif

    switch (ctx->pc) {
        case 0x19cf60u: goto label_19cf60;
        default: break;
    }

    ctx->pc = 0x19cf28u;

    // 0x19cf28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19cf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cf2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19cf30: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x19cf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cf38: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x19cf38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x19cf3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19cf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf40: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19cf40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19cf44: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19cf44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x19cf48: 0x8e2208d8  lw          $v0, 0x8D8($s1)
    ctx->pc = 0x19cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F08D8u));
    // 0x19cf4c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x19cf4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x19cf50: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x19CF50u;
    {
        const bool branch_taken_0x19cf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF50u;
        // 0x19cf54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf50) {
            ctx->pc = 0x19D02Cu;
            goto label_19d02c;
        }
    }
    ctx->pc = 0x19CF58u;
    // 0x19cf58: 0xc06668e  jal         func_199A38
    ctx->pc = 0x19CF58u;
    SET_GPR_U32(ctx, 31, 0x19CF60u);
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x19CF58u, 0x19CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF60u;
label_19cf60:
    // 0x19cf60: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x19CF60u;
    {
        const bool branch_taken_0x19cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf60) {
            ctx->pc = 0x19CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CF60u;
            // 0x19cf64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D030u;
            goto label_19d030;
        }
    }
    ctx->pc = 0x19CF68u;
    // 0x19cf68: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x19cf6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cf70: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x19cf74: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x19cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x19cf78: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x19cf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf7c: 0xae2208d8  sw          $v0, 0x8D8($s1)
    ctx->pc = 0x19cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2264), GPR_U32(ctx, 2));
    // 0x19cf80: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CF80u;
    {
        const bool branch_taken_0x19cf80 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF80u;
        // 0x19cf84: 0x248408ec  addiu       $a0, $a0, 0x8EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf80) {
            ctx->pc = 0x19CF9Cu;
            goto label_19cf9c;
        }
    }
    ctx->pc = 0x19CF88u;
    // 0x19cf88: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x19cf88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cf8c: 0x0  nop
    ctx->pc = 0x19cf8cu;
    // NOP
    // 0x19cf90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19cf90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cf94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CF94u;
    {
        const bool branch_taken_0x19cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cf94) {
            ctx->pc = 0x19CFB8u;
            goto label_19cfb8;
        }
    }
    ctx->pc = 0x19CF9Cu;
label_19cf9c:
    // 0x19cf9c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x19cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x19cfa0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x19cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19cfa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19cfa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19cfa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cfac: 0x0  nop
    ctx->pc = 0x19cfacu;
    // NOP
    // 0x19cfb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19cfb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cfb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19cfb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19cfb8:
    // 0x19cfb8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19cfbc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19cfbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19cfc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cfc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cfc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x19cfc8: 0x244508f0  addiu       $a1, $v0, 0x8F0
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x19cfcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19cfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19cfd0: 0x8cc22b00  lw          $v0, 0x2B00($a2)
    ctx->pc = 0x19cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
    // 0x19cfd4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x19cfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x19cfd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CFD8u;
    {
        const bool branch_taken_0x19cfd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFD8u;
        // 0x19cfdc: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfd8) {
            ctx->pc = 0x19CFF4u;
            goto label_19cff4;
        }
    }
    ctx->pc = 0x19CFE0u;
    // 0x19cfe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19cfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cfe4: 0x0  nop
    ctx->pc = 0x19cfe4u;
    // NOP
    // 0x19cfe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19cfe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19cfec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CFECu;
    {
        const bool branch_taken_0x19cfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cfec) {
            ctx->pc = 0x19D010u;
            goto label_19d010;
        }
    }
    ctx->pc = 0x19CFF4u;
label_19cff4:
    // 0x19cff4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19cff8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19cffc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19d000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d004: 0x0  nop
    ctx->pc = 0x19d004u;
    // NOP
    // 0x19d008: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19d008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19d00c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19d00cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19d010:
    // 0x19d010: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19d014: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19d018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19d01c: 0x0  nop
    ctx->pc = 0x19d01cu;
    // NOP
    // 0x19d020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19d024: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x19d024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x19d028: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x19d028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_19d02c:
    // 0x19d02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d030:
    // 0x19d030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d038: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x19d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19d03c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19d040: 0x3e00008  jr          $ra
    ctx->pc = 0x19D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D040u;
        // 0x19d044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D048u;
}
