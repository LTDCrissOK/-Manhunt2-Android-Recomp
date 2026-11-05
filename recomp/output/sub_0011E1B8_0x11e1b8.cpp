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

// Function: sub_0011E1B8
// Address: 0x11e1b8 - 0x11e240
void sub_0011E1B8_0x11e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E1B8_0x11e1b8");
#endif

    switch (ctx->pc) {
        case 0x11e1e8u: goto label_11e1e8;
        case 0x11e204u: goto label_11e204;
        default: break;
    }

    ctx->pc = 0x11e1b8u;

    // 0x11e1b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e1bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11e1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e1c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11e1cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11e1d4: 0x26320390  addiu       $s2, $s1, 0x390
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x11e1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e1dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11e1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1e0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11e1e4: 0x0  nop
    ctx->pc = 0x11e1e4u;
    // NOP
label_11e1e8:
    // 0x11e1e8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x11e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x11e1ec: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x11e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x11e1f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E1F0u;
    {
        const bool branch_taken_0x11e1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1F0u;
        // 0x11e1f4: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1f0) {
            ctx->pc = 0x11E20Cu;
            goto label_11e20c;
        }
    }
    ctx->pc = 0x11E1F8u;
    // 0x11e1f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11e1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e1fc: 0xc0aaf7c  jal         func_2ABDF0
    ctx->pc = 0x11E1FCu;
    SET_GPR_U32(ctx, 31, 0x11E204u);
    ctx->pc = 0x11E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E1FCu;
    // 0x11e200: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABDF0u, 0x11E1FCu, 0x11E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E204u;
label_11e204:
    // 0x11e204: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E204u;
    {
        const bool branch_taken_0x11e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E204u;
        // 0x11e208: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e204) {
            ctx->pc = 0x11E224u;
            goto label_11e224;
        }
    }
    ctx->pc = 0x11E20Cu;
label_11e20c:
    // 0x11e20c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x11e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11e210: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11e210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11e214: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x11e214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11e218: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E218u;
    {
        const bool branch_taken_0x11e218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E218u;
        // 0x11e21c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e218) {
            ctx->pc = 0x11E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e1e8;
        }
    }
    ctx->pc = 0x11E220u;
    // 0x11e220: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_11e224:
    // 0x11e224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11e228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e22c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11e22cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e230: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11e230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11e234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e238: 0x3e00008  jr          $ra
    ctx->pc = 0x11E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E238u;
        // 0x11e23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E240u;
}
