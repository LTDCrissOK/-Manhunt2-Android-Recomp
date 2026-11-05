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

// Function: sub_0010ABC0
// Address: 0x10abc0 - 0x10ac60
void sub_0010ABC0_0x10abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ABC0_0x10abc0");
#endif

    switch (ctx->pc) {
        case 0x10abe8u: goto label_10abe8;
        case 0x10ac10u: goto label_10ac10;
        case 0x10ac34u: goto label_10ac34;
        case 0x10ac40u: goto label_10ac40;
        default: break;
    }

    ctx->pc = 0x10abc0u;

    // 0x10abc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10abc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10abc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10abc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10abcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10abccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10abd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10abd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10abd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10abdc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abe0: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10ABE0u;
    SET_GPR_U32(ctx, 31, 0x10ABE8u);
    ctx->pc = 0x10ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABE0u;
    // 0x10abe4: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10ABE0u, 0x10ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABE8u;
label_10abe8:
    // 0x10abe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10abec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10abf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10abf4: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10abf8: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x10abfc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10ABFCu;
    {
        const bool branch_taken_0x10abfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABFCu;
        // 0x10ac00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abfc) {
            ctx->pc = 0x10AC44u;
            goto label_10ac44;
        }
    }
    ctx->pc = 0x10AC04u;
    // 0x10ac04: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x10ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x10ac08: 0xc04338a  jal         func_10CE28
    ctx->pc = 0x10AC08u;
    SET_GPR_U32(ctx, 31, 0x10AC10u);
    ctx->pc = 0x10AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC08u;
    // 0x10ac0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE28u, 0x10AC08u, 0x10AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC10u;
label_10ac10:
    // 0x10ac10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ac14: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10ac18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ac1c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10ac20: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x10ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x10ac24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AC24u;
    {
        const bool branch_taken_0x10ac24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ac24) {
            ctx->pc = 0x10AC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AC24u;
            // 0x10ac28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AC44u;
            goto label_10ac44;
        }
    }
    ctx->pc = 0x10AC2Cu;
    // 0x10ac2c: 0xc043920  jal         func_10E480
    ctx->pc = 0x10AC2Cu;
    SET_GPR_U32(ctx, 31, 0x10AC34u);
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x10AC2Cu, 0x10AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC34u;
label_10ac34:
    // 0x10ac34: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x10ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x10ac38: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x10AC38u;
    SET_GPR_U32(ctx, 31, 0x10AC40u);
    ctx->pc = 0x10AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC38u;
    // 0x10ac3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x10AC38u, 0x10AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC40u;
label_10ac40:
    // 0x10ac40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ac44:
    // 0x10ac44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ac44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ac48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ac4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ac4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10ac50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC54u;
        // 0x10ac58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC5Cu;
    // 0x10ac5c: 0x0  nop
    ctx->pc = 0x10ac5cu;
    // NOP
    ctx->pc = 0x10ac60u;
}
