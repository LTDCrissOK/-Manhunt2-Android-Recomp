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

// Function: sub_0010DC28
// Address: 0x10dc28 - 0x10dcc8
void sub_0010DC28_0x10dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DC28_0x10dc28");
#endif

    switch (ctx->pc) {
        case 0x10dc28u: goto label_10dc28;
        case 0x10dc2cu: goto label_10dc2c;
        case 0x10dc30u: goto label_10dc30;
        case 0x10dc34u: goto label_10dc34;
        case 0x10dc38u: goto label_10dc38;
        case 0x10dc3cu: goto label_10dc3c;
        case 0x10dc40u: goto label_10dc40;
        case 0x10dc44u: goto label_10dc44;
        case 0x10dc48u: goto label_10dc48;
        case 0x10dc4cu: goto label_10dc4c;
        case 0x10dc50u: goto label_10dc50;
        case 0x10dc54u: goto label_10dc54;
        case 0x10dc58u: goto label_10dc58;
        case 0x10dc5cu: goto label_10dc5c;
        case 0x10dc60u: goto label_10dc60;
        case 0x10dc64u: goto label_10dc64;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dc6cu: goto label_10dc6c;
        case 0x10dc70u: goto label_10dc70;
        case 0x10dc74u: goto label_10dc74;
        case 0x10dc78u: goto label_10dc78;
        case 0x10dc7cu: goto label_10dc7c;
        case 0x10dc80u: goto label_10dc80;
        case 0x10dc84u: goto label_10dc84;
        case 0x10dc88u: goto label_10dc88;
        case 0x10dc8cu: goto label_10dc8c;
        case 0x10dc90u: goto label_10dc90;
        case 0x10dc94u: goto label_10dc94;
        case 0x10dc98u: goto label_10dc98;
        case 0x10dc9cu: goto label_10dc9c;
        case 0x10dca0u: goto label_10dca0;
        case 0x10dca4u: goto label_10dca4;
        case 0x10dca8u: goto label_10dca8;
        case 0x10dcacu: goto label_10dcac;
        case 0x10dcb0u: goto label_10dcb0;
        case 0x10dcb4u: goto label_10dcb4;
        case 0x10dcb8u: goto label_10dcb8;
        case 0x10dcbcu: goto label_10dcbc;
        case 0x10dcc0u: goto label_10dcc0;
        case 0x10dcc4u: goto label_10dcc4;
        default: break;
    }

    ctx->pc = 0x10dc28u;

label_10dc28:
    // 0x10dc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10dc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10dc2c:
    // 0x10dc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10dc30:
    // 0x10dc30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10dc34:
    // 0x10dc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10dc38:
    // 0x10dc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10dc3c:
    // 0x10dc3c: 0xc04454a  jal         func_111528
label_10dc40:
    if (ctx->pc == 0x10DC40u) {
        ctx->pc = 0x10DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC3Cu;
        // 0x10dc40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC44u;
        goto label_10dc44;
    }
    ctx->pc = 0x10DC3Cu;
    SET_GPR_U32(ctx, 31, 0x10DC44u);
    ctx->pc = 0x10DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC3Cu;
    // 0x10dc40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111528u, 0x10DC3Cu, 0x10DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC44u;
label_10dc44:
    // 0x10dc44: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_10dc48:
    // 0x10dc48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dc4c:
    // 0x10dc4c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x10dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_10dc50:
    // 0x10dc50: 0xc04772e  jal         func_11DCB8
label_10dc54:
    if (ctx->pc == 0x10DC54u) {
        ctx->pc = 0x10DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC50u;
        // 0x10dc54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC58u;
        goto label_10dc58;
    }
    ctx->pc = 0x10DC50u;
    SET_GPR_U32(ctx, 31, 0x10DC58u);
    ctx->pc = 0x10DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC50u;
    // 0x10dc54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DCB8u, 0x10DC50u, 0x10DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC58u;
label_10dc58:
    // 0x10dc58: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_10dc5c:
    if (ctx->pc == 0x10DC5Cu) {
        ctx->pc = 0x10DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC58u;
        // 0x10dc5c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC60u;
        goto label_10dc60;
    }
    ctx->pc = 0x10DC58u;
    {
        const bool branch_taken_0x10dc58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC58u;
        // 0x10dc5c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc58) {
            ctx->pc = 0x10DC90u;
            goto label_10dc90;
        }
    }
    ctx->pc = 0x10DC60u;
label_10dc60:
    // 0x10dc60: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_10dc64:
    // 0x10dc64: 0xc041df4  jal         func_1077D0
