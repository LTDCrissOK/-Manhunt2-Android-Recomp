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

// Function: sub_0029D100
// Address: 0x29d100 - 0x29d170
void sub_0029D100_0x29d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D100_0x29d100");
#endif

    switch (ctx->pc) {
        case 0x29d11cu: goto label_29d11c;
        case 0x29d124u: goto label_29d124;
        case 0x29d138u: goto label_29d138;
        case 0x29d148u: goto label_29d148;
        case 0x29d150u: goto label_29d150;
        case 0x29d15cu: goto label_29d15c;
        default: break;
    }

    ctx->pc = 0x29d100u;

    // 0x29d100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29d108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d114: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29D114u;
    SET_GPR_U32(ctx, 31, 0x29D11Cu);
    ctx->pc = 0x29D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D114u;
    // 0x29d118: 0x24040fa0  addiu       $a0, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29D114u, 0x29D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D11Cu;
label_29d11c:
    // 0x29d11c: 0xc0a846c  jal         func_2A11B0
    ctx->pc = 0x29D11Cu;
    SET_GPR_U32(ctx, 31, 0x29D124u);
    ctx->pc = 0x29D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D11Cu;
    // 0x29d120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A11B0u, 0x29D11Cu, 0x29D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D124u;
label_29d124:
    // 0x29d124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d128: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d12c: 0x24a5c030  addiu       $a1, $a1, -0x3FD0
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
    // 0x29d130: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x29D130u;
    SET_GPR_U32(ctx, 31, 0x29D138u);
    ctx->pc = 0x29D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D130u;
    // 0x29d134: 0x26040238  addiu       $a0, $s0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29D130u, 0x29D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D138u;
label_29d138:
    // 0x29d138: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29d138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29d13c: 0x26040230  addiu       $a0, $s0, 0x230
    ctx->pc = 0x29d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x29d140: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x29D140u;
    SET_GPR_U32(ctx, 31, 0x29D148u);
    ctx->pc = 0x29D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D140u;
    // 0x29d144: 0x24a5c220  addiu       $a1, $a1, -0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x29D140u, 0x29D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D148u;
label_29d148:
    // 0x29d148: 0xc0a8660  jal         func_2A1980
    ctx->pc = 0x29D148u;
    SET_GPR_U32(ctx, 31, 0x29D150u);
    ctx->pc = 0x29D14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D148u;
    // 0x29d14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1980u, 0x29D148u, 0x29D150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D150u;
label_29d150:
    // 0x29d150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d154: 0xc0a742e  jal         func_29D0B8
    ctx->pc = 0x29D154u;
    SET_GPR_U32(ctx, 31, 0x29D15Cu);
    ctx->pc = 0x29D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D154u;
    // 0x29d158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0B8u, 0x29D154u, 0x29D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D15Cu;
label_29d15c:
    // 0x29d15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29d160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d168: 0x3e00008  jr          $ra
    ctx->pc = 0x29D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D168u;
        // 0x29d16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D170u;
}
