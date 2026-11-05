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

// Function: sub_00275298
// Address: 0x275298 - 0x2752d8
void sub_00275298_0x275298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275298_0x275298");
#endif

    switch (ctx->pc) {
        case 0x2752acu: goto label_2752ac;
        default: break;
    }

    ctx->pc = 0x275298u;

    // 0x275298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27529c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2752a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2752a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2752a4: 0xc084172  jal         func_2105C8
    ctx->pc = 0x2752A4u;
    SET_GPR_U32(ctx, 31, 0x2752ACu);
    ctx->pc = 0x2752A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2752A4u;
    // 0x2752a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x2752A4u, 0x2752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2752ACu;
label_2752ac:
    // 0x2752ac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2752acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2752b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2752b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2752b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2752b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2752b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2752bc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2752bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2752c0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2752c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2752c4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2752c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2752c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2752c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2752cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2752CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2752D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2752CCu;
        // 0x2752d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2752CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2752D4u;
    // 0x2752d4: 0x0  nop
    ctx->pc = 0x2752d4u;
    // NOP
    ctx->pc = 0x2752d8u;
}
