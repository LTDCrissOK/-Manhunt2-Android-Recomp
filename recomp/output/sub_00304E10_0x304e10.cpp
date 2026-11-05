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

// Function: sub_00304E10
// Address: 0x304e10 - 0x304eb8
void sub_00304E10_0x304e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304E10_0x304e10");
#endif

    switch (ctx->pc) {
        case 0x304e88u: goto label_304e88;
        case 0x304ea4u: goto label_304ea4;
        default: break;
    }

    ctx->pc = 0x304e10u;

    // 0x304e10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304e14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304e18: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x304e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x304e1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304E1Cu;
    {
        const bool branch_taken_0x304e1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E1Cu;
        // 0x304e20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e1c) {
            ctx->pc = 0x304E38u;
            goto label_304e38;
        }
    }
    ctx->pc = 0x304E24u;
    // 0x304e24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304e28: 0x0  nop
    ctx->pc = 0x304e28u;
    // NOP
    // 0x304e2c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x304e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x304e30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304E30u;
    {
        const bool branch_taken_0x304e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e30) {
            ctx->pc = 0x304E54u;
            goto label_304e54;
        }
    }
    ctx->pc = 0x304E38u;
label_304e38:
    // 0x304e38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x304e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x304e3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304e40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x304e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x304e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304e48: 0x0  nop
    ctx->pc = 0x304e48u;
    // NOP
    // 0x304e4c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x304e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x304e50: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x304e50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_304e54:
    // 0x304e54: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x304e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x304e58: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x304e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x304e5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x304e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304e60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x304e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x304e64: 0xc440bb48  lwc1        $f0, -0x44B8($v0)
    ctx->pc = 0x304e64u;
    { uint32_t bits = FAST_READ32(0x3FBB48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304e68: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x304e68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x304e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x304e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304e70: 0x0  nop
    ctx->pc = 0x304e70u;
    // NOP
    // 0x304e74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x304E74u;
    {
        const bool branch_taken_0x304e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304e74) {
            ctx->pc = 0x304E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304E74u;
            // 0x304e78: 0xac40bb48  sw          $zero, -0x44B8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4294949704), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304E7Cu;
            goto label_304e7c;
        }
    }
    ctx->pc = 0x304E7Cu;
label_304e7c:
    // 0x304e7c: 0xc44cbb48  lwc1        $f12, -0x44B8($v0)
    ctx->pc = 0x304e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304e80: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x304E80u;
    SET_GPR_U32(ctx, 31, 0x304E88u);
    ctx->pc = 0x304E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E80u;
    // 0x304e84: 0x460c0b01  sub.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x304E80u, 0x304E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E88u;
label_304e88:
    // 0x304e88: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x304e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x304e8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304E8Cu;
    {
        const bool branch_taken_0x304e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E8Cu;
        // 0x304e90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e8c) {
            ctx->pc = 0x304EA8u;
            goto label_304ea8;
        }
    }
    ctx->pc = 0x304E94u;
    // 0x304e94: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304e9c: 0xc0c12b8  jal         func_304AE0
    ctx->pc = 0x304E9Cu;
    SET_GPR_U32(ctx, 31, 0x304EA4u);
    ctx->pc = 0x304EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E9Cu;
    // 0x304ea0: 0x248465e0  addiu       $a0, $a0, 0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304AE0u, 0x304E9Cu, 0x304EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EA4u;
label_304ea4:
    // 0x304ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304ea8:
    // 0x304ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x304EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EA8u;
        // 0x304eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304EB0u;
    // 0x304eb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x304eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304eb4: 0x0  nop
    ctx->pc = 0x304eb4u;
    // NOP
    ctx->pc = 0x304eb8u;
}
