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

// Function: sub_00269B48
// Address: 0x269b48 - 0x269b90
void sub_00269B48_0x269b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B48_0x269b48");
#endif

    switch (ctx->pc) {
        case 0x269b64u: goto label_269b64;
        case 0x269b7cu: goto label_269b7c;
        default: break;
    }

    ctx->pc = 0x269b48u;

    // 0x269b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x269b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x269b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x269b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269b50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x269b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b54: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269B54u;
    {
        const bool branch_taken_0x269b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B54u;
        // 0x269b58: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b54) {
            ctx->pc = 0x269B7Cu;
            goto label_269b7c;
        }
    }
    ctx->pc = 0x269B5Cu;
    // 0x269b5c: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x269B5Cu;
    SET_GPR_U32(ctx, 31, 0x269B64u);
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x269B5Cu, 0x269B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B64u;
label_269b64:
    // 0x269b64: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x269b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x269b68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x269b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x269b6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x269B6Cu;
    {
        const bool branch_taken_0x269b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269b6c) {
            ctx->pc = 0x269B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269B6Cu;
            // 0x269b70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269B80u;
            goto label_269b80;
        }
    }
    ctx->pc = 0x269B74u;
    // 0x269b74: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x269B74u;
    SET_GPR_U32(ctx, 31, 0x269B7Cu);
    ctx->pc = 0x269B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269B74u;
    // 0x269b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x269B74u, 0x269B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B7Cu;
label_269b7c:
    // 0x269b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x269b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269b80:
    // 0x269b80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x269b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x269b84: 0x3e00008  jr          $ra
    ctx->pc = 0x269B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B84u;
        // 0x269b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B8Cu;
    // 0x269b8c: 0x0  nop
    ctx->pc = 0x269b8cu;
    // NOP
    ctx->pc = 0x269b90u;
}
