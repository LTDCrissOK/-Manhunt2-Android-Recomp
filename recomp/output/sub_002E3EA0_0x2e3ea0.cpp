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

// Function: sub_002E3EA0
// Address: 0x2e3ea0 - 0x2e3f08
void sub_002E3EA0_0x2e3ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3EA0_0x2e3ea0");
#endif

    switch (ctx->pc) {
        case 0x2e3eccu: goto label_2e3ecc;
        default: break;
    }

    ctx->pc = 0x2e3ea0u;

    // 0x2e3ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3ea4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e3ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3ea8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3eb0: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2e3eb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e3eb4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2e3eb4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e3eb8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2e3eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e3ebc: 0x46007302  mul.s       $f12, $f14, $f0
    ctx->pc = 0x2e3ebcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2e3ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3ec4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2E3EC4u;
    SET_GPR_U32(ctx, 31, 0x2E3ECCu);
    ctx->pc = 0x2E3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EC4u;
    // 0x2e3ec8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2E3EC4u, 0x2E3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3ECCu;
label_2e3ecc:
    // 0x2e3ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3ed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3ed4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e3ed8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e3ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3edc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e3edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e3ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3ee4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e3ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e3ee8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e3ee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e3eec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e3eecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e3ef0: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x2e3ef0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e3ef4: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x2e3ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2e3ef8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2e3ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e3efc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e3efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F00u;
        // 0x2e3f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3F08u;
}
