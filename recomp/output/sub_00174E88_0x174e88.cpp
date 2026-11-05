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

// Function: sub_00174E88
// Address: 0x174e88 - 0x174ef8
void sub_00174E88_0x174e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174E88_0x174e88");
#endif

    switch (ctx->pc) {
        case 0x174eacu: goto label_174eac;
        case 0x174eb8u: goto label_174eb8;
        case 0x174ec8u: goto label_174ec8;
        case 0x174ed4u: goto label_174ed4;
        case 0x174ee4u: goto label_174ee4;
        default: break;
    }

    ctx->pc = 0x174e88u;

    // 0x174e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174e8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174e90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e98: 0x8e020268  lw          $v0, 0x268($s0)
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x174e9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x174E9Cu;
    {
        const bool branch_taken_0x174e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E9Cu;
        // 0x174ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e9c) {
            ctx->pc = 0x174EE8u;
            goto label_174ee8;
        }
    }
    ctx->pc = 0x174EA4u;
    // 0x174ea4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174EA4u;
    SET_GPR_U32(ctx, 31, 0x174EACu);
    ctx->pc = 0x174EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EA4u;
    // 0x174ea8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174EA4u, 0x174EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EACu;
label_174eac:
    // 0x174eac: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x174eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x174eb0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x174EB0u;
    SET_GPR_U32(ctx, 31, 0x174EB8u);
    ctx->pc = 0x174EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EB0u;
    // 0x174eb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x174EB0u, 0x174EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EB8u;
label_174eb8:
    // 0x174eb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174EB8u;
    {
        const bool branch_taken_0x174eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EB8u;
        // 0x174ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174eb8) {
            ctx->pc = 0x174EDCu;
            goto label_174edc;
        }
    }
    ctx->pc = 0x174EC0u;
    // 0x174ec0: 0xc05d3a0  jal         func_174E80
    ctx->pc = 0x174EC0u;
    SET_GPR_U32(ctx, 31, 0x174EC8u);
    ctx->pc = 0x174EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EC0u;
    // 0x174ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E80u, 0x174EC0u, 0x174EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EC8u;
label_174ec8:
    // 0x174ec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ecc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174ECCu;
    SET_GPR_U32(ctx, 31, 0x174ED4u);
    ctx->pc = 0x174ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ECCu;
    // 0x174ed0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174ECCu, 0x174ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ED4u;
label_174ed4:
    // 0x174ed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x174ED4u;
    {
        const bool branch_taken_0x174ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ED4u;
        // 0x174ed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed4) {
            ctx->pc = 0x174EE8u;
            goto label_174ee8;
        }
    }
    ctx->pc = 0x174EDCu;
label_174edc:
    // 0x174edc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174EDCu;
    SET_GPR_U32(ctx, 31, 0x174EE4u);
    ctx->pc = 0x174EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EDCu;
    // 0x174ee0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174EDCu, 0x174EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EE4u;
label_174ee4:
    // 0x174ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174ee8:
    // 0x174ee8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174eec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x174EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EF0u;
        // 0x174ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174EF8u;
}
