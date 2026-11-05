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

// Function: sub_00145B68
// Address: 0x145b68 - 0x145bd0
void sub_00145B68_0x145b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145B68_0x145b68");
#endif

    switch (ctx->pc) {
        case 0x145b7cu: goto label_145b7c;
        case 0x145b8cu: goto label_145b8c;
        case 0x145b9cu: goto label_145b9c;
        case 0x145bacu: goto label_145bac;
        case 0x145bbcu: goto label_145bbc;
        default: break;
    }

    ctx->pc = 0x145b68u;

    // 0x145b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145b74: 0xc0516f4  jal         func_145BD0
    ctx->pc = 0x145B74u;
    SET_GPR_U32(ctx, 31, 0x145B7Cu);
    ctx->pc = 0x145B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B74u;
    // 0x145b78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BD0u, 0x145B74u, 0x145B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B7Cu;
label_145b7c:
    // 0x145b7c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x145B7Cu;
    {
        const bool branch_taken_0x145b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145b7c) {
            ctx->pc = 0x145B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145B7Cu;
            // 0x145b80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145B84u;
    // 0x145b84: 0xc0516fc  jal         func_145BF0
    ctx->pc = 0x145B84u;
    SET_GPR_U32(ctx, 31, 0x145B8Cu);
    ctx->pc = 0x145B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B84u;
    // 0x145b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BF0u, 0x145B84u, 0x145B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B8Cu;
label_145b8c:
    // 0x145b8c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x145B8Cu;
    {
        const bool branch_taken_0x145b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145b8c) {
            ctx->pc = 0x145B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145B8Cu;
            // 0x145b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145B94u;
    // 0x145b94: 0xc05170c  jal         func_145C30
    ctx->pc = 0x145B94u;
    SET_GPR_U32(ctx, 31, 0x145B9Cu);
    ctx->pc = 0x145B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B94u;
    // 0x145b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145C30u, 0x145B94u, 0x145B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B9Cu;
label_145b9c:
    // 0x145b9c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145B9Cu;
    {
        const bool branch_taken_0x145b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145b9c) {
            ctx->pc = 0x145BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145B9Cu;
            // 0x145ba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145BA4u;
    // 0x145ba4: 0xc05171e  jal         func_145C78
    ctx->pc = 0x145BA4u;
    SET_GPR_U32(ctx, 31, 0x145BACu);
    ctx->pc = 0x145BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145BA4u;
    // 0x145ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145C78u, 0x145BA4u, 0x145BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BACu;
label_145bac:
    // 0x145bac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x145BACu;
    {
        const bool branch_taken_0x145bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145bac) {
            ctx->pc = 0x145BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145BACu;
            // 0x145bb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145BC0u;
            goto label_145bc0;
        }
    }
    ctx->pc = 0x145BB4u;
    // 0x145bb4: 0xc051730  jal         func_145CC0
    ctx->pc = 0x145BB4u;
    SET_GPR_U32(ctx, 31, 0x145BBCu);
    ctx->pc = 0x145BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145BB4u;
    // 0x145bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145CC0u, 0x145BB4u, 0x145BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BBCu;
label_145bbc:
    // 0x145bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145bc0:
    // 0x145bc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x145BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BC4u;
        // 0x145bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BCCu;
    // 0x145bcc: 0x0  nop
    ctx->pc = 0x145bccu;
    // NOP
    ctx->pc = 0x145bd0u;
}
