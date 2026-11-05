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

// Function: sub_0010DD40
// Address: 0x10dd40 - 0x10de28
void sub_0010DD40_0x10dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DD40_0x10dd40");
#endif

    switch (ctx->pc) {
        case 0x10dd70u: goto label_10dd70;
        case 0x10dd78u: goto label_10dd78;
        case 0x10dd90u: goto label_10dd90;
        case 0x10ddb8u: goto label_10ddb8;
        case 0x10ddc4u: goto label_10ddc4;
        case 0x10ddd0u: goto label_10ddd0;
        case 0x10dde8u: goto label_10dde8;
        case 0x10ddf0u: goto label_10ddf0;
        case 0x10ddfcu: goto label_10ddfc;
        default: break;
    }

    ctx->pc = 0x10dd40u;

    // 0x10dd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10dd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dd48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10dd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10dd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10dd54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10dd5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10dd60: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x10dd60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x10dd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10dd68: 0xc043970  jal         func_10E5C0
    ctx->pc = 0x10DD68u;
    SET_GPR_U32(ctx, 31, 0x10DD70u);
    ctx->pc = 0x10DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD68u;
    // 0x10dd6c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5C0u, 0x10DD68u, 0x10DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD70u;
label_10dd70:
    // 0x10dd70: 0xc044940  jal         func_112500
    ctx->pc = 0x10DD70u;
    SET_GPR_U32(ctx, 31, 0x10DD78u);
    ctx->pc = 0x10DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD70u;
    // 0x10dd74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112500u, 0x10DD70u, 0x10DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD78u;
label_10dd78:
    // 0x10dd78: 0x920200a4  lbu         $v0, 0xA4($s0)
    ctx->pc = 0x10dd78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x10dd7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10DD7Cu;
    {
        const bool branch_taken_0x10dd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD7Cu;
        // 0x10dd80: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd7c) {
            ctx->pc = 0x10DDE0u;
            goto label_10dde0;
        }
    }
    ctx->pc = 0x10DD84u;
    // 0x10dd84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10DD84u;
    {
        const bool branch_taken_0x10dd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD84u;
        // 0x10dd88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd84) {
            ctx->pc = 0x10DD94u;
            goto label_10dd94;
        }
    }
    ctx->pc = 0x10DD8Cu;
    // 0x10dd8c: 0x0  nop
    ctx->pc = 0x10dd8cu;
    // NOP
label_10dd90:
    // 0x10dd90: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x10dd90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10dd94:
    // 0x10dd94: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x10dd94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x10dd98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10DD98u;
    {
        const bool branch_taken_0x10dd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD98u;
        // 0x10dd9c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd98) {
            ctx->pc = 0x10DDE0u;
            goto label_10dde0;
        }
    }
    ctx->pc = 0x10DDA0u;
    // 0x10dda0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10dda4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x10dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x10dda8: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10DDA8u;
    {
        const bool branch_taken_0x10dda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA8u;
        // 0x10ddac: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dda8) {
            ctx->pc = 0x10DD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dd90;
        }
    }
    ctx->pc = 0x10DDB0u;
    // 0x10ddb0: 0xc04561a  jal         func_115868
    ctx->pc = 0x10DDB0u;
    SET_GPR_U32(ctx, 31, 0x10DDB8u);
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x10DDB0u, 0x10DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDB8u;
label_10ddb8:
    // 0x10ddb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddbc: 0xc043be0  jal         func_10EF80
    ctx->pc = 0x10DDBCu;
    SET_GPR_U32(ctx, 31, 0x10DDC4u);
    ctx->pc = 0x10DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDBCu;
    // 0x10ddc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EF80u, 0x10DDBCu, 0x10DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDC4u;
label_10ddc4:
    // 0x10ddc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddc8: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x10DDC8u;
    SET_GPR_U32(ctx, 31, 0x10DDD0u);
    ctx->pc = 0x10DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDC8u;
    // 0x10ddcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x10DDC8u, 0x10DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDD0u;
label_10ddd0:
    // 0x10ddd0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x10ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x10ddd4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x10ddd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10ddd8: 0x1640ffed  bnez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10DDD8u;
    {
        const bool branch_taken_0x10ddd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDD8u;
        // 0x10dddc: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddd8) {
            ctx->pc = 0x10DD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dd90;
        }
    }
    ctx->pc = 0x10DDE0u;
label_10dde0:
    // 0x10dde0: 0xc04499e  jal         func_112678
    ctx->pc = 0x10DDE0u;
    SET_GPR_U32(ctx, 31, 0x10DDE8u);
    ctx->pc = 0x10DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDE0u;
    // 0x10dde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112678u, 0x10DDE0u, 0x10DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDE8u;
label_10dde8:
    // 0x10dde8: 0xc044a82  jal         func_112A08
    ctx->pc = 0x10DDE8u;
    SET_GPR_U32(ctx, 31, 0x10DDF0u);
    ctx->pc = 0x10DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDE8u;
    // 0x10ddec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A08u, 0x10DDE8u, 0x10DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDF0u;
label_10ddf0:
    // 0x10ddf0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10ddf4: 0xc04775e  jal         func_11DD78
    ctx->pc = 0x10DDF4u;
    SET_GPR_U32(ctx, 31, 0x10DDFCu);
    ctx->pc = 0x10DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDF4u;
    // 0x10ddf8: 0x26649a08  addiu       $a0, $s3, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD78u, 0x10DDF4u, 0x10DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDFCu;
label_10ddfc:
    // 0x10ddfc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10de00: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10de00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10de04: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x10de04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x10de08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10de08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10de0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10de10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10de10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10de14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10de18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10de18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10de1c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE1Cu;
        // 0x10de20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DE24u;
    // 0x10de24: 0x0  nop
    ctx->pc = 0x10de24u;
    // NOP
    ctx->pc = 0x10de28u;
}
