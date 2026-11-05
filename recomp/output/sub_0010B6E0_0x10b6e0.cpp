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

// Function: sub_0010B6E0
// Address: 0x10b6e0 - 0x10b758
void sub_0010B6E0_0x10b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B6E0_0x10b6e0");
#endif

    switch (ctx->pc) {
        case 0x10b704u: goto label_10b704;
        case 0x10b730u: goto label_10b730;
        default: break;
    }

    ctx->pc = 0x10b6e0u;

    // 0x10b6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b6e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b6f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b6fc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B6FCu;
    SET_GPR_U32(ctx, 31, 0x10B704u);
    ctx->pc = 0x10B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6FCu;
    // 0x10b700: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B6FCu, 0x10B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B704u;
label_10b704:
    // 0x10b704: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b708: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b70c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B70Cu;
    {
        const bool branch_taken_0x10b70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B70Cu;
        // 0x10b710: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b70c) {
            ctx->pc = 0x10B738u;
            goto label_10b738;
        }
    }
    ctx->pc = 0x10B714u;
    // 0x10b714: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b718: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b71c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b720: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B720u;
    {
        const bool branch_taken_0x10b720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B720u;
        // 0x10b724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b720) {
            ctx->pc = 0x10B738u;
            goto label_10b738;
        }
    }
    ctx->pc = 0x10B728u;
    // 0x10b728: 0xc043e5e  jal         func_10F978
    ctx->pc = 0x10B728u;
    SET_GPR_U32(ctx, 31, 0x10B730u);
    ctx->pc = 0x10B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B728u;
    // 0x10b72c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F978u, 0x10B728u, 0x10B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B730u;
label_10b730:
    // 0x10b730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B730u;
    {
        const bool branch_taken_0x10b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B730u;
        // 0x10b734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b730) {
            ctx->pc = 0x10B73Cu;
            goto label_10b73c;
        }
    }
    ctx->pc = 0x10B738u;
label_10b738:
    // 0x10b738: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b73c:
    // 0x10b73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b74c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B74Cu;
        // 0x10b750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B754u;
    // 0x10b754: 0x0  nop
    ctx->pc = 0x10b754u;
    // NOP
    ctx->pc = 0x10b758u;
}
