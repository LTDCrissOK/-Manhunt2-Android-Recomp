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

// Function: sub_00143148
// Address: 0x143148 - 0x143208
void sub_00143148_0x143148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143148_0x143148");
#endif

    switch (ctx->pc) {
        case 0x143160u: goto label_143160;
        case 0x143174u: goto label_143174;
        case 0x143190u: goto label_143190;
        case 0x143198u: goto label_143198;
        case 0x1431c8u: goto label_1431c8;
        case 0x1431d8u: goto label_1431d8;
        case 0x1431e8u: goto label_1431e8;
        case 0x1431f0u: goto label_1431f0;
        case 0x1431f8u: goto label_1431f8;
        default: break;
    }

    ctx->pc = 0x143148u;

    // 0x143148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14314c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143150: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143158: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x143158u;
    SET_GPR_U32(ctx, 31, 0x143160u);
    ctx->pc = 0x14315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143158u;
    // 0x14315c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x143158u, 0x143160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143160u;
label_143160:
    // 0x143160: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x143160u;
    {
        const bool branch_taken_0x143160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143160) {
            ctx->pc = 0x143164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143160u;
            // 0x143164: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1431FCu;
            goto label_1431fc;
        }
    }
    ctx->pc = 0x143168u;
    // 0x143168: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143168u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14316c: 0xc04eb18  jal         func_13AC60
    ctx->pc = 0x14316Cu;
    SET_GPR_U32(ctx, 31, 0x143174u);
    ctx->pc = 0x143170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14316Cu;
    // 0x143170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC60u, 0x14316Cu, 0x143174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143174u;
label_143174:
    // 0x143174: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x143174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143178: 0x8e020b18  lw          $v0, 0xB18($s0)
    ctx->pc = 0x143178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x14317c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14317Cu;
    {
        const bool branch_taken_0x14317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14317Cu;
        // 0x143180: 0x2cc20007  sltiu       $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14317c) {
            ctx->pc = 0x1431A0u;
            goto label_1431a0;
        }
    }
    ctx->pc = 0x143184u;
    // 0x143184: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143188: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x143188u;
    SET_GPR_U32(ctx, 31, 0x143190u);
    ctx->pc = 0x14318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143188u;
    // 0x14318c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x143188u, 0x143190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143190u;
label_143190:
    // 0x143190: 0xc050cd6  jal         func_143358
    ctx->pc = 0x143190u;
    SET_GPR_U32(ctx, 31, 0x143198u);
    ctx->pc = 0x143194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143190u;
    // 0x143194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143358u, 0x143190u, 0x143198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143198u;
label_143198:
    // 0x143198: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x143198u;
    {
        const bool branch_taken_0x143198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143198) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431A0u;
label_1431a0:
    // 0x1431a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1431A0u;
    {
        const bool branch_taken_0x1431a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431A0u;
        // 0x1431a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431a0) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431A8u;
    // 0x1431a8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1431a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1431ac: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x1431acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x1431b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1431b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1431b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1431b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1431b8: 0x800008  jr          $a0
    ctx->pc = 0x1431B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1431C0u: goto label_1431c0;
            case 0x1431D0u: goto label_1431d0;
            case 0x1431E0u: goto label_1431e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1431C0u;
label_1431c0:
    // 0x1431c0: 0xc050c82  jal         func_143208
    ctx->pc = 0x1431C0u;
    SET_GPR_U32(ctx, 31, 0x1431C8u);
    ctx->pc = 0x1431C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431C0u;
    // 0x1431c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143208u, 0x1431C0u, 0x1431C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431C8u;
label_1431c8:
    // 0x1431c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1431C8u;
    {
        const bool branch_taken_0x1431c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431c8) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431D0u;
label_1431d0:
    // 0x1431d0: 0xc050ca2  jal         func_143288
    ctx->pc = 0x1431D0u;
    SET_GPR_U32(ctx, 31, 0x1431D8u);
    ctx->pc = 0x1431D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431D0u;
    // 0x1431d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143288u, 0x1431D0u, 0x1431D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431D8u;
label_1431d8:
    // 0x1431d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1431D8u;
    {
        const bool branch_taken_0x1431d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431d8) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431E0u;
label_1431e0:
    // 0x1431e0: 0xc050cb8  jal         func_1432E0
    ctx->pc = 0x1431E0u;
    SET_GPR_U32(ctx, 31, 0x1431E8u);
    ctx->pc = 0x1431E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431E0u;
    // 0x1431e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1432E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1432E0u, 0x1431E0u, 0x1431E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431E8u;
label_1431e8:
    // 0x1431e8: 0xc04e71a  jal         func_139C68
    ctx->pc = 0x1431E8u;
    SET_GPR_U32(ctx, 31, 0x1431F0u);
    ctx->pc = 0x1431ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431E8u;
    // 0x1431ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C68u, 0x1431E8u, 0x1431F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431F0u;
label_1431f0:
    // 0x1431f0: 0xc04e6f0  jal         func_139BC0
    ctx->pc = 0x1431F0u;
    SET_GPR_U32(ctx, 31, 0x1431F8u);
    ctx->pc = 0x1431F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1431F0u;
    // 0x1431f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BC0u, 0x1431F0u, 0x1431F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1431F8u;
label_1431f8:
    // 0x1431f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1431f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1431fc:
    // 0x1431fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1431fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143200: 0x3e00008  jr          $ra
    ctx->pc = 0x143200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143200u;
        // 0x143204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143208u;
}
