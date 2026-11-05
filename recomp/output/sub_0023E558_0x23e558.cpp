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

// Function: sub_0023E558
// Address: 0x23e558 - 0x23e5c8
void sub_0023E558_0x23e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E558_0x23e558");
#endif

    switch (ctx->pc) {
        case 0x23e558u: goto label_23e558;
        case 0x23e55cu: goto label_23e55c;
        case 0x23e560u: goto label_23e560;
        case 0x23e564u: goto label_23e564;
        case 0x23e568u: goto label_23e568;
        case 0x23e56cu: goto label_23e56c;
        case 0x23e570u: goto label_23e570;
        case 0x23e574u: goto label_23e574;
        case 0x23e578u: goto label_23e578;
        case 0x23e57cu: goto label_23e57c;
        case 0x23e580u: goto label_23e580;
        case 0x23e584u: goto label_23e584;
        case 0x23e588u: goto label_23e588;
        case 0x23e58cu: goto label_23e58c;
        case 0x23e590u: goto label_23e590;
        case 0x23e594u: goto label_23e594;
        case 0x23e598u: goto label_23e598;
        case 0x23e59cu: goto label_23e59c;
        case 0x23e5a0u: goto label_23e5a0;
        case 0x23e5a4u: goto label_23e5a4;
        case 0x23e5a8u: goto label_23e5a8;
        case 0x23e5acu: goto label_23e5ac;
        case 0x23e5b0u: goto label_23e5b0;
        case 0x23e5b4u: goto label_23e5b4;
        case 0x23e5b8u: goto label_23e5b8;
        case 0x23e5bcu: goto label_23e5bc;
        case 0x23e5c0u: goto label_23e5c0;
        case 0x23e5c4u: goto label_23e5c4;
        default: break;
    }

    ctx->pc = 0x23e558u;

label_23e558:
    // 0x23e558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23e55c:
    // 0x23e55c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23e560:
    // 0x23e560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23e564:
    // 0x23e564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e568:
    // 0x23e568: 0xa200047d  sb          $zero, 0x47D($s0)
    ctx->pc = 0x23e568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1149), (uint8_t)GPR_U32(ctx, 0));
label_23e56c:
    // 0x23e56c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23e570:
    // 0x23e570: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23e574:
    // 0x23e574: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23e578:
    if (ctx->pc == 0x23E578u) {
        ctx->pc = 0x23E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E574u;
        // 0x23e578: 0xae000480  sw          $zero, 0x480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E57Cu;
        goto label_23e57c;
    }
    ctx->pc = 0x23E574u;
    {
        const bool branch_taken_0x23e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E574u;
        // 0x23e578: 0xae000480  sw          $zero, 0x480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e574) {
            ctx->pc = 0x23E594u;
            goto label_23e594;
        }
    }
    ctx->pc = 0x23E57Cu;
label_23e57c:
    // 0x23e57c: 0xc0a0870  jal         func_2821C0
label_23e580:
    if (ctx->pc == 0x23E580u) {
        ctx->pc = 0x23E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E57Cu;
        // 0x23e580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E584u;
        goto label_23e584;
    }
    ctx->pc = 0x23E57Cu;
    SET_GPR_U32(ctx, 31, 0x23E584u);
    ctx->pc = 0x23E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E57Cu;
    // 0x23e580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2821C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2821C0u, 0x23E57Cu, 0x23E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E584u;
label_23e584:
    // 0x23e584: 0xc0c0954  jal         func_302550
label_23e588:
    if (ctx->pc == 0x23E588u) {
        ctx->pc = 0x23E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E584u;
        // 0x23e588: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E58Cu;
        goto label_23e58c;
    }
    ctx->pc = 0x23E584u;
    SET_GPR_U32(ctx, 31, 0x23E58Cu);
    ctx->pc = 0x23E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E584u;
    // 0x23e588: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302550u, 0x23E584u, 0x23E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E58Cu;
label_23e58c:
    // 0x23e58c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23e590:
    if (ctx->pc == 0x23E590u) {
        ctx->pc = 0x23E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E58Cu;
        // 0x23e590: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E594u;
        goto label_23e594;
    }
    ctx->pc = 0x23E58Cu;
    {
        const bool branch_taken_0x23e58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E58Cu;
        // 0x23e590: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e58c) {
            ctx->pc = 0x23E5B8u;
            goto label_23e5b8;
        }
    }
    ctx->pc = 0x23E594u;
label_23e594:
    // 0x23e594: 0xc06b600  jal         func_1AD800
label_23e598:
    if (ctx->pc == 0x23E598u) {
        ctx->pc = 0x23E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E594u;
        // 0x23e598: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E59Cu;
        goto label_23e59c;
    }
    ctx->pc = 0x23E594u;
    SET_GPR_U32(ctx, 31, 0x23E59Cu);
    ctx->pc = 0x23E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E594u;
    // 0x23e598: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x23E594u, 0x23E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E59Cu;
label_23e59c:
    // 0x23e59c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23e5a0:
    if (ctx->pc == 0x23E5A0u) {
        ctx->pc = 0x23E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E59Cu;
        // 0x23e5a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5A4u;
        goto label_23e5a4;
    }
    ctx->pc = 0x23E59Cu;
    {
        const bool branch_taken_0x23e59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e59c) {
            ctx->pc = 0x23E5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E59Cu;
            // 0x23e5a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E5B8u;
            goto label_23e5b8;
        }
    }
    ctx->pc = 0x23E5A4u;
label_23e5a4:
    // 0x23e5a4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x23e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23e5a8:
    // 0x23e5a8: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x23e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_23e5ac:
    // 0x23e5ac: 0x40f809  jalr        $v0
label_23e5b0:
    if (ctx->pc == 0x23E5B0u) {
        ctx->pc = 0x23E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5ACu;
        // 0x23e5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5B4u;
        goto label_23e5b4;
    }
    ctx->pc = 0x23E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E5B4u);
        ctx->pc = 0x23E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5ACu;
        // 0x23e5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E5ACu, 0x23E5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E5B4u;
label_23e5b4:
    // 0x23e5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e5b8:
    // 0x23e5b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23e5bc:
    // 0x23e5bc: 0x3e00008  jr          $ra
label_23e5c0:
    if (ctx->pc == 0x23E5C0u) {
        ctx->pc = 0x23E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5BCu;
        // 0x23e5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5C4u;
        goto label_23e5c4;
    }
    ctx->pc = 0x23E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5BCu;
        // 0x23e5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E5C4u;
label_23e5c4:
    // 0x23e5c4: 0x0  nop
    ctx->pc = 0x23e5c4u;
    // NOP
    ctx->pc = 0x23e5c8u;
}
