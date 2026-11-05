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

// Function: sub_002E2130
// Address: 0x2e2130 - 0x2e21c0
void sub_002E2130_0x2e2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2130_0x2e2130");
#endif

    switch (ctx->pc) {
        case 0x2e2150u: goto label_2e2150;
        case 0x2e2188u: goto label_2e2188;
        case 0x2e21b0u: goto label_2e21b0;
        default: break;
    }

    ctx->pc = 0x2e2130u;

    // 0x2e2130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2134: 0x24830980  addiu       $v1, $a0, 0x980
    ctx->pc = 0x2e2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
    // 0x2e2138: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2138u;
    {
        const bool branch_taken_0x2e2138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2138u;
        // 0x2e213c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2138) {
            ctx->pc = 0x2E2168u;
            goto label_2e2168;
        }
    }
    ctx->pc = 0x2E2140u;
    // 0x2e2140: 0x24820fc0  addiu       $v0, $a0, 0xFC0
    ctx->pc = 0x2e2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4032));
    // 0x2e2144: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2144u;
    {
        const bool branch_taken_0x2e2144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2144) {
            ctx->pc = 0x2E2148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2144u;
            // 0x2e2148: 0x24830010  addiu       $v1, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E216Cu;
            goto label_2e216c;
        }
    }
    ctx->pc = 0x2E214Cu;
    // 0x2e214c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x2e214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_2e2150:
    // 0x2e2150: 0x0  nop
    ctx->pc = 0x2e2150u;
    // NOP
    // 0x2e2154: 0x0  nop
    ctx->pc = 0x2e2154u;
    // NOP
    // 0x2e2158: 0x0  nop
    ctx->pc = 0x2e2158u;
    // NOP
    // 0x2e215c: 0x0  nop
    ctx->pc = 0x2e215cu;
    // NOP
    // 0x2e2160: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2160u;
    {
        const bool branch_taken_0x2e2160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2160) {
            ctx->pc = 0x2E2164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2160u;
            // 0x2e2164: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2150;
        }
    }
    ctx->pc = 0x2E2168u;
label_2e2168:
    // 0x2e2168: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2e2168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2e216c:
    // 0x2e216c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E216Cu;
    {
        const bool branch_taken_0x2e216c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E216Cu;
        // 0x2e2170: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e216c) {
            ctx->pc = 0x2E21A0u;
            goto label_2e21a0;
        }
    }
    ctx->pc = 0x2E2174u;
    // 0x2e2174: 0x24820970  addiu       $v0, $a0, 0x970
    ctx->pc = 0x2e2174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2416));
    // 0x2e2178: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2178u;
    {
        const bool branch_taken_0x2e2178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2178) {
            ctx->pc = 0x2E21A0u;
            goto label_2e21a0;
        }
    }
    ctx->pc = 0x2E2180u;
    // 0x2e2180: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2e2184: 0x0  nop
    ctx->pc = 0x2e2184u;
    // NOP
label_2e2188:
    // 0x2e2188: 0x0  nop
    ctx->pc = 0x2e2188u;
    // NOP
    // 0x2e218c: 0x0  nop
    ctx->pc = 0x2e218cu;
    // NOP
    // 0x2e2190: 0x0  nop
    ctx->pc = 0x2e2190u;
    // NOP
    // 0x2e2194: 0x0  nop
    ctx->pc = 0x2e2194u;
    // NOP
    // 0x2e2198: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2198u;
    {
        const bool branch_taken_0x2e2198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2198) {
            ctx->pc = 0x2E219Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2198u;
            // 0x2e219c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2188;
        }
    }
    ctx->pc = 0x2E21A0u;
label_2e21a0:
    // 0x2e21a0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E21A0u;
    {
        const bool branch_taken_0x2e21a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21A0u;
        // 0x2e21a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21a0) {
            ctx->pc = 0x2E21B4u;
            goto label_2e21b4;
        }
    }
    ctx->pc = 0x2E21A8u;
    // 0x2e21a8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2E21A8u;
    SET_GPR_U32(ctx, 31, 0x2E21B0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2E21A8u, 0x2E21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21B0u;
label_2e21b0:
    // 0x2e21b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e21b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e21b4:
    // 0x2e21b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E21B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21B4u;
        // 0x2e21b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E21B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E21BCu;
    // 0x2e21bc: 0x0  nop
    ctx->pc = 0x2e21bcu;
    // NOP
    ctx->pc = 0x2e21c0u;
}
