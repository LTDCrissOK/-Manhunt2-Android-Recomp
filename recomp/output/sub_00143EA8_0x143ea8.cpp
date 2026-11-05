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

// Function: sub_00143EA8
// Address: 0x143ea8 - 0x143f58
void sub_00143EA8_0x143ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143EA8_0x143ea8");
#endif

    switch (ctx->pc) {
        case 0x143ec8u: goto label_143ec8;
        case 0x143ee0u: goto label_143ee0;
        case 0x143eecu: goto label_143eec;
        case 0x143f04u: goto label_143f04;
        case 0x143f14u: goto label_143f14;
        case 0x143f24u: goto label_143f24;
        case 0x143f34u: goto label_143f34;
        case 0x143f44u: goto label_143f44;
        default: break;
    }

    ctx->pc = 0x143ea8u;

    // 0x143ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143eb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143eb4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x143EB4u;
    {
        const bool branch_taken_0x143eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EB4u;
        // 0x143eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eb4) {
            ctx->pc = 0x143ED0u;
            goto label_143ed0;
        }
    }
    ctx->pc = 0x143EBCu;
    // 0x143ebc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143ec0: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x143EC0u;
    SET_GPR_U32(ctx, 31, 0x143EC8u);
    ctx->pc = 0x143EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143EC0u;
    // 0x143ec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x143EC0u, 0x143EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143EC8u;
label_143ec8:
    // 0x143ec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143EC8u;
    {
        const bool branch_taken_0x143ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ec8) {
            ctx->pc = 0x143EE4u;
            goto label_143ee4;
        }
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143ed0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ed8: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x143ED8u;
    SET_GPR_U32(ctx, 31, 0x143EE0u);
    ctx->pc = 0x143EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143ED8u;
    // 0x143edc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x143ED8u, 0x143EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143EE0u;
label_143ee0:
    // 0x143ee0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143ee0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_143ee4:
    // 0x143ee4: 0xc04e866  jal         func_13A198
    ctx->pc = 0x143EE4u;
    SET_GPR_U32(ctx, 31, 0x143EECu);
    ctx->pc = 0x143EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143EE4u;
    // 0x143ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x143EE4u, 0x143EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143EECu;
label_143eec:
    // 0x143eec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143ef0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x143EF0u;
    {
        const bool branch_taken_0x143ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x143ef0) {
            ctx->pc = 0x143EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143EF0u;
            // 0x143ef4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143F0Cu;
            goto label_143f0c;
        }
    }
    ctx->pc = 0x143EF8u;
    // 0x143ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143efc: 0xc04ebf6  jal         func_13AFD8
    ctx->pc = 0x143EFCu;
    SET_GPR_U32(ctx, 31, 0x143F04u);
    ctx->pc = 0x143F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143EFCu;
    // 0x143f00: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AFD8u, 0x143EFCu, 0x143F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F04u;
label_143f04:
    // 0x143f04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x143F04u;
    {
        const bool branch_taken_0x143f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F04u;
        // 0x143f08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f04) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F0Cu;
label_143f0c:
    // 0x143f0c: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x143F0Cu;
    SET_GPR_U32(ctx, 31, 0x143F14u);
    ctx->pc = 0x143F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F0Cu;
    // 0x143f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x143F0Cu, 0x143F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F14u;
label_143f14:
    // 0x143f14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143F14u;
    {
        const bool branch_taken_0x143f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f14) {
            ctx->pc = 0x143F2Cu;
            goto label_143f2c;
        }
    }
    ctx->pc = 0x143F1Cu;
    // 0x143f1c: 0xc04ec30  jal         func_13B0C0
    ctx->pc = 0x143F1Cu;
    SET_GPR_U32(ctx, 31, 0x143F24u);
    ctx->pc = 0x143F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F1Cu;
    // 0x143f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0C0u, 0x143F1Cu, 0x143F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F24u;
label_143f24:
    // 0x143f24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143F24u;
    {
        const bool branch_taken_0x143f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F24u;
        // 0x143f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f24) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F2Cu;
label_143f2c:
    // 0x143f2c: 0xc04edba  jal         func_13B6E8
    ctx->pc = 0x143F2Cu;
    SET_GPR_U32(ctx, 31, 0x143F34u);
    ctx->pc = 0x143F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F2Cu;
    // 0x143f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6E8u, 0x143F2Cu, 0x143F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F34u;
label_143f34:
    // 0x143f34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x143F34u;
    {
        const bool branch_taken_0x143f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143f34) {
            ctx->pc = 0x143F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143F34u;
            // 0x143f38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F3Cu;
    // 0x143f3c: 0xc051098  jal         func_144260
    ctx->pc = 0x143F3Cu;
    SET_GPR_U32(ctx, 31, 0x143F44u);
    ctx->pc = 0x143F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F3Cu;
    // 0x143f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144260u, 0x143F3Cu, 0x143F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F44u;
label_143f44:
    // 0x143f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143f48:
    // 0x143f48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x143F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F4Cu;
        // 0x143f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143F54u;
    // 0x143f54: 0x0  nop
    ctx->pc = 0x143f54u;
    // NOP
    ctx->pc = 0x143f58u;
}
