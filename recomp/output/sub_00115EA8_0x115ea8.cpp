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

// Function: sub_00115EA8
// Address: 0x115ea8 - 0x115f00
void sub_00115EA8_0x115ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115EA8_0x115ea8");
#endif

    switch (ctx->pc) {
        case 0x115ea8u: goto label_115ea8;
        case 0x115eacu: goto label_115eac;
        case 0x115eb0u: goto label_115eb0;
        case 0x115eb4u: goto label_115eb4;
        case 0x115eb8u: goto label_115eb8;
        case 0x115ebcu: goto label_115ebc;
        case 0x115ec0u: goto label_115ec0;
        case 0x115ec4u: goto label_115ec4;
        case 0x115ec8u: goto label_115ec8;
        case 0x115eccu: goto label_115ecc;
        case 0x115ed0u: goto label_115ed0;
        case 0x115ed4u: goto label_115ed4;
        case 0x115ed8u: goto label_115ed8;
        case 0x115edcu: goto label_115edc;
        case 0x115ee0u: goto label_115ee0;
        case 0x115ee4u: goto label_115ee4;
        case 0x115ee8u: goto label_115ee8;
        case 0x115eecu: goto label_115eec;
        case 0x115ef0u: goto label_115ef0;
        case 0x115ef4u: goto label_115ef4;
        case 0x115ef8u: goto label_115ef8;
        case 0x115efcu: goto label_115efc;
        default: break;
    }

    ctx->pc = 0x115ea8u;

label_115ea8:
    // 0x115ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_115eac:
    // 0x115eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_115eb0:
    // 0x115eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_115eb4:
    // 0x115eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_115eb8:
    // 0x115eb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_115ebc:
    // 0x115ebc: 0xc045974  jal         func_1165D0
label_115ec0:
    if (ctx->pc == 0x115EC0u) {
        ctx->pc = 0x115EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EBCu;
        // 0x115ec0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EC4u;
        goto label_115ec4;
    }
    ctx->pc = 0x115EBCu;
    SET_GPR_U32(ctx, 31, 0x115EC4u);
    ctx->pc = 0x115EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EBCu;
    // 0x115ec0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1165D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1165D0u, 0x115EBCu, 0x115EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EC4u;
label_115ec4:
    // 0x115ec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x115ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115ec8:
    // 0x115ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115ecc:
    // 0x115ecc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x115eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_115ed0:
    // 0x115ed0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x115ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_115ed4:
    // 0x115ed4: 0xc042392  jal         func_108E48
label_115ed8:
    if (ctx->pc == 0x115ED8u) {
        ctx->pc = 0x115ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115ED4u;
        // 0x115ed8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EDCu;
        goto label_115edc;
    }
    ctx->pc = 0x115ED4u;
    SET_GPR_U32(ctx, 31, 0x115EDCu);
    ctx->pc = 0x115ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115ED4u;
    // 0x115ed8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108E48u, 0x115ED4u, 0x115EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EDCu;
label_115edc:
    // 0x115edc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x115edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_115ee0:
    // 0x115ee0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x115ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_115ee4:
    // 0x115ee4: 0x40f809  jalr        $v0
label_115ee8:
    if (ctx->pc == 0x115EE8u) {
        ctx->pc = 0x115EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EE4u;
        // 0x115ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EECu;
        goto label_115eec;
    }
    ctx->pc = 0x115EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x115EECu);
        ctx->pc = 0x115EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EE4u;
        // 0x115ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EE4u, 0x115EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115EECu;
label_115eec:
    // 0x115eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115ef0:
    // 0x115ef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_115ef4:
    // 0x115ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_115ef8:
    // 0x115ef8: 0x3e00008  jr          $ra
label_115efc:
    if (ctx->pc == 0x115EFCu) {
        ctx->pc = 0x115EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EF8u;
        // 0x115efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115F00u;
        goto label_fallthrough_0x115ef8;
    }
    ctx->pc = 0x115EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EF8u;
        // 0x115efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x115ef8:
    ctx->pc = 0x115F00u;
}
