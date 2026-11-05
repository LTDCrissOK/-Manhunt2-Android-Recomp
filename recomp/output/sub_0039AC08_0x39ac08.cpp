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

// Function: sub_0039AC08
// Address: 0x39ac08 - 0x39ad68
void sub_0039AC08_0x39ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AC08_0x39ac08");
#endif

    switch (ctx->pc) {
        case 0x39ac30u: goto label_39ac30;
        case 0x39ac48u: goto label_39ac48;
        case 0x39ac58u: goto label_39ac58;
        case 0x39ac70u: goto label_39ac70;
        case 0x39ac78u: goto label_39ac78;
        case 0x39ac88u: goto label_39ac88;
        case 0x39ac90u: goto label_39ac90;
        case 0x39aca4u: goto label_39aca4;
        case 0x39acb8u: goto label_39acb8;
        case 0x39acf8u: goto label_39acf8;
        case 0x39ad00u: goto label_39ad00;
        case 0x39ad08u: goto label_39ad08;
        default: break;
    }

    ctx->pc = 0x39ac08u;

    // 0x39ac08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ac0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ac14: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x39ac14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x39ac18: 0x2610abf0  addiu       $s0, $s0, -0x5410
    ctx->pc = 0x39ac18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945776));
    // 0x39ac1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39ac20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39ac20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39ac28: 0xc0e896a  jal         func_3A25A8
    ctx->pc = 0x39AC28u;
    SET_GPR_U32(ctx, 31, 0x39AC30u);
    ctx->pc = 0x39AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC28u;
    // 0x39ac2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25A8u, 0x39AC28u, 0x39AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC30u;
label_39ac30:
    // 0x39ac30: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39ac34: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39ac38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39ac38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac3c: 0x2484b1f0  addiu       $a0, $a0, -0x4E10
    ctx->pc = 0x39ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947312));
    // 0x39ac40: 0xc0e8696  jal         func_3A1A58
    ctx->pc = 0x39AC40u;
    SET_GPR_U32(ctx, 31, 0x39AC48u);
    ctx->pc = 0x39AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC40u;
    // 0x39ac44: 0x24a57ae0  addiu       $a1, $a1, 0x7AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A58u, 0x39AC40u, 0x39AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC48u;
label_39ac48:
    // 0x39ac48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac50: 0xc0e896a  jal         func_3A25A8
    ctx->pc = 0x39AC50u;
    SET_GPR_U32(ctx, 31, 0x39AC58u);
    ctx->pc = 0x39AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC50u;
    // 0x39ac54: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25A8u, 0x39AC50u, 0x39AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC58u;
label_39ac58:
    // 0x39ac58: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39ac5c: 0x2610b1f8  addiu       $s0, $s0, -0x4E08
    ctx->pc = 0x39ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947320));
    // 0x39ac60: 0x24a557c0  addiu       $a1, $a1, 0x57C0
    ctx->pc = 0x39ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22464));
    // 0x39ac64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ac68: 0xc0e8696  jal         func_3A1A58
    ctx->pc = 0x39AC68u;
    SET_GPR_U32(ctx, 31, 0x39AC70u);
    ctx->pc = 0x39AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC68u;
    // 0x39ac6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A58u, 0x39AC68u, 0x39AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC70u;
label_39ac70:
    // 0x39ac70: 0xc0e872e  jal         func_3A1CB8
    ctx->pc = 0x39AC70u;
    SET_GPR_U32(ctx, 31, 0x39AC78u);
    ctx->pc = 0x39AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC70u;
    // 0x39ac74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1CB8u, 0x39AC70u, 0x39AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC78u;
label_39ac78:
    // 0x39ac78: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x39AC78u;
    {
        const bool branch_taken_0x39ac78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC78u;
        // 0x39ac7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac78) {
            ctx->pc = 0x39ACF0u;
            goto label_39acf0;
        }
    }
    ctx->pc = 0x39AC80u;
    // 0x39ac80: 0xc0e9aaa  jal         func_3A6AA8
    ctx->pc = 0x39AC80u;
    SET_GPR_U32(ctx, 31, 0x39AC88u);
    ctx->pc = 0x39AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC80u;
    // 0x39ac84: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x39AC80u, 0x39AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC88u;
label_39ac88:
    // 0x39ac88: 0xc0e9ab6  jal         func_3A6AD8
    ctx->pc = 0x39AC88u;
    SET_GPR_U32(ctx, 31, 0x39AC90u);
    ctx->pc = 0x39AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC88u;
    // 0x39ac8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AD8u, 0x39AC88u, 0x39AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AC90u;
