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

// Function: sub_00199B08
// Address: 0x199b08 - 0x199b80
void sub_00199B08_0x199b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199B08_0x199b08");
#endif

    ctx->pc = 0x199b08u;

    // 0x199b08: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x199b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x199b0c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x199b10: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x199b10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x199b14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199B14u;
    {
        const bool branch_taken_0x199b14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B14u;
        // 0x199b18: 0x246408f0  addiu       $a0, $v1, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b14) {
            ctx->pc = 0x199B30u;
            goto label_199b30;
        }
    }
    ctx->pc = 0x199B1Cu;
    // 0x199b1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199b20: 0x0  nop
    ctx->pc = 0x199b20u;
    // NOP
    // 0x199b24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199b28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199B28u;
    {
        const bool branch_taken_0x199b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b28) {
            ctx->pc = 0x199B4Cu;
            goto label_199b4c;
        }
    }
    ctx->pc = 0x199B30u;
label_199b30:
    // 0x199b30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199b34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199b38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199b3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199b40: 0x0  nop
    ctx->pc = 0x199b40u;
    // NOP
    // 0x199b44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199b48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199b48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199b4c:
    // 0x199b4c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199b50: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199b58: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x199b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199b5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x199b60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199b64: 0x0  nop
    ctx->pc = 0x199b64u;
    // NOP
    // 0x199b68: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x199B68u;
    {
        const bool branch_taken_0x199b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x199B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B68u;
        // 0x199b6c: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b68) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199B70u;
    // 0x199b70: 0x3e00008  jr          $ra
    ctx->pc = 0x199B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B70u;
        // 0x199b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199B78u;
label_199b78:
    // 0x199b78: 0x3e00008  jr          $ra
    ctx->pc = 0x199B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B78u;
        // 0x199b7c: 0x8c6208d8  lw          $v0, 0x8D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199B80u;
}
