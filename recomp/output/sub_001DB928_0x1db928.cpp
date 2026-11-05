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

// Function: sub_001DB928
// Address: 0x1db928 - 0x1db9b8
void sub_001DB928_0x1db928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB928_0x1db928");
#endif

    switch (ctx->pc) {
        case 0x1db960u: goto label_1db960;
        case 0x1db968u: goto label_1db968;
        case 0x1db970u: goto label_1db970;
        case 0x1db978u: goto label_1db978;
        case 0x1db990u: goto label_1db990;
        default: break;
    }

    ctx->pc = 0x1db928u;

    // 0x1db928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1db92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db938: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1db938u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1db93c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db940: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1db940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1db944: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1db944u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1db948: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1db948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1db94c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1db94cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1db950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db954: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1db954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1db958: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DB958u;
    SET_GPR_U32(ctx, 31, 0x1DB960u);
    ctx->pc = 0x1DB95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB958u;
    // 0x1db95c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DB958u, 0x1DB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB960u;
label_1db960:
    // 0x1db960: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DB960u;
    SET_GPR_U32(ctx, 31, 0x1DB968u);
    ctx->pc = 0x1DB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB960u;
    // 0x1db964: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DB960u, 0x1DB968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB968u;
label_1db968:
    // 0x1db968: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DB968u;
    SET_GPR_U32(ctx, 31, 0x1DB970u);
    ctx->pc = 0x1DB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB968u;
    // 0x1db96c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DB968u, 0x1DB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB970u;
label_1db970:
    // 0x1db970: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DB970u;
    SET_GPR_U32(ctx, 31, 0x1DB978u);
    ctx->pc = 0x1DB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB970u;
    // 0x1db974: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DB970u, 0x1DB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB978u;
label_1db978:
    // 0x1db978: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x1db978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x1db97c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1db97cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1db980: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1db980u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1db984: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1db984u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1db988: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x1DB988u;
    SET_GPR_U32(ctx, 31, 0x1DB990u);
    ctx->pc = 0x1DB98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB988u;
    // 0x1db98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBA18u, 0x1DB988u, 0x1DB990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB990u;
label_1db990:
    // 0x1db990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1db990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db99c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db9a0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1db9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1db9a4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1db9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1db9a8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1db9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9ACu;
        // 0x1db9b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB9B4u;
    // 0x1db9b4: 0x0  nop
    ctx->pc = 0x1db9b4u;
    // NOP
    ctx->pc = 0x1db9b8u;
}
