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

// Function: sub_00259490
// Address: 0x259490 - 0x2594f0
void sub_00259490_0x259490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259490_0x259490");
#endif

    switch (ctx->pc) {
        case 0x259490u: goto label_259490;
        case 0x259494u: goto label_259494;
        case 0x259498u: goto label_259498;
        case 0x25949cu: goto label_25949c;
        case 0x2594a0u: goto label_2594a0;
        case 0x2594a4u: goto label_2594a4;
        case 0x2594a8u: goto label_2594a8;
        case 0x2594acu: goto label_2594ac;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594b4u: goto label_2594b4;
        case 0x2594b8u: goto label_2594b8;
        case 0x2594bcu: goto label_2594bc;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594c4u: goto label_2594c4;
        case 0x2594c8u: goto label_2594c8;
        case 0x2594ccu: goto label_2594cc;
        case 0x2594d0u: goto label_2594d0;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594d8u: goto label_2594d8;
        case 0x2594dcu: goto label_2594dc;
        case 0x2594e0u: goto label_2594e0;
        case 0x2594e4u: goto label_2594e4;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594ecu: goto label_2594ec;
        default: break;
    }

    ctx->pc = 0x259490u;

label_259490:
    // 0x259490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_259494:
    // 0x259494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_259498:
    // 0x259498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x259498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_25949c:
    // 0x25949c: 0xc095462  jal         func_255188
label_2594a0:
    if (ctx->pc == 0x2594A0u) {
        ctx->pc = 0x2594A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25949Cu;
        // 0x2594a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594A4u;
        goto label_2594a4;
    }
    ctx->pc = 0x25949Cu;
    SET_GPR_U32(ctx, 31, 0x2594A4u);
    ctx->pc = 0x2594A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25949Cu;
    // 0x2594a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255188u, 0x25949Cu, 0x2594A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594A4u;
label_2594a4:
    // 0x2594a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2594a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2594a8:
    // 0x2594a8: 0xc085d2a  jal         func_2174A8
label_2594ac:
    if (ctx->pc == 0x2594ACu) {
        ctx->pc = 0x2594ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594A8u;
        // 0x2594ac: 0x24845600  addiu       $a0, $a0, 0x5600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594B0u;
        goto label_2594b0;
    }
    ctx->pc = 0x2594A8u;
    SET_GPR_U32(ctx, 31, 0x2594B0u);
    ctx->pc = 0x2594ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594A8u;
    // 0x2594ac: 0x24845600  addiu       $a0, $a0, 0x5600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x2594A8u, 0x2594B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594B0u;
label_2594b0:
    // 0x2594b0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2594b4:
    if (ctx->pc == 0x2594B4u) {
        ctx->pc = 0x2594B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B0u;
        // 0x2594b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594B8u;
        goto label_2594b8;
    }
    ctx->pc = 0x2594B0u;
    {
        const bool branch_taken_0x2594b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2594b0) {
            ctx->pc = 0x2594B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2594B0u;
            // 0x2594b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2594E4u;
            goto label_2594e4;
        }
    }
    ctx->pc = 0x2594B8u;
label_2594b8:
    // 0x2594b8: 0xc083072  jal         func_20C1C8
label_2594bc:
    if (ctx->pc == 0x2594BCu) {
        ctx->pc = 0x2594BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594B8u;
        // 0x2594bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594C0u;
        goto label_2594c0;
    }
    ctx->pc = 0x2594B8u;
    SET_GPR_U32(ctx, 31, 0x2594C0u);
    ctx->pc = 0x2594BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2594B8u;
    // 0x2594bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x2594B8u, 0x2594C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594C0u;
label_2594c0:
    // 0x2594c0: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x2594c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_2594c4:
    // 0x2594c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2594c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2594c8:
    // 0x2594c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2594c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2594cc:
    // 0x2594cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2594ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2594d0:
    // 0x2594d0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2594d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2594d4:
    // 0x2594d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2594d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2594d8:
    // 0x2594d8: 0x40f809  jalr        $v0
label_2594dc:
    if (ctx->pc == 0x2594DCu) {
        ctx->pc = 0x2594DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D8u;
        // 0x2594dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594E0u;
        goto label_2594e0;
    }
    ctx->pc = 0x2594D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2594E0u);
        ctx->pc = 0x2594DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D8u;
        // 0x2594dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2594D8u, 0x2594E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2594E0u;
label_2594e0:
    // 0x2594e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2594e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2594e4:
    // 0x2594e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2594e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2594e8:
    // 0x2594e8: 0x3e00008  jr          $ra
label_2594ec:
    if (ctx->pc == 0x2594ECu) {
        ctx->pc = 0x2594ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594E8u;
        // 0x2594ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2594F0u;
        goto label_fallthrough_0x2594e8;
    }
    ctx->pc = 0x2594E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2594ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594E8u;
        // 0x2594ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2594E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2594e8:
    ctx->pc = 0x2594F0u;
}
