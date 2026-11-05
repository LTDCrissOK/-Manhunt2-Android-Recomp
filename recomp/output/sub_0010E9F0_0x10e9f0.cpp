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

// Function: sub_0010E9F0
// Address: 0x10e9f0 - 0x10ea60
void sub_0010E9F0_0x10e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E9F0_0x10e9f0");
#endif

    switch (ctx->pc) {
        case 0x10ea10u: goto label_10ea10;
        case 0x10ea48u: goto label_10ea48;
        default: break;
    }

    ctx->pc = 0x10e9f0u;

    // 0x10e9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10e9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10e9f4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x10e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x10e9f8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10e9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10e9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea00: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10ea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10ea04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ea04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea08: 0xc0729ea  jal         func_1CA7A8
    ctx->pc = 0x10EA08u;
    SET_GPR_U32(ctx, 31, 0x10EA10u);
    ctx->pc = 0x10EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA08u;
    // 0x10ea0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7A8u, 0x10EA08u, 0x10EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA10u;
label_10ea10:
    // 0x10ea10: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10ea14: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10ea18: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10ea1c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x10ea1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10ea20: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x10ea24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ea28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ea2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10ea2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ea30: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ea34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10ea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ea3c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x10ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x10ea40: 0xc072be8  jal         func_1CAFA0
    ctx->pc = 0x10EA40u;
    SET_GPR_U32(ctx, 31, 0x10EA48u);
    ctx->pc = 0x10EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA40u;
    // 0x10ea44: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFA0u, 0x10EA40u, 0x10EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA48u;
label_10ea48:
    // 0x10ea48: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x10ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ea4c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10ea4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ea50: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10ea54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10ea54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ea58: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA58u;
        // 0x10ea5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA60u;
}
