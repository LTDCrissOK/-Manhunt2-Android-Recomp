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

// Function: sub_00124EA0
// Address: 0x124ea0 - 0x124f00
void sub_00124EA0_0x124ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124EA0_0x124ea0");
#endif

    switch (ctx->pc) {
        case 0x124ec8u: goto label_124ec8;
        case 0x124edcu: goto label_124edc;
        default: break;
    }

    ctx->pc = 0x124ea0u;

    // 0x124ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124eac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124eb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124eb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124ebc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ec0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124EC0u;
    SET_GPR_U32(ctx, 31, 0x124EC8u);
    ctx->pc = 0x124EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EC0u;
    // 0x124ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124EC0u, 0x124EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EC8u;
label_124ec8:
    // 0x124ec8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124EC8u;
    {
        const bool branch_taken_0x124ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EC8u;
        // 0x124ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ec8) {
            ctx->pc = 0x124EE4u;
            goto label_124ee4;
        }
    }
    ctx->pc = 0x124ED0u;
    // 0x124ed0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x124ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x124ed4: 0xc042d70  jal         func_10B5C0
    ctx->pc = 0x124ED4u;
    SET_GPR_U32(ctx, 31, 0x124EDCu);
    ctx->pc = 0x124ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124ED4u;
    // 0x124ed8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5C0u, 0x124ED4u, 0x124EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EDCu;
label_124edc:
    // 0x124edc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124EDCu;
    {
        const bool branch_taken_0x124edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EDCu;
        // 0x124ee0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124edc) {
            ctx->pc = 0x124EECu;
            goto label_124eec;
        }
    }
    ctx->pc = 0x124EE4u;
label_124ee4:
    // 0x124ee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124eec:
    // 0x124eec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124ef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124ef4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x124EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF8u;
        // 0x124efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F00u;
}
