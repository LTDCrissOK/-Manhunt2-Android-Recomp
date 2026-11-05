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

// Function: sub_00298F98
// Address: 0x298f98 - 0x299000
void sub_00298F98_0x298f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F98_0x298f98");
#endif

    switch (ctx->pc) {
        case 0x298facu: goto label_298fac;
        case 0x298fbcu: goto label_298fbc;
        case 0x298fccu: goto label_298fcc;
        case 0x298fdcu: goto label_298fdc;
        case 0x298fe8u: goto label_298fe8;
        case 0x298ff0u: goto label_298ff0;
        default: break;
    }

    ctx->pc = 0x298f98u;

    // 0x298f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298fa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x298fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x298fa4: 0xc0a1f3e  jal         func_287CF8
    ctx->pc = 0x298FA4u;
    SET_GPR_U32(ctx, 31, 0x298FACu);
    ctx->pc = 0x298FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FA4u;
    // 0x298fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CF8u, 0x298FA4u, 0x298FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FACu;
label_298fac:
    // 0x298fac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298FACu;
    {
        const bool branch_taken_0x298fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298fac) {
            ctx->pc = 0x298FC4u;
            goto label_298fc4;
        }
    }
    ctx->pc = 0x298FB4u;
    // 0x298fb4: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x298FB4u;
    SET_GPR_U32(ctx, 31, 0x298FBCu);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x298FB4u, 0x298FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FBCu;
label_298fbc:
    // 0x298fbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298FBCu;
    {
        const bool branch_taken_0x298fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298fbc) {
            ctx->pc = 0x298FE8u;
            goto label_298fe8;
        }
    }
    ctx->pc = 0x298FC4u;
label_298fc4:
    // 0x298fc4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298FC4u;
    SET_GPR_U32(ctx, 31, 0x298FCCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298FC4u, 0x298FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FCCu;
label_298fcc:
    // 0x298fcc: 0x92060078  lbu         $a2, 0x78($s0)
    ctx->pc = 0x298fccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x298fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fd4: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x298FD4u;
    SET_GPR_U32(ctx, 31, 0x298FDCu);
    ctx->pc = 0x298FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FD4u;
    // 0x298fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x298FD4u, 0x298FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FDCu;
label_298fdc:
    // 0x298fdc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x298fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x298fe0: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x298FE0u;
    SET_GPR_U32(ctx, 31, 0x298FE8u);
    ctx->pc = 0x298FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FE0u;
    // 0x298fe4: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x298FE0u, 0x298FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FE8u;
label_298fe8:
    // 0x298fe8: 0xc0a6400  jal         func_299000
    ctx->pc = 0x298FE8u;
    SET_GPR_U32(ctx, 31, 0x298FF0u);
    ctx->pc = 0x298FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FE8u;
    // 0x298fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299000u, 0x298FE8u, 0x298FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FF0u;
label_298ff0:
    // 0x298ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x298ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x298FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FF8u;
        // 0x298ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299000u;
}
