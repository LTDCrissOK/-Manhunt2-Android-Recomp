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

// Function: sub_0024C138
// Address: 0x24c138 - 0x24c180
void sub_0024C138_0x24c138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C138_0x24c138");
#endif

    switch (ctx->pc) {
        case 0x24c14cu: goto label_24c14c;
        case 0x24c154u: goto label_24c154;
        case 0x24c16cu: goto label_24c16c;
        default: break;
    }

    ctx->pc = 0x24c138u;

    // 0x24c138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c140: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24c144: 0xc092eda  jal         func_24BB68
    ctx->pc = 0x24C144u;
    SET_GPR_U32(ctx, 31, 0x24C14Cu);
    ctx->pc = 0x24C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C144u;
    // 0x24c148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x24C144u, 0x24C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C14Cu;
label_24c14c:
    // 0x24c14c: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x24C14Cu;
    SET_GPR_U32(ctx, 31, 0x24C154u);
    ctx->pc = 0x24C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C14Cu;
    // 0x24c150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x24C14Cu, 0x24C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C154u;
label_24c154:
    // 0x24c154: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x24c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x24c158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c160: 0xc4401508  lwc1        $f0, 0x1508($v0)
    ctx->pc = 0x24c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c164: 0xc09309e  jal         func_24C278
    ctx->pc = 0x24C164u;
    SET_GPR_U32(ctx, 31, 0x24C16Cu);
    ctx->pc = 0x24C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C164u;
    // 0x24c168: 0xe60010c0  swc1        $f0, 0x10C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C278u, 0x24C164u, 0x24C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C16Cu;
label_24c16c:
    // 0x24c16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24c170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c174: 0x3e00008  jr          $ra
    ctx->pc = 0x24C174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C174u;
        // 0x24c178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C17Cu;
    // 0x24c17c: 0x0  nop
    ctx->pc = 0x24c17cu;
    // NOP
    ctx->pc = 0x24c180u;
}
