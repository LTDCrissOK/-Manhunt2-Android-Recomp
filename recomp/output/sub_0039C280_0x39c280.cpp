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

// Function: sub_0039C280
// Address: 0x39c280 - 0x39c2e0
void sub_0039C280_0x39c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C280_0x39c280");
#endif

    switch (ctx->pc) {
        case 0x39c2acu: goto label_39c2ac;
        case 0x39c2c0u: goto label_39c2c0;
        default: break;
    }

    ctx->pc = 0x39c280u;

    // 0x39c280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39c290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39c290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39c298: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39c298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c29c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x39c29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x39c2a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39c2a4: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C2A4u;
    SET_GPR_U32(ctx, 31, 0x39C2ACu);
    ctx->pc = 0x39C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C2A4u;
    // 0x39c2a8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C2A4u, 0x39C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C2ACu;
label_39c2ac:
    // 0x39c2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39c2b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x39c2b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39c2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2b8: 0xc0e70b8  jal         func_39C2E0
    ctx->pc = 0x39C2B8u;
    SET_GPR_U32(ctx, 31, 0x39C2C0u);
    ctx->pc = 0x39C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C2B8u;
    // 0x39c2bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C2E0u, 0x39C2B8u, 0x39C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C2C0u;
label_39c2c0:
    // 0x39c2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c2c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c2c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c2c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c2c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c2cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39c2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39c2d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x39c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39c2d4: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39C2D4u;
    ctx->pc = 0x39C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C2D4u;
    // 0x39c2d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39C2DCu;
    // 0x39c2dc: 0x0  nop
    ctx->pc = 0x39c2dcu;
    // NOP
    ctx->pc = 0x39c2e0u;
}
