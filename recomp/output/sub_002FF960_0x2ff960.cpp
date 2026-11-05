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

// Function: sub_002FF960
// Address: 0x2ff960 - 0x2ff9c0
void sub_002FF960_0x2ff960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF960_0x2ff960");
#endif

    switch (ctx->pc) {
        case 0x2ff97cu: goto label_2ff97c;
        default: break;
    }

    ctx->pc = 0x2ff960u;

    // 0x2ff960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff968: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2ff968u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x2ff96c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff970: 0x26105870  addiu       $s0, $s0, 0x5870
    ctx->pc = 0x2ff970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22640));
    // 0x2ff974: 0xc0b8c4c  jal         func_2E3130
    ctx->pc = 0x2FF974u;
    SET_GPR_U32(ctx, 31, 0x2FF97Cu);
    ctx->pc = 0x2FF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF974u;
    // 0x2ff978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3130u, 0x2FF974u, 0x2FF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF97Cu;
label_2ff97c:
    // 0x2ff97c: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x2ff97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ff980: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ff980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ff984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ff984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ff988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff98c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2ff98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2ff990: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ff990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ff994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ff994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff998: 0x0  nop
    ctx->pc = 0x2ff998u;
    // NOP
    // 0x2ff99c: 0x0  nop
    ctx->pc = 0x2ff99cu;
    // NOP
    // 0x2ff9a0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2ff9a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2ff9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff9a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff9ac: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2ff9acu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2ff9b0: 0xe4402c48  swc1        $f0, 0x2C48($v0)
    ctx->pc = 0x2ff9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C48u, _value); } while (0); }
    // 0x2ff9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9B4u;
        // 0x2ff9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF9BCu;
    // 0x2ff9bc: 0x0  nop
    ctx->pc = 0x2ff9bcu;
    // NOP
    ctx->pc = 0x2ff9c0u;
}
