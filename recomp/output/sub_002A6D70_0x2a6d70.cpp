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

// Function: sub_002A6D70
// Address: 0x2a6d70 - 0x2a6dc0
void sub_002A6D70_0x2a6d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6D70_0x2a6d70");
#endif

    switch (ctx->pc) {
        case 0x2a6d84u: goto label_2a6d84;
        default: break;
    }

    ctx->pc = 0x2a6d70u;

    // 0x2a6d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a6d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6d78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a6d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a6d7c: 0xc0a9b80  jal         func_2A6E00
    ctx->pc = 0x2A6D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A6D84u);
    ctx->pc = 0x2A6D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D7Cu;
    // 0x2a6d80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6E00u, 0x2A6D7Cu, 0x2A6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D84u;
label_2a6d84:
    // 0x2a6d84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6D84u;
    {
        const bool branch_taken_0x2a6d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D84u;
        // 0x2a6d88: 0x260302b4  addiu       $v1, $s0, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d84) {
            ctx->pc = 0x2A6DA8u;
            goto label_2a6da8;
        }
    }
    ctx->pc = 0x2A6D8Cu;
    // 0x2a6d8c: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x2a6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x2a6d90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a6d94: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2a6d94u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6d98: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a6d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a6da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6DA0u;
    {
        const bool branch_taken_0x2a6da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DA0u;
        // 0x2a6da4: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6da0) {
            ctx->pc = 0x2A6DB0u;
            goto label_2a6db0;
        }
    }
    ctx->pc = 0x2A6DA8u;
label_2a6da8:
    // 0x2a6da8: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2a6dac: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x2a6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_2a6db0:
    // 0x2a6db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6db4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a6db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DB8u;
        // 0x2a6dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6DC0u;
}
