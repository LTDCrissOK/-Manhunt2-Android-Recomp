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

// Function: sub_001B7BB8
// Address: 0x1b7bb8 - 0x1b7c40
void sub_001B7BB8_0x1b7bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7BB8_0x1b7bb8");
#endif

    ctx->pc = 0x1b7bb8u;

    // 0x1b7bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7bbc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1b7bc0: 0xac8200c8  sw          $v0, 0xC8($a0)
    ctx->pc = 0x1b7bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
    // 0x1b7bc4: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b7bc8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7BC8u;
    {
        const bool branch_taken_0x1b7bc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BC8u;
        // 0x1b7bcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7bc8) {
            ctx->pc = 0x1B7BE4u;
            goto label_1b7be4;
        }
    }
    ctx->pc = 0x1B7BD0u;
    // 0x1b7bd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7bd4: 0x0  nop
    ctx->pc = 0x1b7bd4u;
    // NOP
    // 0x1b7bd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7bdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7BDCu;
    {
        const bool branch_taken_0x1b7bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7bdc) {
            ctx->pc = 0x1B7BFCu;
            goto label_1b7bfc;
        }
    }
    ctx->pc = 0x1B7BE4u;
label_1b7be4:
    // 0x1b7be4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7be8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7bf0: 0x0  nop
    ctx->pc = 0x1b7bf0u;
    // NOP
    // 0x1b7bf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7bf8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b7bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b7bfc:
    // 0x1b7bfc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7c00: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7c08: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1b7c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1b7c0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7c10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7c14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7c18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7c1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7c20: 0xe48200f0  swc1        $f2, 0xF0($a0)
    ctx->pc = 0x1b7c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x1b7c24: 0xe4810150  swc1        $f1, 0x150($a0)
    ctx->pc = 0x1b7c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1b7c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C28u;
        // 0x1b7c2c: 0xe48000e0  swc1        $f0, 0xE0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C30u;
    // 0x1b7c30: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x1b7c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x1b7c34: 0x0  nop
    ctx->pc = 0x1b7c34u;
    // NOP
    // 0x1b7c38: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x1b7c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x1b7c3c: 0x0  nop
    ctx->pc = 0x1b7c3cu;
    // NOP
    ctx->pc = 0x1b7c40u;
}
