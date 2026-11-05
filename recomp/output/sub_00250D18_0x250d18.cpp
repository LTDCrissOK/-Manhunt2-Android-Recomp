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

// Function: sub_00250D18
// Address: 0x250d18 - 0x250d88
void sub_00250D18_0x250d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250D18_0x250d18");
#endif

    switch (ctx->pc) {
        case 0x250d30u: goto label_250d30;
        case 0x250d48u: goto label_250d48;
        case 0x250d78u: goto label_250d78;
        default: break;
    }

    ctx->pc = 0x250d18u;

    // 0x250d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250d1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x250d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x250d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x250d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x250d28: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250D28u;
    SET_GPR_U32(ctx, 31, 0x250D30u);
    ctx->pc = 0x250D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D28u;
    // 0x250d2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250D28u, 0x250D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D30u;
label_250d30:
    // 0x250d30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x250d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250d34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x250d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d38: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x250d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x250d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d40: 0xc0c3290  jal         func_30CA40
    ctx->pc = 0x250D40u;
    SET_GPR_U32(ctx, 31, 0x250D48u);
    ctx->pc = 0x250D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D40u;
    // 0x250d44: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA40u, 0x250D40u, 0x250D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D48u;
label_250d48:
    // 0x250d48: 0xc60101c4  lwc1        $f1, 0x1C4($s0)
    ctx->pc = 0x250d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250d4c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x250d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x250d50: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x250d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x250d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250d5c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x250d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250d60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x250d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x250d64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x250d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x250d68: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x250d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x250d6c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x250d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x250d70: 0xc0c32b4  jal         func_30CAD0
    ctx->pc = 0x250D70u;
    SET_GPR_U32(ctx, 31, 0x250D78u);
    ctx->pc = 0x250D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D70u;
    // 0x250d74: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CAD0u, 0x250D70u, 0x250D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D78u;
label_250d78:
    // 0x250d78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x250d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250d7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x250d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250d80: 0x3e00008  jr          $ra
    ctx->pc = 0x250D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D80u;
        // 0x250d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250D88u;
}
