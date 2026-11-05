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

// Function: sub_00158BC0
// Address: 0x158bc0 - 0x158c48
void sub_00158BC0_0x158bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158BC0_0x158bc0");
#endif

    switch (ctx->pc) {
        case 0x158bc0u: goto label_158bc0;
        case 0x158bc4u: goto label_158bc4;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bccu: goto label_158bcc;
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        default: break;
    }

    ctx->pc = 0x158bc0u;

label_158bc0:
    // 0x158bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158bc4:
    // 0x158bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158bc8:
    // 0x158bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158bcc:
    // 0x158bcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158bd0:
    // 0x158bd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158bd4:
    // 0x158bd4: 0xc04f26c  jal         func_13C9B0
label_158bd8:
    if (ctx->pc == 0x158BD8u) {
        ctx->pc = 0x158BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BD4u;
        // 0x158bd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BDCu;
        goto label_158bdc;
    }
    ctx->pc = 0x158BD4u;
    SET_GPR_U32(ctx, 31, 0x158BDCu);
    ctx->pc = 0x158BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BD4u;
    // 0x158bd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x158BD4u, 0x158BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BDCu;
label_158bdc:
    // 0x158bdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158be0:
    // 0x158be0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x158be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_158be4:
    // 0x158be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158be8:
    // 0x158be8: 0xc04f33e  jal         func_13CCF8
label_158bec:
    if (ctx->pc == 0x158BECu) {
        ctx->pc = 0x158BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE8u;
        // 0x158bec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BF0u;
        goto label_158bf0;
    }
    ctx->pc = 0x158BE8u;
    SET_GPR_U32(ctx, 31, 0x158BF0u);
    ctx->pc = 0x158BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BE8u;
    // 0x158bec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158BE8u, 0x158BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BF0u;
label_158bf0:
    // 0x158bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158bf4:
    // 0x158bf4: 0xc04f0b6  jal         func_13C2D8
label_158bf8:
    if (ctx->pc == 0x158BF8u) {
        ctx->pc = 0x158BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BF4u;
        // 0x158bf8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BFCu;
        goto label_158bfc;
    }
    ctx->pc = 0x158BF4u;
    SET_GPR_U32(ctx, 31, 0x158BFCu);
    ctx->pc = 0x158BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158BF4u;
    // 0x158bf8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158BF4u, 0x158BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158BFCu;
label_158bfc:
    // 0x158bfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158c00:
    // 0x158c00: 0x8e250318  lw          $a1, 0x318($s1)
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_158c04:
    // 0x158c04: 0xc046330  jal         func_118CC0
label_158c08:
    if (ctx->pc == 0x158C08u) {
        ctx->pc = 0x158C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C04u;
        // 0x158c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C0Cu;
        goto label_158c0c;
    }
    ctx->pc = 0x158C04u;
    SET_GPR_U32(ctx, 31, 0x158C0Cu);
    ctx->pc = 0x158C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C04u;
    // 0x158c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x158C04u, 0x158C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C0Cu;
label_158c0c:
    // 0x158c0c: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x158c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_158c10:
    // 0x158c10: 0xc0461e8  jal         func_1187A0
label_158c14:
    if (ctx->pc == 0x158C14u) {
        ctx->pc = 0x158C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C10u;
        // 0x158c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C18u;
        goto label_158c18;
    }
    ctx->pc = 0x158C10u;
    SET_GPR_U32(ctx, 31, 0x158C18u);
    ctx->pc = 0x158C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158C10u;
    // 0x158c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x158C10u, 0x158C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158C18u;
label_158c18:
    // 0x158c18: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158c1c:
    // 0x158c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158c20:
    // 0x158c20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158c24:
    // 0x158c24: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158c28:
    // 0x158c28: 0x40f809  jalr        $v0
label_158c2c:
    if (ctx->pc == 0x158C2Cu) {
        ctx->pc = 0x158C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C28u;
        // 0x158c2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C30u;
        goto label_158c30;
    }
    ctx->pc = 0x158C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158C30u);
        ctx->pc = 0x158C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C28u;
        // 0x158c2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C28u, 0x158C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158C30u;
label_158c30:
    // 0x158c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158c34:
    // 0x158c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158c38:
    // 0x158c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158c3c:
    // 0x158c3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158c40:
    // 0x158c40: 0x3e00008  jr          $ra
label_158c44:
    if (ctx->pc == 0x158C44u) {
        ctx->pc = 0x158C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C40u;
        // 0x158c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C48u;
        goto label_fallthrough_0x158c40;
    }
    ctx->pc = 0x158C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C40u;
        // 0x158c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158c40:
    ctx->pc = 0x158C48u;
}
