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

// Function: sub_0010C238
// Address: 0x10c238 - 0x10c2e8
void sub_0010C238_0x10c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C238_0x10c238");
#endif

    switch (ctx->pc) {
        case 0x10c280u: goto label_10c280;
        case 0x10c29cu: goto label_10c29c;
        case 0x10c2c4u: goto label_10c2c4;
        default: break;
    }

    ctx->pc = 0x10c238u;

    // 0x10c238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c23c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10c240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10c244: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c24c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c250: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10c254: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10c258: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10c258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10c25c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C25Cu;
    {
        const bool branch_taken_0x10c25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C25Cu;
        // 0x10c260: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c25c) {
            ctx->pc = 0x10C26Cu;
            goto label_10c26c;
        }
    }
    ctx->pc = 0x10C264u;
    // 0x10c264: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10C264u;
    {
        const bool branch_taken_0x10c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C264u;
        // 0x10c268: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c264) {
            ctx->pc = 0x10C2C8u;
            goto label_10c2c8;
        }
    }
    ctx->pc = 0x10C26Cu;
label_10c26c:
    // 0x10c26c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C26Cu;
    {
        const bool branch_taken_0x10c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C26Cu;
        // 0x10c270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c26c) {
            ctx->pc = 0x10C2BCu;
            goto label_10c2bc;
        }
    }
    ctx->pc = 0x10C274u;
    // 0x10c274: 0x2654000c  addiu       $s4, $s2, 0xC
    ctx->pc = 0x10c274u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x10c278: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10c27c: 0x0  nop
    ctx->pc = 0x10c27cu;
    // NOP
label_10c280:
    // 0x10c280: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c284: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c288: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10c288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c28c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C28Cu;
    {
        const bool branch_taken_0x10c28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C28Cu;
        // 0x10c290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c28c) {
            ctx->pc = 0x10C2A4u;
            goto label_10c2a4;
        }
    }
    ctx->pc = 0x10C294u;
    // 0x10c294: 0xc043d44  jal         func_10F510
    ctx->pc = 0x10C294u;
    SET_GPR_U32(ctx, 31, 0x10C29Cu);
    ctx->pc = 0x10C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C294u;
    // 0x10c298: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F510u, 0x10C294u, 0x10C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C29Cu;
label_10c29c:
    // 0x10c29c: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10C29Cu;
    {
        const bool branch_taken_0x10c29c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c29c) {
            ctx->pc = 0x10C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C29Cu;
            // 0x10c2a0: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C2A4u;
            goto label_10c2a4;
        }
    }
    ctx->pc = 0x10C2A4u;
label_10c2a4:
    // 0x10c2a4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x10c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10c2a8: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10c2ac: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x10c2acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10c2b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10c2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c2b4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x10C2B4u;
    {
        const bool branch_taken_0x10c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2B4u;
        // 0x10c2b8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2b4) {
            ctx->pc = 0x10C280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c280;
        }
    }
    ctx->pc = 0x10C2BCu;
label_10c2bc:
    // 0x10c2bc: 0xc043108  jal         func_10C420
    ctx->pc = 0x10C2BCu;
    SET_GPR_U32(ctx, 31, 0x10C2C4u);
    ctx->pc = 0x10C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2BCu;
    // 0x10c2c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C420u, 0x10C2BCu, 0x10C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C2C4u;
label_10c2c4:
    // 0x10c2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c2c8:
    // 0x10c2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c2d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c2d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10c2d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c2d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10c2d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c2dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10c2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10c2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2E0u;
        // 0x10c2e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C2E8u;
}
