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

// Function: sub_002067A0
// Address: 0x2067a0 - 0x206818
void sub_002067A0_0x2067a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002067A0_0x2067a0");
#endif

    switch (ctx->pc) {
        case 0x2067a0u: goto label_2067a0;
        case 0x2067a4u: goto label_2067a4;
        case 0x2067a8u: goto label_2067a8;
        case 0x2067acu: goto label_2067ac;
        case 0x2067b0u: goto label_2067b0;
        case 0x2067b4u: goto label_2067b4;
        case 0x2067b8u: goto label_2067b8;
        case 0x2067bcu: goto label_2067bc;
        case 0x2067c0u: goto label_2067c0;
        case 0x2067c4u: goto label_2067c4;
        case 0x2067c8u: goto label_2067c8;
        case 0x2067ccu: goto label_2067cc;
        case 0x2067d0u: goto label_2067d0;
        case 0x2067d4u: goto label_2067d4;
        case 0x2067d8u: goto label_2067d8;
        case 0x2067dcu: goto label_2067dc;
        case 0x2067e0u: goto label_2067e0;
        case 0x2067e4u: goto label_2067e4;
        case 0x2067e8u: goto label_2067e8;
        case 0x2067ecu: goto label_2067ec;
        case 0x2067f0u: goto label_2067f0;
        case 0x2067f4u: goto label_2067f4;
        case 0x2067f8u: goto label_2067f8;
        case 0x2067fcu: goto label_2067fc;
        case 0x206800u: goto label_206800;
        case 0x206804u: goto label_206804;
        case 0x206808u: goto label_206808;
        case 0x20680cu: goto label_20680c;
        case 0x206810u: goto label_206810;
        case 0x206814u: goto label_206814;
        default: break;
    }

    ctx->pc = 0x2067a0u;

label_2067a0:
    // 0x2067a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2067a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2067a4:
    // 0x2067a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2067a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2067a8:
    // 0x2067a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2067a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2067ac:
    // 0x2067ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2067acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2067b0:
    // 0x2067b0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2067b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2067b4:
    // 0x2067b4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2067b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2067b8:
    // 0x2067b8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2067b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2067bc:
    // 0x2067bc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2067bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2067c0:
    // 0x2067c0: 0x7e000050  sq          $zero, 0x50($s0)
    ctx->pc = 0x2067c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 0));
label_2067c4:
    // 0x2067c4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2067c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2067c8:
    // 0x2067c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2067cc:
    if (ctx->pc == 0x2067CCu) {
        ctx->pc = 0x2067CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067C8u;
        // 0x2067cc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067D0u;
        goto label_2067d0;
    }
    ctx->pc = 0x2067C8u;
    {
        const bool branch_taken_0x2067c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067C8u;
        // 0x2067cc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067c8) {
            ctx->pc = 0x2067E4u;
            goto label_2067e4;
        }
    }
    ctx->pc = 0x2067D0u;
label_2067d0:
    // 0x2067d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2067d4:
    // 0x2067d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2067d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2067d8:
    // 0x2067d8: 0x40f809  jalr        $v0
label_2067dc:
    if (ctx->pc == 0x2067DCu) {
        ctx->pc = 0x2067E0u;
        goto label_2067e0;
    }
    ctx->pc = 0x2067D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2067E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067D8u, 0x2067E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2067E0u;
label_2067e0:
    // 0x2067e0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2067e4:
    // 0x2067e4: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2067e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
label_2067e8:
    // 0x2067e8: 0x244278e0  addiu       $v0, $v0, 0x78E0
    ctx->pc = 0x2067e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
label_2067ec:
    // 0x2067ec: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2067ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
label_2067f0:
    // 0x2067f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2067f4:
    if (ctx->pc == 0x2067F4u) {
        ctx->pc = 0x2067F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067F0u;
        // 0x2067f4: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067F8u;
        goto label_2067f8;
    }
    ctx->pc = 0x2067F0u;
    {
        const bool branch_taken_0x2067f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067F0u;
        // 0x2067f4: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067f0) {
            ctx->pc = 0x206808u;
            goto label_206808;
        }
    }
    ctx->pc = 0x2067F8u;
label_2067f8:
    // 0x2067f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2067f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2067fc:
    // 0x2067fc: 0xac406394  sw          $zero, 0x6394($v0)
    ctx->pc = 0x2067fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
label_206800:
    // 0x206800: 0xc0b7082  jal         func_2DC208
label_206804:
    if (ctx->pc == 0x206804u) {
        ctx->pc = 0x206804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206800u;
        // 0x206804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206808u;
        goto label_206808;
    }
    ctx->pc = 0x206800u;
    SET_GPR_U32(ctx, 31, 0x206808u);
    ctx->pc = 0x206804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206800u;
    // 0x206804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x206800u, 0x206808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206808u;
label_206808:
    // 0x206808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20680c:
    // 0x20680c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20680cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206810:
    // 0x206810: 0x3e00008  jr          $ra
label_206814:
    if (ctx->pc == 0x206814u) {
        ctx->pc = 0x206814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206810u;
        // 0x206814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206818u;
        goto label_fallthrough_0x206810;
    }
    ctx->pc = 0x206810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206810u;
        // 0x206814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206810:
    ctx->pc = 0x206818u;
}
