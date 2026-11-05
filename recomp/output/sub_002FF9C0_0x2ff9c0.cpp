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

// Function: sub_002FF9C0
// Address: 0x2ff9c0 - 0x2ffa78
void sub_002FF9C0_0x2ff9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF9C0_0x2ff9c0");
#endif

    switch (ctx->pc) {
        case 0x2ffa28u: goto label_2ffa28;
        default: break;
    }

    ctx->pc = 0x2ff9c0u;

    // 0x2ff9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff9c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ff9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ff9c8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2ff9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2ff9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff9d0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2ff9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x2ff9d4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ff9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff9dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF9DCu;
    {
        const bool branch_taken_0x2ff9dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9DCu;
        // 0x2ff9e0: 0x24645870  addiu       $a0, $v1, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9dc) {
            ctx->pc = 0x2FF9F8u;
            goto label_2ff9f8;
        }
    }
    ctx->pc = 0x2FF9E4u;
    // 0x2ff9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff9e8: 0x0  nop
    ctx->pc = 0x2ff9e8u;
    // NOP
    // 0x2ff9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ff9f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF9F0u;
    {
        const bool branch_taken_0x2ff9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9f0) {
            ctx->pc = 0x2FFA14u;
            goto label_2ffa14;
        }
    }
    ctx->pc = 0x2FF9F8u;
label_2ff9f8:
    // 0x2ff9f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ff9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2ff9fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ff9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ffa00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ffa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ffa04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffa04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffa08: 0x0  nop
    ctx->pc = 0x2ffa08u;
    // NOP
    // 0x2ffa0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ffa0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ffa10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ffa10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ffa14:
    // 0x2ffa14: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ffa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2ffa18: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ffa18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2ffa1c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ffa1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ffa20: 0xc0b8c56  jal         func_2E3158
    ctx->pc = 0x2FFA20u;
    SET_GPR_U32(ctx, 31, 0x2FFA28u);
    ctx->pc = 0x2FFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA20u;
    // 0x2ffa24: 0x460f03c2  mul.s       $f15, $f0, $f15 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3158u, 0x2FFA20u, 0x2FFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA28u;
label_2ffa28:
    // 0x2ffa28: 0x26025870  addiu       $v0, $s0, 0x5870
    ctx->pc = 0x2ffa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 22640));
    // 0x2ffa2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ffa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffa30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ffa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffa34: 0xc4420040  lwc1        $f2, 0x40($v0)
    ctx->pc = 0x2ffa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ffa38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ffa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ffa3c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2ffa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2ffa40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ffa40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ffa44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ffa44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffa48: 0x0  nop
    ctx->pc = 0x2ffa48u;
    // NOP
    // 0x2ffa4c: 0x0  nop
    ctx->pc = 0x2ffa4cu;
    // NOP
    // 0x2ffa50: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2ffa50u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2ffa54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ffa54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffa58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ffa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ffa5c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2ffa5cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2ffa60: 0xe4602c48  swc1        $f0, 0x2C48($v1)
    ctx->pc = 0x2ffa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C48u, _value); } while (0); }
    // 0x2ffa64: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA64u;
        // 0x2ffa68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFA6Cu;
    // 0x2ffa6c: 0x0  nop
    ctx->pc = 0x2ffa6cu;
    // NOP
    // 0x2ffa70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ffa74: 0x0  nop
    ctx->pc = 0x2ffa74u;
    // NOP
    ctx->pc = 0x2ffa78u;
}
