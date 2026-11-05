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

// Function: sub_00113BC0
// Address: 0x113bc0 - 0x113c90
void sub_00113BC0_0x113bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113BC0_0x113bc0");
#endif

    switch (ctx->pc) {
        case 0x113c04u: goto label_113c04;
        case 0x113c10u: goto label_113c10;
        case 0x113c18u: goto label_113c18;
        case 0x113c48u: goto label_113c48;
        default: break;
    }

    ctx->pc = 0x113bc0u;

    // 0x113bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113bc4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x113bc8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x113bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x113bcc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113bd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x113bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x113bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113bd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x113bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x113bdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x113bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x113be0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x113be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113be4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113bec: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x113becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113bf0: 0x8e040ff4  lw          $a0, 0xFF4($s0)
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x113bf4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113BF4u;
    {
        const bool branch_taken_0x113bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BF4u;
        // 0x113bf8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bf4) {
            ctx->pc = 0x113C08u;
            goto label_113c08;
        }
    }
    ctx->pc = 0x113BFCu;
    // 0x113bfc: 0xc0619d2  jal         func_186748
    ctx->pc = 0x113BFCu;
    SET_GPR_U32(ctx, 31, 0x113C04u);
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x113BFCu, 0x113C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C04u;
label_113c04:
    // 0x113c04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113c08:
    // 0x113c08: 0xc043b6e  jal         func_10EDB8
    ctx->pc = 0x113C08u;
    SET_GPR_U32(ctx, 31, 0x113C10u);
    ctx->pc = 0x113C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C08u;
    // 0x113c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EDB8u, 0x113C08u, 0x113C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C10u;
label_113c10:
    // 0x113c10: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x113C10u;
    SET_GPR_U32(ctx, 31, 0x113C18u);
    ctx->pc = 0x113C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C10u;
    // 0x113c14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x113C10u, 0x113C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C18u;
label_113c18:
    // 0x113c18: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x113C18u;
    {
        const bool branch_taken_0x113c18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C18u;
        // 0x113c1c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c18) {
            ctx->pc = 0x113C2Cu;
            goto label_113c2c;
        }
    }
    ctx->pc = 0x113C20u;
    // 0x113c20: 0x24a201b7  addiu       $v0, $a1, 0x1B7
    ctx->pc = 0x113c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 439));
    // 0x113c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113C24u;
    {
        const bool branch_taken_0x113c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C24u;
        // 0x113c28: 0x24a501b3  addiu       $a1, $a1, 0x1B3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c24) {
            ctx->pc = 0x113C34u;
            goto label_113c34;
        }
    }
    ctx->pc = 0x113C2Cu;
label_113c2c:
    // 0x113c2c: 0x24a201b5  addiu       $v0, $a1, 0x1B5
    ctx->pc = 0x113c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 437));
    // 0x113c30: 0x24a501b1  addiu       $a1, $a1, 0x1B1
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 433));
label_113c34:
    // 0x113c34: 0x51280b  movn        $a1, $v0, $s1
    ctx->pc = 0x113c34u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x113c38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c40: 0xc08e0a2  jal         func_238288
    ctx->pc = 0x113C40u;
    SET_GPR_U32(ctx, 31, 0x113C48u);
    ctx->pc = 0x113C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C40u;
    // 0x113c44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238288u, 0x113C40u, 0x113C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C48u;
label_113c48:
    // 0x113c48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c4c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x113C4Cu;
    {
        const bool branch_taken_0x113c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c4c) {
            ctx->pc = 0x113C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113C4Cu;
            // 0x113c50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113C78u;
            goto label_113c78;
        }
    }
    ctx->pc = 0x113C54u;
    // 0x113c54: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x113c54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x113c58: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x113c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x113c5c: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x113c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x113c60: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x113c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x113c64: 0x425b8  dsll        $a0, $a0, 22
    ctx->pc = 0x113c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 22);
    // 0x113c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113c6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x113c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x113c70: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x113c70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    // 0x113c74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x113c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_113c78:
    // 0x113c78: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x113c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x113c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113c80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113c84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x113c88: 0x3e00008  jr          $ra
    ctx->pc = 0x113C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C88u;
        // 0x113c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C90u;
}
