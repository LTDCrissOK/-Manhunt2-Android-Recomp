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

// Function: sub_002B7AE0
// Address: 0x2b7ae0 - 0x2b7b88
void sub_002B7AE0_0x2b7ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7AE0_0x2b7ae0");
#endif

    switch (ctx->pc) {
        case 0x2b7afcu: goto label_2b7afc;
        case 0x2b7b04u: goto label_2b7b04;
        case 0x2b7b74u: goto label_2b7b74;
        default: break;
    }

    ctx->pc = 0x2b7ae0u;

    // 0x2b7ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7ae4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b7ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7aec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b7aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b7af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b7af4: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7AF4u;
    SET_GPR_U32(ctx, 31, 0x2B7AFCu);
    ctx->pc = 0x2B7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7AF4u;
    // 0x2b7af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7AF4u, 0x2B7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7AFCu;
label_2b7afc:
    // 0x2b7afc: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B7AFCu;
    SET_GPR_U32(ctx, 31, 0x2B7B04u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B7AFCu, 0x2B7B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B04u;
label_2b7b04:
    // 0x2b7b04: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7B04u;
    {
        const bool branch_taken_0x2b7b04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B04u;
        // 0x2b7b08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b04) {
            ctx->pc = 0x2B7B20u;
            goto label_2b7b20;
        }
    }
    ctx->pc = 0x2B7B0Cu;
    // 0x2b7b0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b7b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7b10: 0x0  nop
    ctx->pc = 0x2b7b10u;
    // NOP
    // 0x2b7b14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b7b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b7b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7B18u;
    {
        const bool branch_taken_0x2b7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7b18) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7B20u;
label_2b7b20:
    // 0x2b7b20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b7b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b7b24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b7b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b7b28: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b7b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b7b2c: 0x0  nop
    ctx->pc = 0x2b7b2cu;
    // NOP
    // 0x2b7b30: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b7b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b7b34: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b7b34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b7b38:
    // 0x2b7b38: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b7b3c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b7b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b7b40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7b44: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b7b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7b48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b7b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b7b4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b7b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b7b50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b7b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b7b54: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b7b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b7b58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b7b58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b7b5c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b7b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7b60: 0x0  nop
    ctx->pc = 0x2b7b60u;
    // NOP
    // 0x2b7b64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7B64u;
    {
        const bool branch_taken_0x2b7b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7b64) {
            ctx->pc = 0x2B7B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7B64u;
            // 0x2b7b68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7B78u;
            goto label_2b7b78;
        }
    }
    ctx->pc = 0x2B7B6Cu;
    // 0x2b7b6c: 0xc0ade92  jal         func_2B7A48
    ctx->pc = 0x2B7B6Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B74u);
    ctx->pc = 0x2B7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B6Cu;
    // 0x2b7b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A48u, 0x2B7B6Cu, 0x2B7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B74u;
label_2b7b74:
    // 0x2b7b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b7b78:
    // 0x2b7b78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b7b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B7Cu;
        // 0x2b7b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7B84u;
    // 0x2b7b84: 0x0  nop
    ctx->pc = 0x2b7b84u;
    // NOP
    ctx->pc = 0x2b7b88u;
}
