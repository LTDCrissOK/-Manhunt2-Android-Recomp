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

// Function: sub_00115F78
// Address: 0x115f78 - 0x115ff0
void sub_00115F78_0x115f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115F78_0x115f78");
#endif

    switch (ctx->pc) {
        case 0x115f78u: goto label_115f78;
        case 0x115f7cu: goto label_115f7c;
        case 0x115f80u: goto label_115f80;
        case 0x115f84u: goto label_115f84;
        case 0x115f88u: goto label_115f88;
        case 0x115f8cu: goto label_115f8c;
        case 0x115f90u: goto label_115f90;
        case 0x115f94u: goto label_115f94;
        case 0x115f98u: goto label_115f98;
        case 0x115f9cu: goto label_115f9c;
        case 0x115fa0u: goto label_115fa0;
        case 0x115fa4u: goto label_115fa4;
        case 0x115fa8u: goto label_115fa8;
        case 0x115facu: goto label_115fac;
        case 0x115fb0u: goto label_115fb0;
        case 0x115fb4u: goto label_115fb4;
        case 0x115fb8u: goto label_115fb8;
        case 0x115fbcu: goto label_115fbc;
        case 0x115fc0u: goto label_115fc0;
        case 0x115fc4u: goto label_115fc4;
        case 0x115fc8u: goto label_115fc8;
        case 0x115fccu: goto label_115fcc;
        case 0x115fd0u: goto label_115fd0;
        case 0x115fd4u: goto label_115fd4;
        case 0x115fd8u: goto label_115fd8;
        case 0x115fdcu: goto label_115fdc;
        case 0x115fe0u: goto label_115fe0;
        case 0x115fe4u: goto label_115fe4;
        case 0x115fe8u: goto label_115fe8;
        case 0x115fecu: goto label_115fec;
        default: break;
    }

    ctx->pc = 0x115f78u;

label_115f78:
    // 0x115f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_115f7c:
    // 0x115f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_115f80:
    // 0x115f80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_115f84:
    // 0x115f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_115f88:
    // 0x115f88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x115f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_115f8c:
    // 0x115f8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x115f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_115f90:
    // 0x115f90: 0x40f809  jalr        $v0
label_115f94:
    if (ctx->pc == 0x115F94u) {
        ctx->pc = 0x115F98u;
        goto label_115f98;
    }
    ctx->pc = 0x115F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x115F98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F90u, 0x115F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115F98u;
label_115f98:
    // 0x115f98: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_115f9c:
    if (ctx->pc == 0x115F9Cu) {
        ctx->pc = 0x115F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F98u;
        // 0x115f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FA0u;
        goto label_115fa0;
    }
    ctx->pc = 0x115F98u;
    {
        const bool branch_taken_0x115f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115f98) {
            ctx->pc = 0x115F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115F98u;
            // 0x115f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115FE0u;
            goto label_115fe0;
        }
    }
    ctx->pc = 0x115FA0u;
label_115fa0:
    // 0x115fa0: 0xc095368  jal         func_254DA0
label_115fa4:
    if (ctx->pc == 0x115FA4u) {
        ctx->pc = 0x115FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA0u;
        // 0x115fa4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FA8u;
        goto label_115fa8;
    }
    ctx->pc = 0x115FA0u;
    SET_GPR_U32(ctx, 31, 0x115FA8u);
    ctx->pc = 0x115FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FA0u;
    // 0x115fa4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x115FA0u, 0x115FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FA8u;
label_115fa8:
    // 0x115fa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x115fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115fac:
    // 0x115fac: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_115fb0:
    if (ctx->pc == 0x115FB0u) {
        ctx->pc = 0x115FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FACu;
        // 0x115fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FB4u;
        goto label_115fb4;
    }
    ctx->pc = 0x115FACu;
    {
        const bool branch_taken_0x115fac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FACu;
        // 0x115fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fac) {
            ctx->pc = 0x115FE0u;
            goto label_115fe0;
        }
    }
    ctx->pc = 0x115FB4u;
label_115fb4:
    // 0x115fb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x115fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_115fb8:
    // 0x115fb8: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x115fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_115fbc:
    // 0x115fbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x115fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_115fc0:
    // 0x115fc0: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_115fc4:
    // 0x115fc4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_115fc8:
    if (ctx->pc == 0x115FC8u) {
        ctx->pc = 0x115FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FC4u;
        // 0x115fc8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FCCu;
        goto label_115fcc;
    }
    ctx->pc = 0x115FC4u;
    {
        const bool branch_taken_0x115fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FC4u;
        // 0x115fc8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fc4) {
            ctx->pc = 0x115FDCu;
            goto label_115fdc;
        }
    }
    ctx->pc = 0x115FCCu;
label_115fcc:
    // 0x115fcc: 0xc040dae  jal         func_1036B8
label_115fd0:
    if (ctx->pc == 0x115FD0u) {
        ctx->pc = 0x115FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FCCu;
        // 0x115fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FD4u;
        goto label_115fd4;
    }
    ctx->pc = 0x115FCCu;
    SET_GPR_U32(ctx, 31, 0x115FD4u);
    ctx->pc = 0x115FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FCCu;
    // 0x115fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1036B8u, 0x115FCCu, 0x115FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FD4u;
label_115fd4:
    // 0x115fd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_115fd8:
    if (ctx->pc == 0x115FD8u) {
        ctx->pc = 0x115FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FD4u;
        // 0x115fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FDCu;
        goto label_115fdc;
    }
    ctx->pc = 0x115FD4u;
    {
        const bool branch_taken_0x115fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FD4u;
        // 0x115fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fd4) {
            ctx->pc = 0x115FE4u;
            goto label_115fe4;
        }
    }
    ctx->pc = 0x115FDCu;
label_115fdc:
    // 0x115fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115fe0:
    // 0x115fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115fe4:
    // 0x115fe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_115fe8:
    // 0x115fe8: 0x3e00008  jr          $ra
label_115fec:
    if (ctx->pc == 0x115FECu) {
        ctx->pc = 0x115FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FE8u;
        // 0x115fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115FF0u;
        goto label_fallthrough_0x115fe8;
    }
    ctx->pc = 0x115FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FE8u;
        // 0x115fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x115fe8:
    ctx->pc = 0x115FF0u;
}
