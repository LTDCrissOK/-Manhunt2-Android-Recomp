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

// Function: sub_00102BA8
// Address: 0x102ba8 - 0x102c38
void sub_00102BA8_0x102ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102BA8_0x102ba8");
#endif

    switch (ctx->pc) {
        case 0x102bd4u: goto label_102bd4;
        case 0x102be0u: goto label_102be0;
        case 0x102bf4u: goto label_102bf4;
        case 0x102c0cu: goto label_102c0c;
        default: break;
    }

    ctx->pc = 0x102ba8u;

    // 0x102ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102bb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x102bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x102bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102bbc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x102bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x102bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102bc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102bc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x102bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x102bcc: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x102BCCu;
    SET_GPR_U32(ctx, 31, 0x102BD4u);
    ctx->pc = 0x102BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BCCu;
    // 0x102bd0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x102BCCu, 0x102BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BD4u;
label_102bd4:
    // 0x102bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bd8: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x102BD8u;
    SET_GPR_U32(ctx, 31, 0x102BE0u);
    ctx->pc = 0x102BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BD8u;
    // 0x102bdc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x102BD8u, 0x102BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BE0u;
label_102be0:
    // 0x102be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102be4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x102be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102be8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x102be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102bec: 0xc041a6c  jal         func_1069B0
    ctx->pc = 0x102BECu;
    SET_GPR_U32(ctx, 31, 0x102BF4u);
    ctx->pc = 0x102BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BECu;
    // 0x102bf0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069B0u, 0x102BECu, 0x102BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102BF4u;
label_102bf4:
    // 0x102bf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102BF4u;
    {
        const bool branch_taken_0x102bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF4u;
        // 0x102bf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bf4) {
            ctx->pc = 0x102C10u;
            goto label_102c10;
        }
    }
    ctx->pc = 0x102BFCu;
    // 0x102bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x102c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c04: 0xc041a6c  jal         func_1069B0
    ctx->pc = 0x102C04u;
    SET_GPR_U32(ctx, 31, 0x102C0Cu);
    ctx->pc = 0x102C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C04u;
    // 0x102c08: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069B0u, 0x102C04u, 0x102C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C0Cu;
label_102c0c:
    // 0x102c0c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x102c0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_102c10:
    // 0x102c10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x102c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102c1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102c20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102c24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102c24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102c28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x102c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x102C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C2Cu;
        // 0x102c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102C34u;
    // 0x102c34: 0x0  nop
    ctx->pc = 0x102c34u;
    // NOP
    ctx->pc = 0x102c38u;
}
