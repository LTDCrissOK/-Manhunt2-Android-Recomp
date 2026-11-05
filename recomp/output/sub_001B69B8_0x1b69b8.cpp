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

// Function: sub_001B69B8
// Address: 0x1b69b8 - 0x1b6a48
void sub_001B69B8_0x1b69b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B69B8_0x1b69b8");
#endif

    switch (ctx->pc) {
        case 0x1b6a14u: goto label_1b6a14;
        case 0x1b6a30u: goto label_1b6a30;
        default: break;
    }

    ctx->pc = 0x1b69b8u;

    // 0x1b69b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b69b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b69bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b69bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b69c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b69c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b69c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b69c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b69cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b69ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69d0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b69d4: 0x8c420ff4  lw          $v0, 0xFF4($v0)
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1b69d8: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1b69d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b69dc: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1b69dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b69e0: 0x0  nop
    ctx->pc = 0x1b69e0u;
    // NOP
    // 0x1b69e4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B69E4u;
    {
        const bool branch_taken_0x1b69e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b69e4) {
            ctx->pc = 0x1B69E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B69E4u;
            // 0x1b69e8: 0x8e040230  lw          $a0, 0x230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A04u;
            goto label_1b6a04;
        }
    }
    ctx->pc = 0x1B69ECu;
    // 0x1b69ec: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1b69ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b69f0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b69f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b69f4: 0x0  nop
    ctx->pc = 0x1b69f4u;
    // NOP
    // 0x1b69f8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1B69F8u;
    {
        const bool branch_taken_0x1b69f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b69f8) {
            ctx->pc = 0x1B69FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B69F8u;
            // 0x1b69fc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A1Cu;
            goto label_1b6a1c;
        }
    }
    ctx->pc = 0x1B6A00u;
    // 0x1b6a00: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x1b6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_1b6a04:
    // 0x1b6a04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b6a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a08: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x1b6a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1b6a0c: 0xc0726ca  jal         func_1C9B28
    ctx->pc = 0x1B6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A14u);
    ctx->pc = 0x1B6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A0Cu;
    // 0x1b6a10: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9B28u, 0x1B6A0Cu, 0x1B6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A14u;
label_1b6a14:
    // 0x1b6a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6A14u;
    {
        const bool branch_taken_0x1b6a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A14u;
        // 0x1b6a18: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a14) {
            ctx->pc = 0x1B6A28u;
            goto label_1b6a28;
        }
    }
    ctx->pc = 0x1B6A1Cu;
label_1b6a1c:
    // 0x1b6a1c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1b6a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6a20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b6a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b6a24: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1b6a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b6a28:
    // 0x1b6a28: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B6A28u;
    SET_GPR_U32(ctx, 31, 0x1B6A30u);
    ctx->pc = 0x1B6A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A28u;
    // 0x1b6a2c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B6A28u, 0x1B6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A30u;
label_1b6a30:
    // 0x1b6a30: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1b6a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1b6a34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6a38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A3Cu;
        // 0x1b6a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6A44u;
    // 0x1b6a44: 0x0  nop
    ctx->pc = 0x1b6a44u;
    // NOP
    ctx->pc = 0x1b6a48u;
}
