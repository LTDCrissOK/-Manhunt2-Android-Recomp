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

// Function: sub_0010CC60
// Address: 0x10cc60 - 0x10ccb0
void sub_0010CC60_0x10cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CC60_0x10cc60");
#endif

    switch (ctx->pc) {
        case 0x10cc80u: goto label_10cc80;
        case 0x10cc8cu: goto label_10cc8c;
        case 0x10cca0u: goto label_10cca0;
        default: break;
    }

    ctx->pc = 0x10cc60u;

    // 0x10cc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10cc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cc68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10cc6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc70: 0x920500cc  lbu         $a1, 0xCC($s0)
    ctx->pc = 0x10cc70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x10cc74: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10CC74u;
    {
        const bool branch_taken_0x10cc74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cc74) {
            ctx->pc = 0x10CC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CC74u;
            // 0x10cc78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CCA4u;
            goto label_10cca4;
        }
    }
    ctx->pc = 0x10CC7Cu;
    // 0x10cc7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_10cc80:
    // 0x10cc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc84: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x10CC84u;
    SET_GPR_U32(ctx, 31, 0x10CC8Cu);
    ctx->pc = 0x10CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC84u;
    // 0x10cc88: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x10CC84u, 0x10CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC8Cu;
label_10cc8c:
    // 0x10cc8c: 0x920500cc  lbu         $a1, 0xCC($s0)
    ctx->pc = 0x10cc8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x10cc90: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x10CC90u;
    {
        const bool branch_taken_0x10cc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC90u;
        // 0x10cc94: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc90) {
            ctx->pc = 0x10CC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cc80;
        }
    }
    ctx->pc = 0x10CC98u;
    // 0x10cc98: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x10CC98u;
    SET_GPR_U32(ctx, 31, 0x10CCA0u);
    ctx->pc = 0x10CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC98u;
    // 0x10cc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x10CC98u, 0x10CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCA0u;
label_10cca0:
    // 0x10cca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10cca4:
    // 0x10cca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCA8u;
        // 0x10ccac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CCB0u;
}
