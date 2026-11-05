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

// Function: sub_00161490
// Address: 0x161490 - 0x161528
void sub_00161490_0x161490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161490_0x161490");
#endif

    switch (ctx->pc) {
        case 0x1614a4u: goto label_1614a4;
        case 0x1614b8u: goto label_1614b8;
        case 0x1614c4u: goto label_1614c4;
        case 0x1614ccu: goto label_1614cc;
        case 0x1614f8u: goto label_1614f8;
        case 0x161514u: goto label_161514;
        default: break;
    }

    ctx->pc = 0x161490u;

    // 0x161490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x161498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16149c: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x16149Cu;
    SET_GPR_U32(ctx, 31, 0x1614A4u);
    ctx->pc = 0x1614A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16149Cu;
    // 0x1614a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x16149Cu, 0x1614A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614A4u;
label_1614a4:
    // 0x1614a4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1614a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1614a8: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x1614a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x1614ac: 0x24630d38  addiu       $v1, $v1, 0xD38
    ctx->pc = 0x1614acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3384));
    // 0x1614b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1614B0u;
    SET_GPR_U32(ctx, 31, 0x1614B8u);
    ctx->pc = 0x1614B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614B0u;
    // 0x1614b4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1614B0u, 0x1614B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614B8u;
label_1614b8:
    // 0x1614b8: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1614b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x1614bc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1614BCu;
    SET_GPR_U32(ctx, 31, 0x1614C4u);
    ctx->pc = 0x1614C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614BCu;
    // 0x1614c0: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1614BCu, 0x1614C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614C4u;
label_1614c4:
    // 0x1614c4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1614C4u;
    SET_GPR_U32(ctx, 31, 0x1614CCu);
    ctx->pc = 0x1614C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614C4u;
    // 0x1614c8: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1614C4u, 0x1614CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614CCu;
label_1614cc:
    // 0x1614cc: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x1614ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x1614d0: 0x26040378  addiu       $a0, $s0, 0x378
    ctx->pc = 0x1614d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    // 0x1614d4: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x1614d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x1614d8: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x1614d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x1614dc: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x1614dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x1614e0: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x1614e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x1614e4: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1614e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x1614e8: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1614e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x1614ec: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x1614ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x1614f0: 0xc045e6e  jal         func_1179B8
    ctx->pc = 0x1614F0u;
    SET_GPR_U32(ctx, 31, 0x1614F8u);
    ctx->pc = 0x1614F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614F0u;
    // 0x1614f4: 0xae000374  sw          $zero, 0x374($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179B8u, 0x1614F0u, 0x1614F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1614F8u;
label_1614f8:
    // 0x1614f8: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x1614f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x1614fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1614fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161500: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x161500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x161504: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x161504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x161508: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x161508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x16150c: 0xc058668  jal         func_1619A0
    ctx->pc = 0x16150Cu;
    SET_GPR_U32(ctx, 31, 0x161514u);
    ctx->pc = 0x161510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16150Cu;
    // 0x161510: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1619A0u, 0x16150Cu, 0x161514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161514u;
label_161514:
    // 0x161514: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161518: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16151c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16151cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161520: 0x3e00008  jr          $ra
    ctx->pc = 0x161520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161520u;
        // 0x161524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161528u;
}
