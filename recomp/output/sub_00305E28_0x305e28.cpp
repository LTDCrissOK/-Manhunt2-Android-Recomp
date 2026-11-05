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

// Function: sub_00305E28
// Address: 0x305e28 - 0x305e68
void sub_00305E28_0x305e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305E28_0x305e28");
#endif

    switch (ctx->pc) {
        case 0x305e3cu: goto label_305e3c;
        default: break;
    }

    ctx->pc = 0x305e28u;

    // 0x305e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305e30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x305e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x305e34: 0xc090446  jal         func_241118
    ctx->pc = 0x305E34u;
    SET_GPR_U32(ctx, 31, 0x305E3Cu);
    ctx->pc = 0x305E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E34u;
    // 0x305e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241118u, 0x305E34u, 0x305E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E3Cu;
label_305e3c:
    // 0x305e3c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x305e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x305e40: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x305E40u;
    {
        const bool branch_taken_0x305e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e40) {
            ctx->pc = 0x305E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305E40u;
            // 0x305e44: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305E50u;
            goto label_305e50;
        }
    }
    ctx->pc = 0x305E48u;
    // 0x305e48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305E48u;
    {
        const bool branch_taken_0x305e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E48u;
        // 0x305e4c: 0xae0010c0  sw          $zero, 0x10C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e48) {
            ctx->pc = 0x305E58u;
            goto label_305e58;
        }
    }
    ctx->pc = 0x305E50u;
label_305e50:
    // 0x305e50: 0xc4401500  lwc1        $f0, 0x1500($v0)
    ctx->pc = 0x305e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305e54: 0xe60010c0  swc1        $f0, 0x10C0($s0)
    ctx->pc = 0x305e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4288), bits); }
label_305e58:
    // 0x305e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305e5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x305e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305e60: 0x3e00008  jr          $ra
    ctx->pc = 0x305E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E60u;
        // 0x305e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305E68u;
}
