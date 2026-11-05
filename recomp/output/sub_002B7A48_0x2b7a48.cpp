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

// Function: sub_002B7A48
// Address: 0x2b7a48 - 0x2b7ae0
void sub_002B7A48_0x2b7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7A48_0x2b7a48");
#endif

    switch (ctx->pc) {
        case 0x2b7a5cu: goto label_2b7a5c;
        case 0x2b7a78u: goto label_2b7a78;
        default: break;
    }

    ctx->pc = 0x2b7a48u;

    // 0x2b7a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7a50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b7a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b7a54: 0xc0ade78  jal         func_2B79E0
    ctx->pc = 0x2B7A54u;
    SET_GPR_U32(ctx, 31, 0x2B7A5Cu);
    ctx->pc = 0x2B7A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A54u;
    // 0x2b7a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2B7A54u, 0x2B7A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A5Cu;
label_2b7a5c:
    // 0x2b7a5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7A5Cu;
    {
        const bool branch_taken_0x2b7a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A5Cu;
        // 0x2b7a60: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a5c) {
            ctx->pc = 0x2B7A70u;
            goto label_2b7a70;
        }
    }
    ctx->pc = 0x2B7A64u;
    // 0x2b7a64: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2b7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b7a68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B7A68u;
    {
        const bool branch_taken_0x2b7a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A68u;
        // 0x2b7a6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a68) {
            ctx->pc = 0x2B7ACCu;
            goto label_2b7acc;
        }
    }
    ctx->pc = 0x2B7A70u;
label_2b7a70:
    // 0x2b7a70: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7A70u;
    SET_GPR_U32(ctx, 31, 0x2B7A78u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7A70u, 0x2B7A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A78u;
label_2b7a78:
    // 0x2b7a78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7A78u;
    {
        const bool branch_taken_0x2b7a78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A78u;
        // 0x2b7a7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a78) {
            ctx->pc = 0x2B7A94u;
            goto label_2b7a94;
        }
    }
    ctx->pc = 0x2B7A80u;
    // 0x2b7a80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7a84: 0x0  nop
    ctx->pc = 0x2b7a84u;
    // NOP
    // 0x2b7a88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7a8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7A8Cu;
    {
        const bool branch_taken_0x2b7a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a8c) {
            ctx->pc = 0x2B7AACu;
            goto label_2b7aac;
        }
    }
    ctx->pc = 0x2B7A94u;
label_2b7a94:
    // 0x2b7a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7a98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7a9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7aa0: 0x0  nop
    ctx->pc = 0x2b7aa0u;
    // NOP
    // 0x2b7aa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7aa8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b7aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b7aac:
    // 0x2b7aac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b7aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7ab0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7ab8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b7abc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b7ac0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7ac4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b7ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b7ac8: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
label_2b7acc:
    // 0x2b7acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7ad0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b7ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AD4u;
        // 0x2b7ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7ADCu;
    // 0x2b7adc: 0x0  nop
    ctx->pc = 0x2b7adcu;
    // NOP
    ctx->pc = 0x2b7ae0u;
}
