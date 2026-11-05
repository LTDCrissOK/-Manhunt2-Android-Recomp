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

// Function: sub_0020C188
// Address: 0x20c188 - 0x20c1c8
void sub_0020C188_0x20c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C188_0x20c188");
#endif

    switch (ctx->pc) {
        case 0x20c1a4u: goto label_20c1a4;
        default: break;
    }

    ctx->pc = 0x20c188u;

    // 0x20c188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c190: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x20c190u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x20c194: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20c194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20c198: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x20c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20c19c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x20C19Cu;
    SET_GPR_U32(ctx, 31, 0x20C1A4u);
    ctx->pc = 0x20C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C19Cu;
    // 0x20c1a0: 0xc4940004  lwc1        $f20, 0x4($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x20C19Cu, 0x20C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1A4u;
label_20c1a4:
    // 0x20c1a4: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x20c1a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x20c1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c1ac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x20c1acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20c1b0: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x20c1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x20c1b4: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x20c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20c1b8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x20c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20c1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20C1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1BCu;
        // 0x20c1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C1C4u;
    // 0x20c1c4: 0x0  nop
    ctx->pc = 0x20c1c4u;
    // NOP
    ctx->pc = 0x20c1c8u;
}
