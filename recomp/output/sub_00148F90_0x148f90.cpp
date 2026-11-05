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

// Function: sub_00148F90
// Address: 0x148f90 - 0x149000
void sub_00148F90_0x148f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148F90_0x148f90");
#endif

    switch (ctx->pc) {
        case 0x148fb4u: goto label_148fb4;
        case 0x148fc8u: goto label_148fc8;
        case 0x148fd8u: goto label_148fd8;
        case 0x148fecu: goto label_148fec;
        default: break;
    }

    ctx->pc = 0x148f90u;

    // 0x148f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148f94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x148f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x148f98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x148f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x148f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fa0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x148fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148fa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x148fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x148fa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x148fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x148fac: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x148FACu;
    SET_GPR_U32(ctx, 31, 0x148FB4u);
    ctx->pc = 0x148FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FACu;
    // 0x148fb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x148FACu, 0x148FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FB4u;
label_148fb4:
    // 0x148fb4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x148fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fc0: 0xc052660  jal         func_149980
    ctx->pc = 0x148FC0u;
    SET_GPR_U32(ctx, 31, 0x148FC8u);
    ctx->pc = 0x148FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FC0u;
    // 0x148fc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149980u, 0x148FC0u, 0x148FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FC8u;
label_148fc8:
    // 0x148fc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148FC8u;
    {
        const bool branch_taken_0x148fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FC8u;
        // 0x148fcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fc8) {
            ctx->pc = 0x148FE4u;
            goto label_148fe4;
        }
    }
    ctx->pc = 0x148FD0u;
    // 0x148fd0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x148FD0u;
    SET_GPR_U32(ctx, 31, 0x148FD8u);
    ctx->pc = 0x148FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FD0u;
    // 0x148fd4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x148FD0u, 0x148FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FD8u;
label_148fd8:
    // 0x148fd8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x148fdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148FDCu;
    {
        const bool branch_taken_0x148fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FDCu;
        // 0x148fe0: 0x2032018  mult        $a0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148fdc) {
            ctx->pc = 0x148FF4u;
            goto label_148ff4;
        }
    }
    ctx->pc = 0x148FE4u;
label_148fe4:
    // 0x148fe4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x148FE4u;
    SET_GPR_U32(ctx, 31, 0x148FECu);
    ctx->pc = 0x148FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FE4u;
    // 0x148fe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x148FE4u, 0x148FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FECu;
label_148fec:
    // 0x148fec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x148fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x148ff0: 0x2432018  mult        $a0, $s2, $v1
    ctx->pc = 0x148ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_148ff4:
    // 0x148ff4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x148ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x148ff8: 0xac6204e8  sw          $v0, 0x4E8($v1)
    ctx->pc = 0x148ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1256), GPR_U32(ctx, 2));
    // 0x148ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149000u;
}
