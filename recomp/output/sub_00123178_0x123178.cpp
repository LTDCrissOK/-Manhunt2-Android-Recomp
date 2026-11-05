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

// Function: sub_00123178
// Address: 0x123178 - 0x123218
void sub_00123178_0x123178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123178_0x123178");
#endif

    switch (ctx->pc) {
        case 0x1231b0u: goto label_1231b0;
        case 0x1231c0u: goto label_1231c0;
        case 0x1231d0u: goto label_1231d0;
        case 0x1231e8u: goto label_1231e8;
        default: break;
    }

    ctx->pc = 0x123178u;

    // 0x123178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12317c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123180: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12318c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12318cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123190: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123194: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x123194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123198: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x123198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12319c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12319cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1231a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1231a4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1231a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231a8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1231A8u;
    SET_GPR_U32(ctx, 31, 0x1231B0u);
    ctx->pc = 0x1231ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231A8u;
    // 0x1231ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1231A8u, 0x1231B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231B0u;
label_1231b0:
    // 0x1231b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1231B0u;
    {
        const bool branch_taken_0x1231b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231B0u;
        // 0x1231b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231b0) {
            ctx->pc = 0x1231F4u;
            goto label_1231f4;
        }
    }
    ctx->pc = 0x1231B8u;
    // 0x1231b8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1231B8u;
    SET_GPR_U32(ctx, 31, 0x1231C0u);
    ctx->pc = 0x1231BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231B8u;
    // 0x1231bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1231B8u, 0x1231C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231C0u;
label_1231c0:
    // 0x1231c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1231C0u;
    {
        const bool branch_taken_0x1231c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231C0u;
        // 0x1231c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231c0) {
            ctx->pc = 0x1231F0u;
            goto label_1231f0;
        }
    }
    ctx->pc = 0x1231C8u;
    // 0x1231c8: 0xc04a32c  jal         func_128CB0
    ctx->pc = 0x1231C8u;
    SET_GPR_U32(ctx, 31, 0x1231D0u);
    ctx->pc = 0x1231CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231C8u;
    // 0x1231cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128CB0u, 0x1231C8u, 0x1231D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231D0u;
label_1231d0:
    // 0x1231d0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1231d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1231d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1231d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1231d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1231dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231e0: 0xc04289a  jal         func_10A268
    ctx->pc = 0x1231E0u;
    SET_GPR_U32(ctx, 31, 0x1231E8u);
    ctx->pc = 0x1231E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1231E0u;
    // 0x1231e4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A268u, 0x1231E0u, 0x1231E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231E8u;
label_1231e8:
    // 0x1231e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1231E8u;
    {
        const bool branch_taken_0x1231e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E8u;
        // 0x1231ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231e8) {
            ctx->pc = 0x1231F8u;
            goto label_1231f8;
        }
    }
    ctx->pc = 0x1231F0u;
label_1231f0:
    // 0x1231f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1231f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1231f4:
    // 0x1231f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1231f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1231f8:
    // 0x1231f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1231f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1231fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1231fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123200: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123204: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123204u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123208: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12320c: 0x3e00008  jr          $ra
    ctx->pc = 0x12320Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12320Cu;
        // 0x123210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12320Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123214u;
    // 0x123214: 0x0  nop
    ctx->pc = 0x123214u;
    // NOP
    ctx->pc = 0x123218u;
}
