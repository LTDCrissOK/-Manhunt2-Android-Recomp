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

// Function: sub_00371108
// Address: 0x371108 - 0x3711c8
void sub_00371108_0x371108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371108_0x371108");
#endif

    switch (ctx->pc) {
        case 0x37114cu: goto label_37114c;
        case 0x371154u: goto label_371154;
        case 0x37115cu: goto label_37115c;
        case 0x3711a4u: goto label_3711a4;
        case 0x3711b0u: goto label_3711b0;
        case 0x3711b8u: goto label_3711b8;
        default: break;
    }

    ctx->pc = 0x371108u;

    // 0x371108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37110c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x37110cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x371110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371114: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x371118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x371118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37111c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371120: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x371120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x371124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x371128: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x371128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37112c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x37112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x371130: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x371130u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x371134: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x371134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x371138: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x371138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37113c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x37113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x371140: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x371140u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x371144: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x371144u;
    SET_GPR_U32(ctx, 31, 0x37114Cu);
    ctx->pc = 0x371148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371144u;
    // 0x371148: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x371144u, 0x37114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37114Cu;
label_37114c:
    // 0x37114c: 0xc0dc34c  jal         func_370D30
    ctx->pc = 0x37114Cu;
    SET_GPR_U32(ctx, 31, 0x371154u);
    ctx->pc = 0x371150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37114Cu;
    // 0x371150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D30u, 0x37114Cu, 0x371154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371154u;
label_371154:
    // 0x371154: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x371154u;
    SET_GPR_U32(ctx, 31, 0x37115Cu);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x371154u, 0x37115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37115Cu;
label_37115c:
    // 0x37115c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x37115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x371160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x371160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x371164: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x371164u;
    {
        const bool branch_taken_0x371164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x371164) {
            ctx->pc = 0x3711B0u;
            goto label_3711b0;
        }
    }
    ctx->pc = 0x37116Cu;
    // 0x37116c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x37116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x371170: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x371170u;
    {
        const bool branch_taken_0x371170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x371170) {
            ctx->pc = 0x3711B0u;
            goto label_3711b0;
        }
    }
    ctx->pc = 0x371178u;
    // 0x371178: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x371178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x37117c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37117Cu;
    {
        const bool branch_taken_0x37117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x37117c) {
            ctx->pc = 0x3711B0u;
            goto label_3711b0;
        }
    }
    ctx->pc = 0x371184u;
    // 0x371184: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x371184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x371188: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x371188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x37118c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x37118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x371190: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x371190u;
    {
        const bool branch_taken_0x371190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371190u;
        // 0x371194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371190) {
            ctx->pc = 0x3711B0u;
            goto label_3711b0;
        }
    }
    ctx->pc = 0x371198u;
    // 0x371198: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x371198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x37119c: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x37119Cu;
    SET_GPR_U32(ctx, 31, 0x3711A4u);
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x37119Cu, 0x3711A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711A4u;
label_3711a4:
    // 0x3711a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3711a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711a8: 0xc0dcce2  jal         func_373388
    ctx->pc = 0x3711A8u;
    SET_GPR_U32(ctx, 31, 0x3711B0u);
    ctx->pc = 0x3711ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711A8u;
    // 0x3711ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373388u, 0x3711A8u, 0x3711B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711B0u;
label_3711b0:
    // 0x3711b0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3711B0u;
    SET_GPR_U32(ctx, 31, 0x3711B8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3711B0u, 0x3711B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711B8u;
label_3711b8:
    // 0x3711b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3711b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3711bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3711bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3711c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3711C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3711C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3711C0u;
        // 0x3711c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3711C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3711C8u;
}
