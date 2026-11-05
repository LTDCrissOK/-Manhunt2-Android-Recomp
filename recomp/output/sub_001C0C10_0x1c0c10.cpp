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

// Function: sub_001C0C10
// Address: 0x1c0c10 - 0x1c0ca8
void sub_001C0C10_0x1c0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0C10_0x1c0c10");
#endif

    switch (ctx->pc) {
        case 0x1c0c4cu: goto label_1c0c4c;
        case 0x1c0c5cu: goto label_1c0c5c;
        case 0x1c0c74u: goto label_1c0c74;
        default: break;
    }

    ctx->pc = 0x1c0c10u;

    // 0x1c0c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c0c14: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1c0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1c0c18: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1c0c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1c0c1c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1c0c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1c0c20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c0c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c24: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1c0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1c0c28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c0c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c2c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1c0c2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c0c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c0c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c34: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c0c34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c0c38: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1c0c38u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1c0c3c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c0c3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c0c40: 0x8e220fe8  lw          $v0, 0xFE8($s1)
    ctx->pc = 0x1c0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x1c0c44: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1C0C44u;
    SET_GPR_U32(ctx, 31, 0x1C0C4Cu);
    ctx->pc = 0x1C0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C44u;
    // 0x1c0c48: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1C0C44u, 0x1C0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C4Cu;
label_1c0c4c:
    // 0x1c0c4c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c0c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c0c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c0c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c54: 0xc06fc04  jal         func_1BF010
    ctx->pc = 0x1C0C54u;
    SET_GPR_U32(ctx, 31, 0x1C0C5Cu);
    ctx->pc = 0x1C0C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C54u;
    // 0x1c0c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF010u, 0x1C0C54u, 0x1C0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C5Cu;
label_1c0c5c:
    // 0x1c0c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c0c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c0c64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c0c68: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1c0c68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1c0c6c: 0xc07032a  jal         func_1C0CA8
    ctx->pc = 0x1C0C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C0C74u);
    ctx->pc = 0x1C0C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C6Cu;
    // 0x1c0c70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CA8u, 0x1C0C6Cu, 0x1C0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C74u;
label_1c0c74:
    // 0x1c0c74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c0c78: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1c0c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0c7c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1c0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1c0c80: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1c0c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c0c84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c0c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0c88: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c0c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c0c8c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1c0c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c0c90: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c0c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c0c94: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1c0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1c0c98: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1c0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1c0c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C9Cu;
        // 0x1c0ca0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0CA4u;
    // 0x1c0ca4: 0x0  nop
    ctx->pc = 0x1c0ca4u;
    // NOP
    ctx->pc = 0x1c0ca8u;
}