label_10dc68:
    if (ctx->pc == 0x10DC68u) {
        ctx->pc = 0x10DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC64u;
        // 0x10dc68: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC6Cu;
        goto label_10dc6c;
    }
    ctx->pc = 0x10DC64u;
    SET_GPR_U32(ctx, 31, 0x10DC6Cu);
    ctx->pc = 0x10DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC64u;
    // 0x10dc68: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1077D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1077D0u, 0x10DC64u, 0x10DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC6Cu;
label_10dc6c:
    // 0x10dc6c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x10dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_10dc70:
    // 0x10dc70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dc74:
    // 0x10dc74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_10dc78:
    // 0x10dc78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x10dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_10dc7c:
    // 0x10dc7c: 0x40f809  jalr        $v0
label_10dc80:
    if (ctx->pc == 0x10DC80u) {
        ctx->pc = 0x10DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC7Cu;
        // 0x10dc80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC84u;
        goto label_10dc84;
    }
    ctx->pc = 0x10DC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10DC84u);
        ctx->pc = 0x10DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC7Cu;
        // 0x10dc80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC7Cu, 0x10DC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DC84u;
label_10dc84:
    // 0x10dc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dc88:
    // 0x10dc88: 0xc04547c  jal         func_1151F0
label_10dc8c:
    if (ctx->pc == 0x10DC8Cu) {
        ctx->pc = 0x10DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC88u;
        // 0x10dc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC90u;
        goto label_10dc90;
    }
    ctx->pc = 0x10DC88u;
    SET_GPR_U32(ctx, 31, 0x10DC90u);
    ctx->pc = 0x10DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC88u;
    // 0x10dc8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F0u, 0x10DC88u, 0x10DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC90u;
label_10dc90:
    // 0x10dc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10dc94:
    // 0x10dc94: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_10dc98:
    if (ctx->pc == 0x10DC98u) {
        ctx->pc = 0x10DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC94u;
        // 0x10dc98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC9Cu;
        goto label_10dc9c;
    }
    ctx->pc = 0x10DC94u;
    {
        const bool branch_taken_0x10dc94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC94u;
        // 0x10dc98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc94) {
            ctx->pc = 0x10DCB4u;
            goto label_10dcb4;
        }
    }
    ctx->pc = 0x10DC9Cu;
label_10dc9c:
    // 0x10dc9c: 0xc04496c  jal         func_1125B0
label_10dca0:
    if (ctx->pc == 0x10DCA0u) {
        ctx->pc = 0x10DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC9Cu;
        // 0x10dca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCA4u;
        goto label_10dca4;
    }
    ctx->pc = 0x10DC9Cu;
    SET_GPR_U32(ctx, 31, 0x10DCA4u);
    ctx->pc = 0x10DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC9Cu;
    // 0x10dca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125B0u, 0x10DC9Cu, 0x10DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCA4u;
label_10dca4:
    // 0x10dca4: 0xc04498e  jal         func_112638
label_10dca8:
    if (ctx->pc == 0x10DCA8u) {
        ctx->pc = 0x10DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCA4u;
        // 0x10dca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCACu;
        goto label_10dcac;
    }
    ctx->pc = 0x10DCA4u;
    SET_GPR_U32(ctx, 31, 0x10DCACu);
    ctx->pc = 0x10DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCA4u;
    // 0x10dca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112638u, 0x10DCA4u, 0x10DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCACu;
label_10dcac:
    // 0x10dcac: 0xc044a72  jal         func_1129C8
label_10dcb0:
    if (ctx->pc == 0x10DCB0u) {
        ctx->pc = 0x10DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCACu;
        // 0x10dcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCB4u;
        goto label_10dcb4;
    }
    ctx->pc = 0x10DCACu;
    SET_GPR_U32(ctx, 31, 0x10DCB4u);
    ctx->pc = 0x10DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCACu;
    // 0x10dcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129C8u, 0x10DCACu, 0x10DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCB4u;
label_10dcb4:
    // 0x10dcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10dcb8:
    // 0x10dcb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10dcbc:
    // 0x10dcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10dcc0:
    // 0x10dcc0: 0x3e00008  jr          $ra
label_10dcc4:
    if (ctx->pc == 0x10DCC4u) {
        ctx->pc = 0x10DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCC0u;
        // 0x10dcc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCC8u;
        goto label_fallthrough_0x10dcc0;
    }
    ctx->pc = 0x10DCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCC0u;
        // 0x10dcc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10dcc0:
    ctx->pc = 0x10DCC8u;
}
