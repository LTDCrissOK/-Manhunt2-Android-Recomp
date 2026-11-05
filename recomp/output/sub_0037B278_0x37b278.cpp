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

// Function: sub_0037B278
// Address: 0x37b278 - 0x37b2d0
void sub_0037B278_0x37b278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B278_0x37b278");
#endif

    switch (ctx->pc) {
        case 0x37b294u: goto label_37b294;
        default: break;
    }

    ctx->pc = 0x37b278u;

    // 0x37b278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b27c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37b280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37b288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b28c: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x37B28Cu;
    SET_GPR_U32(ctx, 31, 0x37B294u);
    ctx->pc = 0x37B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B28Cu;
    // 0x37b290: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x37B28Cu, 0x37B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B294u;
label_37b294:
    // 0x37b294: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x37b294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37b298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37b298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37b29c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37b29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b2a0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x37b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x37b2a4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x37b2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x37b2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37b2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b2ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37b2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37b2b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37B2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B2B4u;
        // 0x37b2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B2BCu;
    // 0x37b2bc: 0x0  nop
    ctx->pc = 0x37b2bcu;
    // NOP
    // 0x37b2c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37b2c4: 0x0  nop
    ctx->pc = 0x37b2c4u;
    // NOP
    // 0x37b2c8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x37b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37b2cc: 0x0  nop
    ctx->pc = 0x37b2ccu;
    // NOP
    ctx->pc = 0x37b2d0u;
}
