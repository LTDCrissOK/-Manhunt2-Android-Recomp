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

// Function: sub_00137F80
// Address: 0x137f80 - 0x137fe0
void sub_00137F80_0x137f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137F80_0x137f80");
#endif

    switch (ctx->pc) {
        case 0x137fa0u: goto label_137fa0;
        case 0x137fb4u: goto label_137fb4;
        case 0x137fccu: goto label_137fcc;
        default: break;
    }

    ctx->pc = 0x137f80u;

    // 0x137f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137f8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x137f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137f94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x137f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f98: 0xc043a6c  jal         func_10E9B0
    ctx->pc = 0x137F98u;
    SET_GPR_U32(ctx, 31, 0x137FA0u);
    ctx->pc = 0x137F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F98u;
    // 0x137f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9B0u, 0x137F98u, 0x137FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FA0u;
label_137fa0:
    // 0x137fa0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137FA0u;
    {
        const bool branch_taken_0x137fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FA0u;
        // 0x137fa4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fa0) {
            ctx->pc = 0x137FCCu;
            goto label_137fcc;
        }
    }
    ctx->pc = 0x137FA8u;
    // 0x137fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fac: 0xc047866  jal         func_11E198
    ctx->pc = 0x137FACu;
    SET_GPR_U32(ctx, 31, 0x137FB4u);
    ctx->pc = 0x137FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FACu;
    // 0x137fb0: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x137FACu, 0x137FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FB4u;
label_137fb4:
    // 0x137fb4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x137fb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x137fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fbc: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x137fc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x137fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fc4: 0xc04668a  jal         func_119A28
    ctx->pc = 0x137FC4u;
    SET_GPR_U32(ctx, 31, 0x137FCCu);
    ctx->pc = 0x137FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FC4u;
    // 0x137fc8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x137FC4u, 0x137FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FCCu;
label_137fcc:
    // 0x137fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x137fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x137FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FD8u;
        // 0x137fdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137FE0u;
}
