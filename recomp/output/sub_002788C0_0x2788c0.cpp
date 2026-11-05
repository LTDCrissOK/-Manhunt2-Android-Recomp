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

// Function: sub_002788C0
// Address: 0x2788c0 - 0x278950
void sub_002788C0_0x2788c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002788C0_0x2788c0");
#endif

    switch (ctx->pc) {
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f8u: goto label_2788f8;
        case 0x278934u: goto label_278934;
        default: break;
    }

    ctx->pc = 0x2788c0u;

    // 0x2788c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2788c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2788c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2788c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2788c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2788c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2788ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2788d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2788d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2788d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2788d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2788d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2788d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2788dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2788e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2788e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2788e4: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2788E4u;
    SET_GPR_U32(ctx, 31, 0x2788ECu);
    ctx->pc = 0x2788E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2788E4u;
    // 0x2788e8: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2788E4u, 0x2788ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788ECu;
label_2788ec:
    // 0x2788ec: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2788ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2788f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2788F0u;
    {
        const bool branch_taken_0x2788f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788F0u;
        // 0x2788f4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788f0) {
            ctx->pc = 0x278904u;
            goto label_278904;
        }
    }
    ctx->pc = 0x2788F8u;
label_2788f8:
    // 0x2788f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2788f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2788fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2788fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278900: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_278904:
    // 0x278904: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x278908: 0x80440004  lb          $a0, 0x4($v0)
    ctx->pc = 0x278908u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27890c: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27890Cu;
    {
        const bool branch_taken_0x27890c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27890c) {
            ctx->pc = 0x278910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27890Cu;
            // 0x278910: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2788F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2788f8;
        }
    }
    ctx->pc = 0x278914u;
    // 0x278914: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278918: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278918u;
    {
        const bool branch_taken_0x278918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278918) {
            ctx->pc = 0x27891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278918u;
            // 0x27891c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2788F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2788f8;
        }
    }
    ctx->pc = 0x278920u;
    // 0x278920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278928: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x278928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27892c: 0xc09e21e  jal         func_278878
    ctx->pc = 0x27892Cu;
    SET_GPR_U32(ctx, 31, 0x278934u);
    ctx->pc = 0x278930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27892Cu;
    // 0x278930: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278878u, 0x27892Cu, 0x278934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278934u;
label_278934:
    // 0x278934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27893c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27893cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278940: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278948: 0x3e00008  jr          $ra
    ctx->pc = 0x278948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278948u;
        // 0x27894c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278950u;
}
