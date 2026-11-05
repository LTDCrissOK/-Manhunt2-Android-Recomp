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

// Function: sub_001663E8
// Address: 0x1663e8 - 0x166470
void sub_001663E8_0x1663e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001663E8_0x1663e8");
#endif

    switch (ctx->pc) {
        case 0x166408u: goto label_166408;
        case 0x16641cu: goto label_16641c;
        case 0x166424u: goto label_166424;
        case 0x166430u: goto label_166430;
        case 0x16643cu: goto label_16643c;
        case 0x166448u: goto label_166448;
        default: break;
    }

    ctx->pc = 0x1663e8u;

    // 0x1663e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1663e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1663ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1663ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1663f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1663f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1663f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1663f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1663f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1663fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1663fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x166400: 0xc04f1f4  jal         func_13C7D0
    ctx->pc = 0x166400u;
    SET_GPR_U32(ctx, 31, 0x166408u);
    ctx->pc = 0x166404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166400u;
    // 0x166404: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x166400u, 0x166408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166408u;
label_166408:
    // 0x166408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x166408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16640c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x166410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166414: 0xc04f33e  jal         func_13CCF8
    ctx->pc = 0x166414u;
    SET_GPR_U32(ctx, 31, 0x16641Cu);
    ctx->pc = 0x166418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166414u;
    // 0x166418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x166414u, 0x16641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16641Cu;
label_16641c:
    // 0x16641c: 0xc0597e2  jal         func_165F88
    ctx->pc = 0x16641Cu;
    SET_GPR_U32(ctx, 31, 0x166424u);
    ctx->pc = 0x166420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16641Cu;
    // 0x166420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F88u, 0x16641Cu, 0x166424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166424u;
label_166424:
    // 0x166424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166428: 0xc04d7da  jal         func_135F68
    ctx->pc = 0x166428u;
    SET_GPR_U32(ctx, 31, 0x166430u);
    ctx->pc = 0x16642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166428u;
    // 0x16642c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F68u, 0x166428u, 0x166430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166430u;
label_166430:
    // 0x166430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166434: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x166434u;
    SET_GPR_U32(ctx, 31, 0x16643Cu);
    ctx->pc = 0x166438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166434u;
    // 0x166438: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x166434u, 0x16643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16643Cu;
label_16643c:
    // 0x16643c: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x16643cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
    // 0x166440: 0xc09c98c  jal         func_272630
    ctx->pc = 0x166440u;
    SET_GPR_U32(ctx, 31, 0x166448u);
    ctx->pc = 0x166444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166440u;
    // 0x166444: 0x8e0402e4  lw          $a0, 0x2E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272630u, 0x166440u, 0x166448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166448u;
label_166448:
    // 0x166448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166448u;
    {
        const bool branch_taken_0x166448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166448u;
        // 0x16644c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166448) {
            ctx->pc = 0x16645Cu;
            goto label_16645c;
        }
    }
    ctx->pc = 0x166450u;
    // 0x166450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166454: 0xae3204d0  sw          $s2, 0x4D0($s1)
    ctx->pc = 0x166454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1232), GPR_U32(ctx, 18));
    // 0x166458: 0xae2204cc  sw          $v0, 0x4CC($s1)
    ctx->pc = 0x166458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 2));
label_16645c:
    // 0x16645c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16645cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166464: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x166464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166468: 0x3e00008  jr          $ra
    ctx->pc = 0x166468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166468u;
        // 0x16646c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166470u;
}
