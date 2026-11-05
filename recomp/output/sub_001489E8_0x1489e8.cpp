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

// Function: sub_001489E8
// Address: 0x1489e8 - 0x148a58
void sub_001489E8_0x1489e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001489E8_0x1489e8");
#endif

    switch (ctx->pc) {
        case 0x1489e8u: goto label_1489e8;
        case 0x1489ecu: goto label_1489ec;
        case 0x1489f0u: goto label_1489f0;
        case 0x1489f4u: goto label_1489f4;
        case 0x1489f8u: goto label_1489f8;
        case 0x1489fcu: goto label_1489fc;
        case 0x148a00u: goto label_148a00;
        case 0x148a04u: goto label_148a04;
        case 0x148a08u: goto label_148a08;
        case 0x148a0cu: goto label_148a0c;
        case 0x148a10u: goto label_148a10;
        case 0x148a14u: goto label_148a14;
        case 0x148a18u: goto label_148a18;
        case 0x148a1cu: goto label_148a1c;
        case 0x148a20u: goto label_148a20;
        case 0x148a24u: goto label_148a24;
        case 0x148a28u: goto label_148a28;
        case 0x148a2cu: goto label_148a2c;
        case 0x148a30u: goto label_148a30;
        case 0x148a34u: goto label_148a34;
        case 0x148a38u: goto label_148a38;
        case 0x148a3cu: goto label_148a3c;
        case 0x148a40u: goto label_148a40;
        case 0x148a44u: goto label_148a44;
        case 0x148a48u: goto label_148a48;
        case 0x148a4cu: goto label_148a4c;
        case 0x148a50u: goto label_148a50;
        case 0x148a54u: goto label_148a54;
        default: break;
    }

    ctx->pc = 0x1489e8u;

label_1489e8:
    // 0x1489e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1489ec:
    // 0x1489ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1489ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1489f0:
    // 0x1489f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1489f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1489f4:
    // 0x1489f4: 0xc04d7d8  jal         func_135F60
label_1489f8:
    if (ctx->pc == 0x1489F8u) {
        ctx->pc = 0x1489F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489F4u;
        // 0x1489f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489FCu;
        goto label_1489fc;
    }
    ctx->pc = 0x1489F4u;
    SET_GPR_U32(ctx, 31, 0x1489FCu);
    ctx->pc = 0x1489F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489F4u;
    // 0x1489f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F60u, 0x1489F4u, 0x1489FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489FCu;
label_1489fc:
    // 0x1489fc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_148a00:
    if (ctx->pc == 0x148A00u) {
        ctx->pc = 0x148A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489FCu;
        // 0x148a00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A04u;
        goto label_148a04;
    }
    ctx->pc = 0x1489FCu;
    {
        const bool branch_taken_0x1489fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489fc) {
            ctx->pc = 0x148A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1489FCu;
            // 0x148a00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148A4Cu;
            goto label_148a4c;
        }
    }
    ctx->pc = 0x148A04u;
label_148a04:
    // 0x148a04: 0xc04db8c  jal         func_136E30
label_148a08:
    if (ctx->pc == 0x148A08u) {
        ctx->pc = 0x148A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A04u;
        // 0x148a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A0Cu;
        goto label_148a0c;
    }
    ctx->pc = 0x148A04u;
    SET_GPR_U32(ctx, 31, 0x148A0Cu);
    ctx->pc = 0x148A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A04u;
    // 0x148a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E30u, 0x148A04u, 0x148A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A0Cu;
label_148a0c:
    // 0x148a0c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_148a10:
    if (ctx->pc == 0x148A10u) {
        ctx->pc = 0x148A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A0Cu;
        // 0x148a10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A14u;
        goto label_148a14;
    }
    ctx->pc = 0x148A0Cu;
    {
        const bool branch_taken_0x148a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148a0c) {
            ctx->pc = 0x148A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148A0Cu;
            // 0x148a10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148A4Cu;
            goto label_148a4c;
        }
    }
    ctx->pc = 0x148A14u;
label_148a14:
    // 0x148a14: 0x8e030468  lw          $v1, 0x468($s0)
    ctx->pc = 0x148a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
label_148a18:
    // 0x148a18: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x148a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_148a1c:
    // 0x148a1c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x148a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_148a20:
    // 0x148a20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x148a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_148a24:
    // 0x148a24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_148a28:
    // 0x148a28: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x148a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_148a2c:
    // 0x148a2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x148a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_148a30:
    // 0x148a30: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x148a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_148a34:
    // 0x148a34: 0x60f809  jalr        $v1
label_148a38:
    if (ctx->pc == 0x148A38u) {
        ctx->pc = 0x148A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A34u;
        // 0x148a38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A3Cu;
        goto label_148a3c;
    }
    ctx->pc = 0x148A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x148A3Cu);
        ctx->pc = 0x148A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A34u;
        // 0x148a38: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148A34u, 0x148A3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148A3Cu;
label_148a3c:
    // 0x148a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148a40:
    // 0x148a40: 0xc04db8a  jal         func_136E28
label_148a44:
    if (ctx->pc == 0x148A44u) {
        ctx->pc = 0x148A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A40u;
        // 0x148a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A48u;
        goto label_148a48;
    }
    ctx->pc = 0x148A40u;
    SET_GPR_U32(ctx, 31, 0x148A48u);
    ctx->pc = 0x148A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148A40u;
    // 0x148a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E28u, 0x148A40u, 0x148A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A48u;
label_148a48:
    // 0x148a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148a4c:
    // 0x148a4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x148a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_148a50:
    // 0x148a50: 0x3e00008  jr          $ra
label_148a54:
    if (ctx->pc == 0x148A54u) {
        ctx->pc = 0x148A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A50u;
        // 0x148a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A58u;
        goto label_fallthrough_0x148a50;
    }
    ctx->pc = 0x148A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A50u;
        // 0x148a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x148a50:
    ctx->pc = 0x148A58u;
}
