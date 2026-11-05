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

// Function: sub_001867D8
// Address: 0x1867d8 - 0x186848
void sub_001867D8_0x1867d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001867D8_0x1867d8");
#endif

    ctx->pc = 0x1867d8u;

    // 0x1867d8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1867d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1867dc: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x1867dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x1867e0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1867e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1867E4u;
    {
        const bool branch_taken_0x1867e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1867E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E4u;
        // 0x1867e8: 0xc46100d0  lwc1        $f1, 0xD0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867e4) {
            ctx->pc = 0x186800u;
            goto label_186800;
        }
    }
    ctx->pc = 0x1867ECu;
    // 0x1867ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867f0: 0x0  nop
    ctx->pc = 0x1867f0u;
    // NOP
    // 0x1867f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1867f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1867f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1867F8u;
    {
        const bool branch_taken_0x1867f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1867f8) {
            ctx->pc = 0x18681Cu;
            goto label_18681c;
        }
    }
    ctx->pc = 0x186800u;
label_186800:
    // 0x186800: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x186804: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x186808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18680c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18680cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186810: 0x0  nop
    ctx->pc = 0x186810u;
    // NOP
    // 0x186814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186818: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x186818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18681c:
    // 0x18681c: 0x0  nop
    ctx->pc = 0x18681cu;
    // NOP
    // 0x186820: 0x0  nop
    ctx->pc = 0x186820u;
    // NOP
    // 0x186824: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186824u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186828: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x186828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x18682c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18682cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186830: 0x0  nop
    ctx->pc = 0x186830u;
    // NOP
    // 0x186834: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x186834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186838: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18683c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18683cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x186840: 0x3e00008  jr          $ra
    ctx->pc = 0x186840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186848u;
}
