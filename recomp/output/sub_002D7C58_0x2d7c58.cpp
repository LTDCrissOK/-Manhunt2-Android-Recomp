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

// Function: sub_002D7C58
// Address: 0x2d7c58 - 0x2d7cd8
void sub_002D7C58_0x2d7c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7C58_0x2d7c58");
#endif

    switch (ctx->pc) {
        case 0x2d7c78u: goto label_2d7c78;
        case 0x2d7ca4u: goto label_2d7ca4;
        default: break;
    }

    ctx->pc = 0x2d7c58u;

    // 0x2d7c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c64: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2d7c64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d7c68: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d7c68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d7c6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d7c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d7c70: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D7C70u;
    SET_GPR_U32(ctx, 31, 0x2D7C78u);
    ctx->pc = 0x2D7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C70u;
    // 0x2d7c74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D7C70u, 0x2D7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C78u;
label_2d7c78:
    // 0x2d7c78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7c7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d7c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c84: 0x24a51050  addiu       $a1, $a1, 0x1050
    ctx->pc = 0x2d7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4176));
    // 0x2d7c88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7c8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d7c90: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7c94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7c98: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7c9c: 0xc0b5f56  jal         func_2D7D58
    ctx->pc = 0x2D7C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D7CA4u);
    ctx->pc = 0x2D7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C9Cu;
    // 0x2d7ca0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D58u, 0x2D7C9Cu, 0x2D7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CA4u;
label_2d7ca4:
    // 0x2d7ca4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7ca8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2d7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d7cac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d7cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7cb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7cb4: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x2d7cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7cb8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2d7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7cbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7cc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d7cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7cc8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d7ccc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d7cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CD0u;
        // 0x2d7cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7CD8u;
}
