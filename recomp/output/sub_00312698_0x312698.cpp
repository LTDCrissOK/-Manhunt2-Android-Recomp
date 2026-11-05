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

// Function: sub_00312698
// Address: 0x312698 - 0x312718
void sub_00312698_0x312698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312698_0x312698");
#endif

    switch (ctx->pc) {
        case 0x312698u: goto label_312698;
        case 0x31269cu: goto label_31269c;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126a4u: goto label_3126a4;
        case 0x3126a8u: goto label_3126a8;
        case 0x3126acu: goto label_3126ac;
        case 0x3126b0u: goto label_3126b0;
        case 0x3126b4u: goto label_3126b4;
        case 0x3126b8u: goto label_3126b8;
        case 0x3126bcu: goto label_3126bc;
        case 0x3126c0u: goto label_3126c0;
        case 0x3126c4u: goto label_3126c4;
        case 0x3126c8u: goto label_3126c8;
        case 0x3126ccu: goto label_3126cc;
        case 0x3126d0u: goto label_3126d0;
        case 0x3126d4u: goto label_3126d4;
        case 0x3126d8u: goto label_3126d8;
        case 0x3126dcu: goto label_3126dc;
        case 0x3126e0u: goto label_3126e0;
        case 0x3126e4u: goto label_3126e4;
        case 0x3126e8u: goto label_3126e8;
        case 0x3126ecu: goto label_3126ec;
        case 0x3126f0u: goto label_3126f0;
        case 0x3126f4u: goto label_3126f4;
        case 0x3126f8u: goto label_3126f8;
        case 0x3126fcu: goto label_3126fc;
        case 0x312700u: goto label_312700;
        case 0x312704u: goto label_312704;
        case 0x312708u: goto label_312708;
        case 0x31270cu: goto label_31270c;
        case 0x312710u: goto label_312710;
        case 0x312714u: goto label_312714;
        default: break;
    }

    ctx->pc = 0x312698u;

label_312698:
    // 0x312698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31269c:
    // 0x31269c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3126a0:
    // 0x3126a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3126a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3126a4:
    // 0x3126a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3126a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3126a8:
    // 0x3126a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3126a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3126ac:
    // 0x3126ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3126acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3126b0:
    // 0x3126b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3126b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3126b4:
    // 0x3126b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3126b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3126b8:
    // 0x3126b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3126b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3126bc:
    // 0x3126bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3126bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3126c0:
    // 0x3126c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3126c4:
    if (ctx->pc == 0x3126C4u) {
        ctx->pc = 0x3126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126C0u;
        // 0x3126c4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126C8u;
        goto label_3126c8;
    }
    ctx->pc = 0x3126C0u;
    {
        const bool branch_taken_0x3126c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126C0u;
        // 0x3126c4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126c0) {
            ctx->pc = 0x3126F8u;
            goto label_3126f8;
        }
    }
    ctx->pc = 0x3126C8u;
label_3126c8:
    // 0x3126c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3126c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3126cc:
    // 0x3126cc: 0x0  nop
    ctx->pc = 0x3126ccu;
    // NOP
label_3126d0:
    // 0x3126d0: 0xc0c5492  jal         func_315248
label_3126d4:
    if (ctx->pc == 0x3126D4u) {
        ctx->pc = 0x3126D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126D0u;
        // 0x3126d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126D8u;
        goto label_3126d8;
    }
    ctx->pc = 0x3126D0u;
    SET_GPR_U32(ctx, 31, 0x3126D8u);
    ctx->pc = 0x3126D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126D0u;
    // 0x3126d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315248u, 0x3126D0u, 0x3126D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126D8u;
label_3126d8:
    // 0x3126d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3126d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3126dc:
    // 0x3126dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3126dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3126e0:
    // 0x3126e0: 0x260f809  jalr        $s3
label_3126e4:
    if (ctx->pc == 0x3126E4u) {
        ctx->pc = 0x3126E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126E0u;
        // 0x3126e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126E8u;
        goto label_3126e8;
    }
    ctx->pc = 0x3126E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x3126E8u);
        ctx->pc = 0x3126E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126E0u;
        // 0x3126e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3126E0u, 0x3126E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3126E8u;
label_3126e8:
    // 0x3126e8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3126e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3126ec:
    // 0x3126ec: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3126ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3126f0:
    // 0x3126f0: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_3126f4:
    if (ctx->pc == 0x3126F4u) {
        ctx->pc = 0x3126F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126F0u;
        // 0x3126f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126F8u;
        goto label_3126f8;
    }
    ctx->pc = 0x3126F0u;
    {
        const bool branch_taken_0x3126f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3126f0) {
            ctx->pc = 0x3126F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3126F0u;
            // 0x3126f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3126D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3126d0;
        }
    }
    ctx->pc = 0x3126F8u;
label_3126f8:
    // 0x3126f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3126f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3126fc:
    // 0x3126fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3126fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312700:
    // 0x312700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x312700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_312704:
    // 0x312704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x312704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_312708:
    // 0x312708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x312708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31270c:
    // 0x31270c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31270cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_312710:
    // 0x312710: 0x3e00008  jr          $ra
label_312714:
    if (ctx->pc == 0x312714u) {
        ctx->pc = 0x312714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312710u;
        // 0x312714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312718u;
        goto label_fallthrough_0x312710;
    }
    ctx->pc = 0x312710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312710u;
        // 0x312714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x312710:
    ctx->pc = 0x312718u;
}
