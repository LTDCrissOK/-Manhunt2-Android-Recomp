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

// Function: sub_0030D208
// Address: 0x30d208 - 0x30d2a0
void sub_0030D208_0x30d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D208_0x30d208");
#endif

    switch (ctx->pc) {
        case 0x30d238u: goto label_30d238;
        case 0x30d24cu: goto label_30d24c;
        case 0x30d260u: goto label_30d260;
        default: break;
    }

    ctx->pc = 0x30d208u;

    // 0x30d208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30d214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d218: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30d21c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d220: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30d220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30d224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30d228: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30d22c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30D22Cu;
    {
        const bool branch_taken_0x30d22c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D22Cu;
        // 0x30d230: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d22c) {
            ctx->pc = 0x30D27Cu;
            goto label_30d27c;
        }
    }
    ctx->pc = 0x30D234u;
    // 0x30d234: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30d238:
    // 0x30d238: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x30d238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x30d23c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30d23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d240: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30d240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30d244: 0xc0c4882  jal         func_312208
    ctx->pc = 0x30D244u;
    SET_GPR_U32(ctx, 31, 0x30D24Cu);
    ctx->pc = 0x30D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D244u;
    // 0x30d248: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x30D244u, 0x30D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D24Cu;
label_30d24c:
    // 0x30d24c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30d24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d254: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30d254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d258: 0xc0c3434  jal         func_30D0D0
    ctx->pc = 0x30D258u;
    SET_GPR_U32(ctx, 31, 0x30D260u);
    ctx->pc = 0x30D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D258u;
    // 0x30d25c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D0D0u, 0x30D258u, 0x30D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D260u;
label_30d260:
    // 0x30d260: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D260u;
    {
        const bool branch_taken_0x30d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D260u;
        // 0x30d264: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d260) {
            ctx->pc = 0x30D280u;
            goto label_30d280;
        }
    }
    ctx->pc = 0x30D268u;
    // 0x30d268: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30d26c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30d26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30d270: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x30d270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30d274: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30D274u;
    {
        const bool branch_taken_0x30d274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d274) {
            ctx->pc = 0x30D278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D274u;
            // 0x30d278: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d238;
        }
    }
    ctx->pc = 0x30D27Cu;
label_30d27c:
    // 0x30d27c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30d27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d280:
    // 0x30d280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d288: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d28c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30d28cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d294: 0x3e00008  jr          $ra
    ctx->pc = 0x30D294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D294u;
        // 0x30d298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D29Cu;
    // 0x30d29c: 0x0  nop
    ctx->pc = 0x30d29cu;
    // NOP
    ctx->pc = 0x30d2a0u;
}
