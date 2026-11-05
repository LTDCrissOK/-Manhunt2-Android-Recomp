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

// Function: sub_0028E9C0
// Address: 0x28e9c0 - 0x28ea28
void sub_0028E9C0_0x28e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E9C0_0x28e9c0");
#endif

    switch (ctx->pc) {
        case 0x28e9ecu: goto label_28e9ec;
        case 0x28ea08u: goto label_28ea08;
        default: break;
    }

    ctx->pc = 0x28e9c0u;

    // 0x28e9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28e9c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e9c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28e9cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28e9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9d0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x28e9d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28e9d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28e9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x28e9d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28e9dc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x28e9dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x28e9e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28e9e4: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E9E4u;
    SET_GPR_U32(ctx, 31, 0x28E9ECu);
    ctx->pc = 0x28E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E9E4u;
    // 0x28e9e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E9E4u, 0x28E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9ECu;
label_28e9ec:
    // 0x28e9ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E9ECu;
    {
        const bool branch_taken_0x28e9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9ECu;
        // 0x28e9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9ec) {
            ctx->pc = 0x28EA08u;
            goto label_28ea08;
        }
    }
    ctx->pc = 0x28E9F4u;
    // 0x28e9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28e9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e9fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28ea00: 0xc0a3790  jal         func_28DE40
    ctx->pc = 0x28EA00u;
    SET_GPR_U32(ctx, 31, 0x28EA08u);
    ctx->pc = 0x28EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA00u;
    // 0x28ea04: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE40u, 0x28EA00u, 0x28EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA08u;
label_28ea08:
    // 0x28ea08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ea08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ea0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ea0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ea10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ea14: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x28ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28ea18: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x28ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28ea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA1Cu;
        // 0x28ea20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EA24u;
    // 0x28ea24: 0x0  nop
    ctx->pc = 0x28ea24u;
    // NOP
    ctx->pc = 0x28ea28u;
}