label_39ac90:
    // 0x39ac90: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x39ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x39ac94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39AC94u;
    {
        const bool branch_taken_0x39ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC94u;
        // 0x39ac98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac94) {
            ctx->pc = 0x39ACB0u;
            goto label_39acb0;
        }
    }
    ctx->pc = 0x39AC9Cu;
    // 0x39ac9c: 0xc0e95e0  jal         func_3A5780
    ctx->pc = 0x39AC9Cu;
    SET_GPR_U32(ctx, 31, 0x39ACA4u);
    ctx->pc = 0x39ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AC9Cu;
    // 0x39aca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5780u, 0x39AC9Cu, 0x39ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ACA4u;
label_39aca4:
    // 0x39aca4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39ACA4u;
    {
        const bool branch_taken_0x39aca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACA4u;
        // 0x39aca8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aca4) {
            ctx->pc = 0x39ACBCu;
            goto label_39acbc;
        }
    }
    ctx->pc = 0x39ACACu;
    // 0x39acac: 0x0  nop
    ctx->pc = 0x39acacu;
    // NOP
label_39acb0:
    // 0x39acb0: 0xc0e95e0  jal         func_3A5780
    ctx->pc = 0x39ACB0u;
    SET_GPR_U32(ctx, 31, 0x39ACB8u);
    ctx->pc = 0x3A5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5780u, 0x39ACB0u, 0x39ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ACB8u;
label_39acb8:
    // 0x39acb8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x39acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39acbc:
    // 0x39acbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39ACBCu;
    {
        const bool branch_taken_0x39acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACBCu;
        // 0x39acc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39acbc) {
            ctx->pc = 0x39ACD8u;
            goto label_39acd8;
        }
    }
    ctx->pc = 0x39ACC4u;
    // 0x39acc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39acc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39acc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39acc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39accc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39acccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39acd0: 0x80e95e8  j           func_3A57A0
    ctx->pc = 0x39ACD0u;
    ctx->pc = 0x39ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ACD0u;
    // 0x39acd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57A0u, 0x39ACD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39ACD8u;
label_39acd8:
    // 0x39acd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39acdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39acdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ace0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ace0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ace4: 0x80e95e8  j           func_3A57A0
    ctx->pc = 0x39ACE4u;
    ctx->pc = 0x39ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ACE4u;
    // 0x39ace8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57A0u, 0x39ACE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39ACECu;
    // 0x39acec: 0x0  nop
    ctx->pc = 0x39acecu;
    // NOP
label_39acf0:
    // 0x39acf0: 0xc0e9aaa  jal         func_3A6AA8
    ctx->pc = 0x39ACF0u;
    SET_GPR_U32(ctx, 31, 0x39ACF8u);
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x39ACF0u, 0x39ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ACF8u;
label_39acf8:
    // 0x39acf8: 0xc0e9ab6  jal         func_3A6AD8
    ctx->pc = 0x39ACF8u;
    SET_GPR_U32(ctx, 31, 0x39AD00u);
    ctx->pc = 0x39ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ACF8u;
    // 0x39acfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AD8u, 0x39ACF8u, 0x39AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD00u;
label_39ad00:
    // 0x39ad00: 0xc0e95e0  jal         func_3A5780
    ctx->pc = 0x39AD00u;
    SET_GPR_U32(ctx, 31, 0x39AD08u);
    ctx->pc = 0x39AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD00u;
    // 0x39ad04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5780u, 0x39AD00u, 0x39AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD08u;
label_39ad08:
    // 0x39ad08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ad0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ad10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ad10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ad14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ad18: 0x80e95e8  j           func_3A57A0
    ctx->pc = 0x39AD18u;
    ctx->pc = 0x39AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD18u;
    // 0x39ad1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57A0u, 0x39AD18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39AD20u;
    // 0x39ad20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ad24: 0x0  nop
    ctx->pc = 0x39ad24u;
    // NOP
    // 0x39ad28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ad28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ad2c: 0x0  nop
    ctx->pc = 0x39ad2cu;
    // NOP
    // 0x39ad30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ad34: 0x0  nop
    ctx->pc = 0x39ad34u;
    // NOP
    // 0x39ad38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39ad3c: 0x0  nop
    ctx->pc = 0x39ad3cu;
    // NOP
    // 0x39ad40: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x39ad44: 0x0  nop
    ctx->pc = 0x39ad44u;
    // NOP
    // 0x39ad48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ad4c: 0x0  nop
    ctx->pc = 0x39ad4cu;
    // NOP
    // 0x39ad50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ad54: 0x0  nop
    ctx->pc = 0x39ad54u;
    // NOP
    // 0x39ad58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ad5c: 0x0  nop
    ctx->pc = 0x39ad5cu;
    // NOP
    // 0x39ad60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39ad64: 0x0  nop
    ctx->pc = 0x39ad64u;
    // NOP
    ctx->pc = 0x39ad68u;
}
