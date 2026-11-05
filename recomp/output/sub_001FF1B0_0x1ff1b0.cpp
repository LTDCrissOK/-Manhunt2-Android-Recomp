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

// Function: sub_001FF1B0
// Address: 0x1ff1b0 - 0x1ff220
void sub_001FF1B0_0x1ff1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF1B0_0x1ff1b0");
#endif

    switch (ctx->pc) {
        case 0x1ff1d8u: goto label_1ff1d8;
        case 0x1ff200u: goto label_1ff200;
        default: break;
    }

    ctx->pc = 0x1ff1b0u;

    // 0x1ff1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff1b4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1ff1b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ff1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff1bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff1c0: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1ff1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ff1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff1c8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff1cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ff1d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ff1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ff1d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ff1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff1d8:
    // 0x1ff1d8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ff1dc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ff1e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ff1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ff1e4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ff1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ff1e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ff1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ff1ec: 0xc48c001c  lwc1        $f12, 0x1C($a0)
    ctx->pc = 0x1ff1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ff1f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ff1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff1f4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1ff1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ff1f8: 0xc08246e  jal         func_2091B8
    ctx->pc = 0x1FF1F8u;
    SET_GPR_U32(ctx, 31, 0x1FF200u);
    ctx->pc = 0x1FF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1F8u;
    // 0x1ff1fc: 0x46146342  mul.s       $f13, $f12, $f20 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FF1F8u, 0x1FF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF200u;
label_1ff200:
    // 0x1ff200: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF200u;
    {
        const bool branch_taken_0x1ff200 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1ff200) {
            ctx->pc = 0x1FF204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF200u;
            // 0x1ff204: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff1d8;
        }
    }
    ctx->pc = 0x1FF208u;
    // 0x1ff208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff20c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff214: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ff214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ff218: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF218u;
        // 0x1ff21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF220u;
}
