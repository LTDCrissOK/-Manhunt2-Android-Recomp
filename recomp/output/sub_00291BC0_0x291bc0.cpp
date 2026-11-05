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

// Function: sub_00291BC0
// Address: 0x291bc0 - 0x291c58
void sub_00291BC0_0x291bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291BC0_0x291bc0");
#endif

    switch (ctx->pc) {
        case 0x291bf8u: goto label_291bf8;
        case 0x291c10u: goto label_291c10;
        case 0x291c20u: goto label_291c20;
        case 0x291c34u: goto label_291c34;
        default: break;
    }

    ctx->pc = 0x291bc0u;

    // 0x291bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291bc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x291bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x291bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x291bd8: 0x2450c690  addiu       $s0, $v0, -0x3970
    ctx->pc = 0x291bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x291bdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x291be0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x291be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x291be4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x291be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x291be8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x291be8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x291bec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x291becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x291bf0: 0x3c140057  lui         $s4, 0x57
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)87 << 16));
    // 0x291bf4: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x291bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
label_291bf8:
    // 0x291bf8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291bfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291BFCu;
    {
        const bool branch_taken_0x291bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BFCu;
        // 0x291c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bfc) {
            ctx->pc = 0x291C20u;
            goto label_291c20;
        }
    }
    ctx->pc = 0x291C04u;
    // 0x291c04: 0x26854ed8  addiu       $a1, $s4, 0x4ED8
    ctx->pc = 0x291c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20184));
    // 0x291c08: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x291C08u;
    SET_GPR_U32(ctx, 31, 0x291C10u);
    ctx->pc = 0x291C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C08u;
    // 0x291c0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x291C08u, 0x291C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C10u;
label_291c10:
    // 0x291c10: 0x8e66a898  lw          $a2, -0x5768($s3)
    ctx->pc = 0x291c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944920)));
    // 0x291c14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c18: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x291C18u;
    SET_GPR_U32(ctx, 31, 0x291C20u);
    ctx->pc = 0x291C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C18u;
    // 0x291c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x291C18u, 0x291C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C20u;
label_291c20:
    // 0x291c20: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x291c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x291c24: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x291C24u;
    {
        const bool branch_taken_0x291c24 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x291C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C24u;
        // 0x291c28: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c24) {
            ctx->pc = 0x291BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291bf8;
        }
    }
    ctx->pc = 0x291C2Cu;
    // 0x291c2c: 0xc0a44e0  jal         func_291380
    ctx->pc = 0x291C2Cu;
    SET_GPR_U32(ctx, 31, 0x291C34u);
    ctx->pc = 0x291C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C2Cu;
    // 0x291c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291380u, 0x291C2Cu, 0x291C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C34u;
label_291c34:
    // 0x291c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291c3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x291c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x291c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291c44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x291c44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291c48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x291c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x291c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x291C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C4Cu;
        // 0x291c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291C54u;
    // 0x291c54: 0x0  nop
    ctx->pc = 0x291c54u;
    // NOP
    ctx->pc = 0x291c58u;
}
