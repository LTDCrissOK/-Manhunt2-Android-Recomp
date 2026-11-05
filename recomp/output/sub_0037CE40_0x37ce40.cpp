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

// Function: sub_0037CE40
// Address: 0x37ce40 - 0x37cea8
void sub_0037CE40_0x37ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CE40_0x37ce40");
#endif

    switch (ctx->pc) {
        case 0x37ce9cu: goto label_37ce9c;
        default: break;
    }

    ctx->pc = 0x37ce40u;

    // 0x37ce40: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x37ce40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37ce44: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x37ce44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37ce48: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x37ce48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x37ce4c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x37ce4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x37ce50: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x37ce50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37ce54: 0x0  nop
    ctx->pc = 0x37ce54u;
    // NOP
    // 0x37ce58: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x37ce58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x37ce5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37ce5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37ce60: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37ce60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ce64: 0x0  nop
    ctx->pc = 0x37ce64u;
    // NOP
    // 0x37ce68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37ce68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37ce6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ce70: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x37ce70u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ce74: 0x0  nop
    ctx->pc = 0x37ce74u;
    // NOP
    // 0x37ce78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37ce78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37ce7c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x37ce7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37ce80: 0x0  nop
    ctx->pc = 0x37ce80u;
    // NOP
    // 0x37ce84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37ce84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37ce88: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x37ce88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x37ce8c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x37ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x37ce90: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x37ce90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x37ce94: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x37CE94u;
    SET_GPR_U32(ctx, 31, 0x37CE9Cu);
    ctx->pc = 0x37CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE94u;
    // 0x37ce98: 0xe482002c  swc1        $f2, 0x2C($a0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x37CE94u, 0x37CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE9Cu;
label_37ce9c:
    // 0x37ce9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ce9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cea0: 0x3e00008  jr          $ra
    ctx->pc = 0x37CEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEA0u;
        // 0x37cea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CEA8u;
}
