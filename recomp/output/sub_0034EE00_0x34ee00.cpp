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

// Function: sub_0034EE00
// Address: 0x34ee00 - 0x34ee38
void sub_0034EE00_0x34ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EE00_0x34ee00");
#endif

    switch (ctx->pc) {
        case 0x34ee18u: goto label_34ee18;
        case 0x34ee24u: goto label_34ee24;
        default: break;
    }

    ctx->pc = 0x34ee00u;

    // 0x34ee00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ee04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ee08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34ee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34ee0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34ee0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee10: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34EE10u;
    SET_GPR_U32(ctx, 31, 0x34EE18u);
    ctx->pc = 0x34EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE10u;
    // 0x34ee14: 0xc60c003c  lwc1        $f12, 0x3C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34EE10u, 0x34EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE18u;
label_34ee18:
    // 0x34ee18: 0xc60c003c  lwc1        $f12, 0x3C($s0)
    ctx->pc = 0x34ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34ee1c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34EE1Cu;
    SET_GPR_U32(ctx, 31, 0x34EE24u);
    ctx->pc = 0x34EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE1Cu;
    // 0x34ee20: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34EE1Cu, 0x34EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE24u;
label_34ee24:
    // 0x34ee24: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x34ee24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x34ee28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ee28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ee2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34ee2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ee30: 0x3e00008  jr          $ra
    ctx->pc = 0x34EE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE30u;
        // 0x34ee34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EE38u;
}
