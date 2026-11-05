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

// Function: sub_0010BFB8
// Address: 0x10bfb8 - 0x10c028
void sub_0010BFB8_0x10bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFB8_0x10bfb8");
#endif

    switch (ctx->pc) {
        case 0x10bfd4u: goto label_10bfd4;
        default: break;
    }

    ctx->pc = 0x10bfb8u;

    // 0x10bfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bfc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10bfc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bfc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bfcc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10BFCCu;
    SET_GPR_U32(ctx, 31, 0x10BFD4u);
    ctx->pc = 0x10BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFCCu;
    // 0x10bfd0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10BFCCu, 0x10BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFD4u;
label_10bfd4:
    // 0x10bfd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10bfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfd8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10bfdc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BFDCu;
    {
        const bool branch_taken_0x10bfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFDCu;
        // 0x10bfe0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bfdc) {
            ctx->pc = 0x10C004u;
            goto label_10c004;
        }
    }
    ctx->pc = 0x10BFE4u;
    // 0x10bfe4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10bfe8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10bfec: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10bff0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BFF0u;
    {
        const bool branch_taken_0x10bff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bff0) {
            ctx->pc = 0x10BFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BFF0u;
            // 0x10bff4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C008u;
            goto label_10c008;
        }
    }
    ctx->pc = 0x10BFF8u;
    // 0x10bff8: 0xac5100dc  sw          $s1, 0xDC($v0)
    ctx->pc = 0x10bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 17));
    // 0x10bffc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BFFCu;
    {
        const bool branch_taken_0x10bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFFCu;
        // 0x10c000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bffc) {
            ctx->pc = 0x10C008u;
            goto label_10c008;
        }
    }
    ctx->pc = 0x10C004u;
label_10c004:
    // 0x10c004: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c008:
    // 0x10c008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c00c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c00cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c014: 0x3e00008  jr          $ra
    ctx->pc = 0x10C014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C014u;
        // 0x10c018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C01Cu;
    // 0x10c01c: 0x0  nop
    ctx->pc = 0x10c01cu;
    // NOP
    // 0x10c020: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10c024: 0x0  nop
    ctx->pc = 0x10c024u;
    // NOP
    ctx->pc = 0x10c028u;
}
