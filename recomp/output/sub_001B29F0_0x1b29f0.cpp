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

// Function: sub_001B29F0
// Address: 0x1b29f0 - 0x1b2a50
void sub_001B29F0_0x1b29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B29F0_0x1b29f0");
#endif

    switch (ctx->pc) {
        case 0x1b2a08u: goto label_1b2a08;
        case 0x1b2a18u: goto label_1b2a18;
        case 0x1b2a28u: goto label_1b2a28;
        case 0x1b2a38u: goto label_1b2a38;
        default: break;
    }

    ctx->pc = 0x1b29f0u;

    // 0x1b29f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b29f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b29f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b29f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b29f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b29fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2a00: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B2A00u;
    SET_GPR_U32(ctx, 31, 0x1B2A08u);
    ctx->pc = 0x1B2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A00u;
    // 0x1b2a04: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B2A00u, 0x1B2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A08u;
label_1b2a08:
    // 0x1b2a08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b2a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b2a0c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b2a10: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1B2A10u;
    SET_GPR_U32(ctx, 31, 0x1B2A18u);
    ctx->pc = 0x1B2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A10u;
    // 0x1b2a14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1B2A10u, 0x1B2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A18u;
label_1b2a18:
    // 0x1b2a18: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1b2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b2a1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2a1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2a20: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B2A20u;
    SET_GPR_U32(ctx, 31, 0x1B2A28u);
    ctx->pc = 0x1B2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A20u;
    // 0x1b2a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B2A20u, 0x1B2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A28u;
label_1b2a28:
    // 0x1b2a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a30: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B2A30u;
    SET_GPR_U32(ctx, 31, 0x1B2A38u);
    ctx->pc = 0x1B2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A30u;
    // 0x1b2a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B2A30u, 0x1B2A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A38u;
label_1b2a38:
    // 0x1b2a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a40: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1b2a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2a44: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A44u;
        // 0x1b2a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2A4Cu;
    // 0x1b2a4c: 0x0  nop
    ctx->pc = 0x1b2a4cu;
    // NOP
    ctx->pc = 0x1b2a50u;
}
