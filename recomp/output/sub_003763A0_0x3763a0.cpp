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

// Function: sub_003763A0
// Address: 0x3763a0 - 0x376440
void sub_003763A0_0x3763a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003763A0_0x3763a0");
#endif

    switch (ctx->pc) {
        case 0x3763b8u: goto label_3763b8;
        case 0x3763c0u: goto label_3763c0;
        case 0x3763f4u: goto label_3763f4;
        case 0x376420u: goto label_376420;
        default: break;
    }

    ctx->pc = 0x3763a0u;

    // 0x3763a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3763a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3763a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3763a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3763a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3763a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3763ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3763acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3763b0: 0xc0dda38  jal         func_3768E0
    ctx->pc = 0x3763B0u;
    SET_GPR_U32(ctx, 31, 0x3763B8u);
    ctx->pc = 0x3763B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763B0u;
    // 0x3763b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3768E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3768E0u, 0x3763B0u, 0x3763B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763B8u;
label_3763b8:
    // 0x3763b8: 0xc0dd8a2  jal         func_376288
    ctx->pc = 0x3763B8u;
    SET_GPR_U32(ctx, 31, 0x3763C0u);
    ctx->pc = 0x376288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376288u, 0x3763B8u, 0x3763C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763C0u;
label_3763c0:
    // 0x3763c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3763c4: 0x8c43cd74  lw          $v1, -0x328C($v0)
    ctx->pc = 0x3763c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD74u));
    // 0x3763c8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3763C8u;
    {
        const bool branch_taken_0x3763c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3763CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763C8u;
        // 0x3763cc: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3763c8) {
            ctx->pc = 0x376420u;
            goto label_376420;
        }
    }
    ctx->pc = 0x3763D0u;
    // 0x3763d0: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x3763d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3763d4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3763d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3763d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3763d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3763dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3763dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3763e0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3763e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3763e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3763E4u;
    {
        const bool branch_taken_0x3763e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3763E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763E4u;
        // 0x3763e8: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3763e4) {
            ctx->pc = 0x3763F8u;
            goto label_3763f8;
        }
    }
    ctx->pc = 0x3763ECu;
    // 0x3763ec: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3763ECu;
    SET_GPR_U32(ctx, 31, 0x3763F4u);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3763ECu, 0x3763F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763F4u;
label_3763f4:
    // 0x3763f4: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x3763f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_3763f8:
    // 0x3763f8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3763f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3763fc: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x3763fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x376400: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x376400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x376404: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x376404u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x376408: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x376408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x37640c: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x37640cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376410: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x376410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x376414: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x376414u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x376418: 0xc0ddcce  jal         func_377338
    ctx->pc = 0x376418u;
    SET_GPR_U32(ctx, 31, 0x376420u);
    ctx->pc = 0x37641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376418u;
    // 0x37641c: 0xae02f910  sw          $v0, -0x6F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377338u, 0x376418u, 0x376420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376420u;
label_376420:
    // 0x376420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x376424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37642c: 0x3e00008  jr          $ra
    ctx->pc = 0x37642Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37642Cu;
        // 0x376430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37642Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376434u;
    // 0x376434: 0x0  nop
    ctx->pc = 0x376434u;
    // NOP
    // 0x376438: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x376438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x37643c: 0x0  nop
    ctx->pc = 0x37643cu;
    // NOP
    ctx->pc = 0x376440u;
}
