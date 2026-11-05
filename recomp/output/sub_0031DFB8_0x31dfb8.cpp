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

// Function: sub_0031DFB8
// Address: 0x31dfb8 - 0x31e038
void sub_0031DFB8_0x31dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DFB8_0x31dfb8");
#endif

    switch (ctx->pc) {
        case 0x31dff4u: goto label_31dff4;
        case 0x31dffcu: goto label_31dffc;
        default: break;
    }

    ctx->pc = 0x31dfb8u;

    // 0x31dfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31dfbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31dfc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31dfc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31dfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dfcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31dfd0: 0xa200009c  sb          $zero, 0x9C($s0)
    ctx->pc = 0x31dfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x31dfd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31dfd8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x31dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x31dfdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dfe0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x31dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x31dfe4: 0x24a54548  addiu       $a1, $a1, 0x4548
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17736));
    // 0x31dfe8: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x31dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x31dfec: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x31DFECu;
    SET_GPR_U32(ctx, 31, 0x31DFF4u);
    ctx->pc = 0x31DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DFECu;
    // 0x31dff0: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x31DFECu, 0x31DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFF4u;
label_31dff4:
    // 0x31dff4: 0xc09e9f0  jal         func_27A7C0
    ctx->pc = 0x31DFF4u;
    SET_GPR_U32(ctx, 31, 0x31DFFCu);
    ctx->pc = 0x31DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DFF4u;
    // 0x31dff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A7C0u, 0x31DFF4u, 0x31DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DFFCu;
label_31dffc:
    // 0x31dffc: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31dffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x31e000: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31e000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e004: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x31e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x31e008: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31e008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x31e00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31e00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31e014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e018: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x31e018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x31e01c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x31e01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x31e020: 0xe6020050  swc1        $f2, 0x50($s0)
    ctx->pc = 0x31e020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x31e024: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x31e024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x31e028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31e028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e02c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31e02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31e030: 0x3e00008  jr          $ra
    ctx->pc = 0x31E030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E030u;
        // 0x31e034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E038u;
}
