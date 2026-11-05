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

// Function: sub_0016C720
// Address: 0x16c720 - 0x16c7a0
void sub_0016C720_0x16c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C720_0x16c720");
#endif

    switch (ctx->pc) {
        case 0x16c73cu: goto label_16c73c;
        case 0x16c75cu: goto label_16c75c;
        case 0x16c768u: goto label_16c768;
        case 0x16c770u: goto label_16c770;
        case 0x16c77cu: goto label_16c77c;
        case 0x16c788u: goto label_16c788;
        default: break;
    }

    ctx->pc = 0x16c720u;

    // 0x16c720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c72c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c734: 0xc05a618  jal         func_169860
    ctx->pc = 0x16C734u;
    SET_GPR_U32(ctx, 31, 0x16C73Cu);
    ctx->pc = 0x16C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C734u;
    // 0x16c738: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16C734u, 0x16C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C73Cu;
label_16c73c:
    // 0x16c73c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16c740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c744: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16c744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16c748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c74c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c750: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x16c750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x16c754: 0xc043a06  jal         func_10E818
    ctx->pc = 0x16C754u;
    SET_GPR_U32(ctx, 31, 0x16C75Cu);
    ctx->pc = 0x16C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C754u;
    // 0x16c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E818u, 0x16C754u, 0x16C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C75Cu;
label_16c75c:
    // 0x16c75c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c760: 0xc043a20  jal         func_10E880
    ctx->pc = 0x16C760u;
    SET_GPR_U32(ctx, 31, 0x16C768u);
    ctx->pc = 0x16C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C760u;
    // 0x16c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E880u, 0x16C760u, 0x16C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C768u;
label_16c768:
    // 0x16c768: 0xc05a63e  jal         func_1698F8
    ctx->pc = 0x16C768u;
    SET_GPR_U32(ctx, 31, 0x16C770u);
    ctx->pc = 0x16C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C768u;
    // 0x16c76c: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698F8u, 0x16C768u, 0x16C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C770u;
label_16c770:
    // 0x16c770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c774: 0xc043c74  jal         func_10F1D0
    ctx->pc = 0x16C774u;
    SET_GPR_U32(ctx, 31, 0x16C77Cu);
    ctx->pc = 0x16C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C774u;
    // 0x16c778: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1D0u, 0x16C774u, 0x16C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C77Cu;
label_16c77c:
    // 0x16c77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c780: 0xc043a3a  jal         func_10E8E8
    ctx->pc = 0x16C780u;
    SET_GPR_U32(ctx, 31, 0x16C788u);
    ctx->pc = 0x16C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C780u;
    // 0x16c784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8E8u, 0x16C780u, 0x16C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C788u;
label_16c788:
    // 0x16c788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c78c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c794: 0x3e00008  jr          $ra
    ctx->pc = 0x16C794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C79Cu;
    // 0x16c79c: 0x0  nop
    ctx->pc = 0x16c79cu;
    // NOP
    ctx->pc = 0x16c7a0u;
}
