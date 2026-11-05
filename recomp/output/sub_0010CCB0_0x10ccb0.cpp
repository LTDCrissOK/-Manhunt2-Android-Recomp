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

// Function: sub_0010CCB0
// Address: 0x10ccb0 - 0x10cd98
void sub_0010CCB0_0x10ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CCB0_0x10ccb0");
#endif

    switch (ctx->pc) {
        case 0x10ccf0u: goto label_10ccf0;
        case 0x10cd00u: goto label_10cd00;
        case 0x10cd08u: goto label_10cd08;
        case 0x10cd28u: goto label_10cd28;
        default: break;
    }

    ctx->pc = 0x10ccb0u;

    // 0x10ccb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ccb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ccb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ccbc: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x10ccbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x10ccc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10ccc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10ccc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cccc: 0x2674000c  addiu       $s4, $s3, 0xC
    ctx->pc = 0x10ccccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x10ccd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ccd4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x10ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10ccd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ccdc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10cce0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10cce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cce4: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x10cce4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10cce8: 0xc043750  jal         func_10DD40
    ctx->pc = 0x10CCE8u;
    SET_GPR_U32(ctx, 31, 0x10CCF0u);
    ctx->pc = 0x10CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCE8u;
    // 0x10ccec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD40u, 0x10CCE8u, 0x10CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCF0u;
label_10ccf0:
    // 0x10ccf0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10ccf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ccf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccf8: 0xc041ede  jal         func_107B78
    ctx->pc = 0x10CCF8u;
    SET_GPR_U32(ctx, 31, 0x10CD00u);
    ctx->pc = 0x10CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCF8u;
    // 0x10ccfc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B78u, 0x10CCF8u, 0x10CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD00u;
label_10cd00:
    // 0x10cd00: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10CD00u;
    SET_GPR_U32(ctx, 31, 0x10CD08u);
    ctx->pc = 0x10CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD00u;
    // 0x10cd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10CD00u, 0x10CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD08u;
label_10cd08:
    // 0x10cd08: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x10cd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x10cd0c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x10cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10cd10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10cd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10cd14: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10cd14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10cd18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10CD18u;
    {
        const bool branch_taken_0x10cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD18u;
        // 0x10cd1c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd18) {
            ctx->pc = 0x10CD60u;
            goto label_10cd60;
        }
    }
    ctx->pc = 0x10CD20u;
    // 0x10cd20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x10cd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd24: 0x0  nop
    ctx->pc = 0x10cd24u;
    // NOP
label_10cd28:
    // 0x10cd28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10cd2c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x10cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10cd30: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x10cd34: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x10cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x10cd38: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10cd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cd3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10cd40: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x10cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10cd44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10cd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10cd48: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x10cd4c: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x10cd4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x10cd50: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x10cd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10cd54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10CD54u;
    {
        const bool branch_taken_0x10cd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD54u;
        // 0x10cd58: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd54) {
            ctx->pc = 0x10CD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10cd28;
        }
    }
    ctx->pc = 0x10CD5Cu;
    // 0x10cd5c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x10cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_10cd60:
    // 0x10cd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cd64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10cd68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cd68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cd6c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x10cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x10cd70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10cd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cd74: 0x926300cc  lbu         $v1, 0xCC($s3)
    ctx->pc = 0x10cd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x10cd78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10cd78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cd7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10cd80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10cd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10cd84: 0xa26300cc  sb          $v1, 0xCC($s3)
    ctx->pc = 0x10cd84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 204), (uint8_t)GPR_U32(ctx, 3));
    // 0x10cd88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10cd88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD8Cu;
        // 0x10cd90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CD94u;
    // 0x10cd94: 0x0  nop
    ctx->pc = 0x10cd94u;
    // NOP
    ctx->pc = 0x10cd98u;
}
