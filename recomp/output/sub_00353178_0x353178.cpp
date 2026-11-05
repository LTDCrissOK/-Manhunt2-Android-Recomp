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

// Function: sub_00353178
// Address: 0x353178 - 0x3531e8
void sub_00353178_0x353178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353178_0x353178");
#endif

    switch (ctx->pc) {
        case 0x353194u: goto label_353194;
        case 0x3531b0u: goto label_3531b0;
        case 0x3531c0u: goto label_3531c0;
        default: break;
    }

    ctx->pc = 0x353178u;

    // 0x353178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35317c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x353180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x353180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x353184: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x353184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x353188: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35318c: 0xc0d1abe  jal         func_346AF8
    ctx->pc = 0x35318Cu;
    SET_GPR_U32(ctx, 31, 0x353194u);
    ctx->pc = 0x353190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35318Cu;
    // 0x353190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346AF8u, 0x35318Cu, 0x353194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353194u;
label_353194:
    // 0x353194: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x353194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x353198: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x353198u;
    {
        const bool branch_taken_0x353198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353198) {
            ctx->pc = 0x35319Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353198u;
            // 0x35319c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3531D4u;
            goto label_3531d4;
        }
    }
    ctx->pc = 0x3531A0u;
    // 0x3531a0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3531a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3531a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3531A4u;
    {
        const bool branch_taken_0x3531a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3531A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531A4u;
        // 0x3531a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531a4) {
            ctx->pc = 0x3531D0u;
            goto label_3531d0;
        }
    }
    ctx->pc = 0x3531ACu;
    // 0x3531ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3531acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3531b0:
    // 0x3531b0: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x3531b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3531b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3531b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3531b8: 0xc0dac5c  jal         func_36B170
    ctx->pc = 0x3531B8u;
    SET_GPR_U32(ctx, 31, 0x3531C0u);
    ctx->pc = 0x3531BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3531B8u;
    // 0x3531bc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B170u, 0x3531B8u, 0x3531C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3531C0u;
label_3531c0:
    // 0x3531c0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3531c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3531c4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3531c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3531c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3531C8u;
    {
        const bool branch_taken_0x3531c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3531CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531C8u;
        // 0x3531cc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531c8) {
            ctx->pc = 0x3531B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3531b0;
        }
    }
    ctx->pc = 0x3531D0u;
label_3531d0:
    // 0x3531d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3531d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3531d4:
    // 0x3531d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3531d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3531d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3531d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3531dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3531dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3531e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3531E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3531E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531E0u;
        // 0x3531e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3531E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3531E8u;
}
