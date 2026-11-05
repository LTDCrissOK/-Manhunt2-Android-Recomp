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

// Function: sub_0017F388
// Address: 0x17f388 - 0x17f3f8
void sub_0017F388_0x17f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F388_0x17f388");
#endif

    switch (ctx->pc) {
        case 0x17f3acu: goto label_17f3ac;
        case 0x17f3bcu: goto label_17f3bc;
        case 0x17f3d4u: goto label_17f3d4;
        case 0x17f3e4u: goto label_17f3e4;
        default: break;
    }

    ctx->pc = 0x17f388u;

    // 0x17f388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f398: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f39c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F39Cu;
    {
        const bool branch_taken_0x17f39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f39c) {
            ctx->pc = 0x17F3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F39Cu;
            // 0x17f3a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F3C4u;
            goto label_17f3c4;
        }
    }
    ctx->pc = 0x17F3A4u;
    // 0x17f3a4: 0xc05efaa  jal         func_17BEA8
    ctx->pc = 0x17F3A4u;
    SET_GPR_U32(ctx, 31, 0x17F3ACu);
    ctx->pc = 0x17BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEA8u, 0x17F3A4u, 0x17F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F3ACu;
label_17f3ac:
    // 0x17f3ac: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17f3b0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f3b4: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x17F3B4u;
    SET_GPR_U32(ctx, 31, 0x17F3BCu);
    ctx->pc = 0x17F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3B4u;
    // 0x17f3b8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x17F3B4u, 0x17F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F3BCu;
label_17f3bc:
    // 0x17f3bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17f3c0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17f3c4:
    // 0x17f3c4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F3C4u;
    {
        const bool branch_taken_0x17f3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f3c4) {
            ctx->pc = 0x17F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F3C4u;
            // 0x17f3c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F3ECu;
            goto label_17f3ec;
        }
    }
    ctx->pc = 0x17F3CCu;
    // 0x17f3cc: 0xc05fd5a  jal         func_17F568
    ctx->pc = 0x17F3CCu;
    SET_GPR_U32(ctx, 31, 0x17F3D4u);
    ctx->pc = 0x17F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F568u, 0x17F3CCu, 0x17F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F3D4u;
label_17f3d4:
    // 0x17f3d4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17f3d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f3dc: 0xc042140  jal         func_108500
    ctx->pc = 0x17F3DCu;
    SET_GPR_U32(ctx, 31, 0x17F3E4u);
    ctx->pc = 0x17F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3DCu;
    // 0x17f3e0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108500u, 0x17F3DCu, 0x17F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F3E4u;
label_17f3e4:
    // 0x17f3e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17f3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f3ec:
    // 0x17f3ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3F0u;
        // 0x17f3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F3F8u;
}
