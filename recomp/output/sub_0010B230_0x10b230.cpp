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

// Function: sub_0010B230
// Address: 0x10b230 - 0x10b2b0
void sub_0010B230_0x10b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B230_0x10b230");
#endif

    switch (ctx->pc) {
        case 0x10b254u: goto label_10b254;
        case 0x10b280u: goto label_10b280;
        case 0x10b28cu: goto label_10b28c;
        default: break;
    }

    ctx->pc = 0x10b230u;

    // 0x10b230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b23c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10b23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b244: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10b244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b248: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b24c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B24Cu;
    SET_GPR_U32(ctx, 31, 0x10B254u);
    ctx->pc = 0x10B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B24Cu;
    // 0x10b250: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B24Cu, 0x10B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B254u;
label_10b254:
    // 0x10b254: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b258: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b25c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10B25Cu;
    {
        const bool branch_taken_0x10b25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B25Cu;
        // 0x10b260: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b25c) {
            ctx->pc = 0x10B294u;
            goto label_10b294;
        }
    }
    ctx->pc = 0x10B264u;
    // 0x10b264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b268: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10b26c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b270: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b274: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10b274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b278: 0xc04439e  jal         func_110E78
    ctx->pc = 0x10B278u;
    SET_GPR_U32(ctx, 31, 0x10B280u);
    ctx->pc = 0x10B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B278u;
    // 0x10b27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E78u, 0x10B278u, 0x10B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B280u;
label_10b280:
    // 0x10b280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b284: 0xc04366c  jal         func_10D9B0
    ctx->pc = 0x10B284u;
    SET_GPR_U32(ctx, 31, 0x10B28Cu);
    ctx->pc = 0x10B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B284u;
    // 0x10b288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9B0u, 0x10B284u, 0x10B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B28Cu;
label_10b28c:
    // 0x10b28c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B28Cu;
    {
        const bool branch_taken_0x10b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B28Cu;
        // 0x10b290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b28c) {
            ctx->pc = 0x10B298u;
            goto label_10b298;
        }
    }
    ctx->pc = 0x10B294u;
label_10b294:
    // 0x10b294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b298:
    // 0x10b298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b29c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b2a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b2a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b2a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10b2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2A8u;
        // 0x10b2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B2B0u;
}
