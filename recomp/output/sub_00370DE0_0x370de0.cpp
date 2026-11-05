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

// Function: sub_00370DE0
// Address: 0x370de0 - 0x370e20
void sub_00370DE0_0x370de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370DE0_0x370de0");
#endif

    switch (ctx->pc) {
        case 0x370e04u: goto label_370e04;
        default: break;
    }

    ctx->pc = 0x370de0u;

    // 0x370de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370de8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x370de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x370dec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x370decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x370df0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x370df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x370df4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x370df4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x370df8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x370df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x370dfc: 0xc0dc388  jal         func_370E20
    ctx->pc = 0x370DFCu;
    SET_GPR_U32(ctx, 31, 0x370E04u);
    ctx->pc = 0x370E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DFCu;
    // 0x370e00: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E20u, 0x370DFCu, 0x370E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E04u;
label_370e04:
    // 0x370e04: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x370e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370e08: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x370e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370e0c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x370e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x370e10: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x370e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x370e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370e18: 0x3e00008  jr          $ra
    ctx->pc = 0x370E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E18u;
        // 0x370e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370E20u;
}
