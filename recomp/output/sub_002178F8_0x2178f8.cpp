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

// Function: sub_002178F8
// Address: 0x2178f8 - 0x217970
void sub_002178F8_0x2178f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002178F8_0x2178f8");
#endif

    switch (ctx->pc) {
        case 0x21790cu: goto label_21790c;
        case 0x21791cu: goto label_21791c;
        case 0x217934u: goto label_217934;
        case 0x217950u: goto label_217950;
        default: break;
    }

    ctx->pc = 0x2178f8u;

label_2178f8:
    // 0x2178f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2178f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2178fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2178fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217900: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217904: 0xc085e14  jal         func_217850
    ctx->pc = 0x217904u;
    SET_GPR_U32(ctx, 31, 0x21790Cu);
    ctx->pc = 0x217908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217904u;
    // 0x217908: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217850u, 0x217904u, 0x21790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21790Cu;
label_21790c:
    // 0x21790c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21790Cu;
    {
        const bool branch_taken_0x21790c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21790c) {
            ctx->pc = 0x217910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21790Cu;
            // 0x217910: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217924u;
            goto label_217924;
        }
    }
    ctx->pc = 0x217914u;
    // 0x217914: 0xc0c4882  jal         func_312208
    ctx->pc = 0x217914u;
    SET_GPR_U32(ctx, 31, 0x21791Cu);
    ctx->pc = 0x217918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217914u;
    // 0x217918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x217914u, 0x21791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21791Cu;
label_21791c:
    // 0x21791c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21791Cu;
    {
        const bool branch_taken_0x21791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21791Cu;
        // 0x217920: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21791c) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x217924u;
label_217924:
    // 0x217924: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217924u;
    {
        const bool branch_taken_0x217924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217924) {
            ctx->pc = 0x217928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217924u;
            // 0x217928: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217940u;
            goto label_217940;
        }
    }
    ctx->pc = 0x21792Cu;
    // 0x21792c: 0xc085e3e  jal         func_2178F8
    ctx->pc = 0x21792Cu;
    SET_GPR_U32(ctx, 31, 0x217934u);
    ctx->pc = 0x2178F8u;
    goto label_2178f8;
    ctx->pc = 0x217934u;
label_217934:
    // 0x217934: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x217934u;
    {
        const bool branch_taken_0x217934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217934) {
            ctx->pc = 0x217938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217934u;
            // 0x217938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x21793Cu;
    // 0x21793c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_217940:
    // 0x217940: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217940u;
    {
        const bool branch_taken_0x217940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217940u;
        // 0x217944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217940) {
            ctx->pc = 0x217960u;
            goto label_217960;
        }
    }
    ctx->pc = 0x217948u;
    // 0x217948: 0xc085e3e  jal         func_2178F8
    ctx->pc = 0x217948u;
    SET_GPR_U32(ctx, 31, 0x217950u);
    ctx->pc = 0x2178F8u;
    goto label_2178f8;
    ctx->pc = 0x217950u;
label_217950:
    // 0x217950: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x217950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217954: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217954u;
    {
        const bool branch_taken_0x217954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x217958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217954u;
        // 0x217958: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217954) {
            ctx->pc = 0x217964u;
            goto label_217964;
        }
    }
    ctx->pc = 0x21795Cu;
    // 0x21795c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21795cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217960:
    // 0x217960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217964:
    // 0x217964: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x217964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217968: 0x3e00008  jr          $ra
    ctx->pc = 0x217968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217968u;
        // 0x21796c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217970u;
}
