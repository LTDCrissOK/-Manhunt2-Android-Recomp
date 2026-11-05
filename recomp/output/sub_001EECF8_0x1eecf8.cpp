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

// Function: sub_001EECF8
// Address: 0x1eecf8 - 0x1eee70
void sub_001EECF8_0x1eecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EECF8_0x1eecf8");
#endif

    switch (ctx->pc) {
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eee00u: goto label_1eee00;
        default: break;
    }

    ctx->pc = 0x1eecf8u;

    // 0x1eecf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eecfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eecfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eed04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1eed04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eed08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eed0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eed10: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1EED10u;
    SET_GPR_U32(ctx, 31, 0x1EED18u);
    ctx->pc = 0x1EED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED10u;
    // 0x1eed14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1EED10u, 0x1EED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED18u;
label_1eed18:
    // 0x1eed18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eed18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1eed1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eed20: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1eed24: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EED24u;
    {
        const bool branch_taken_0x1eed24 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1EED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED24u;
        // 0x1eed28: 0xae051330  sw          $a1, 0x1330($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed24) {
            ctx->pc = 0x1EED38u;
            goto label_1eed38;
        }
    }
    ctx->pc = 0x1EED2Cu;
    // 0x1eed2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eed2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed30: 0xc07db1a  jal         func_1F6C68
    ctx->pc = 0x1EED30u;
    SET_GPR_U32(ctx, 31, 0x1EED38u);
    ctx->pc = 0x1EED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED30u;
    // 0x1eed34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C68u, 0x1EED30u, 0x1EED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED38u;
label_1eed38:
    // 0x1eed38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eed40: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1EED40u;
    SET_GPR_U32(ctx, 31, 0x1EED48u);
    ctx->pc = 0x1EED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED40u;
    // 0x1eed44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1EED40u, 0x1EED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED48u;
label_1eed48:
    // 0x1eed48: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EED48u;
    {
        const bool branch_taken_0x1eed48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED48u;
        // 0x1eed4c: 0xae021334  sw          $v0, 0x1334($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed48) {
            ctx->pc = 0x1EED60u;
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EED50u;
    // 0x1eed50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed58: 0xc07db1a  jal         func_1F6C68
    ctx->pc = 0x1EED58u;
    SET_GPR_U32(ctx, 31, 0x1EED60u);
    ctx->pc = 0x1EED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED58u;
    // 0x1eed5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C68u, 0x1EED58u, 0x1EED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED60u;
label_1eed60:
    // 0x1eed60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eed60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eed68: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1EED68u;
    SET_GPR_U32(ctx, 31, 0x1EED70u);
    ctx->pc = 0x1EED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED68u;
    // 0x1eed6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1EED68u, 0x1EED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED70u;
label_1eed70:
    // 0x1eed70: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EED70u;
    {
        const bool branch_taken_0x1eed70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED70u;
        // 0x1eed74: 0xae021338  sw          $v0, 0x1338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed70) {
            ctx->pc = 0x1EED88u;
            goto label_1eed88;
        }
    }
    ctx->pc = 0x1EED78u;
    // 0x1eed78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eed7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed80: 0xc07db1a  jal         func_1F6C68
    ctx->pc = 0x1EED80u;
    SET_GPR_U32(ctx, 31, 0x1EED88u);
    ctx->pc = 0x1EED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED80u;
    // 0x1eed84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C68u, 0x1EED80u, 0x1EED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED88u;
label_1eed88:
    // 0x1eed88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1eed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eed90: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1EED90u;
    SET_GPR_U32(ctx, 31, 0x1EED98u);
    ctx->pc = 0x1EED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED90u;
    // 0x1eed94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1EED90u, 0x1EED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED98u;
label_1eed98:
    // 0x1eed98: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EED98u;
    {
        const bool branch_taken_0x1eed98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED98u;
        // 0x1eed9c: 0xae02133c  sw          $v0, 0x133C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed98) {
            ctx->pc = 0x1EEDB0u;
            goto label_1eedb0;
        }
    }
    ctx->pc = 0x1EEDA0u;
    // 0x1eeda0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eeda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eeda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeda8: 0xc07db1a  jal         func_1F6C68
    ctx->pc = 0x1EEDA8u;
    SET_GPR_U32(ctx, 31, 0x1EEDB0u);
    ctx->pc = 0x1EEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDA8u;
    // 0x1eedac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C68u, 0x1EEDA8u, 0x1EEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDB0u;
label_1eedb0:
    // 0x1eedb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eedb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1eedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eedb8: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1EEDB8u;
    SET_GPR_U32(ctx, 31, 0x1EEDC0u);
    ctx->pc = 0x1EEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDB8u;
    // 0x1eedbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1EEDB8u, 0x1EEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDC0u;
label_1eedc0:
    // 0x1eedc0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEDC0u;
    {
        const bool branch_taken_0x1eedc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDC0u;
        // 0x1eedc4: 0xae021340  sw          $v0, 0x1340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eedc0) {
            ctx->pc = 0x1EEDD8u;
            goto label_1eedd8;
        }
    }
    ctx->pc = 0x1EEDC8u;
    // 0x1eedc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eedc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eedccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedd0: 0xc07db1a  jal         func_1F6C68
    ctx->pc = 0x1EEDD0u;
    SET_GPR_U32(ctx, 31, 0x1EEDD8u);
    ctx->pc = 0x1EEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDD0u;
    // 0x1eedd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C68u, 0x1EEDD0u, 0x1EEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDD8u;
label_1eedd8:
    // 0x1eedd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eedd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeddc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1eede0: 0xc07daa0  jal         func_1F6A80
    ctx->pc = 0x1EEDE0u;
    SET_GPR_U32(ctx, 31, 0x1EEDE8u);
    ctx->pc = 0x1EEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDE0u;
    // 0x1eede4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6A80u, 0x1EEDE0u, 0x1EEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDE8u;
label_1eede8:
    // 0x1eede8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EEDE8u;
    {
        const bool branch_taken_0x1eede8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDE8u;
        // 0x1eedec: 0xae021344  sw          $v0, 0x1344($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eede8) {
            ctx->pc = 0x1EEE00u;
            goto label_1eee00;
        }
    }
    ctx->pc = 0x1EEDF0u;
    // 0x1eedf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eedf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eedf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eedf8: 0xc07db1a  jal         func_1F6C68
    ctx->pc = 0x1EEDF8u;
    SET_GPR_U32(ctx, 31, 0x1EEE00u);
    ctx->pc = 0x1EEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDF8u;
    // 0x1eedfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6C68u, 0x1EEDF8u, 0x1EEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE00u;
label_1eee00:
    // 0x1eee00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eee00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eee04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eee04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eee08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1eee0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1eee0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1eee10: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x1eee14: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1eee14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1eee18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eee18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eee1c: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x1eee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x1eee20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eee20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1eee24: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1eee24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1eee28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1eee28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1eee2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eee2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee30: 0xe60315f8  swc1        $f3, 0x15F8($s0)
    ctx->pc = 0x1eee30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5624), bits); }
    // 0x1eee34: 0xe6001618  swc1        $f0, 0x1618($s0)
    ctx->pc = 0x1eee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5656), bits); }
    // 0x1eee38: 0xe6021604  swc1        $f2, 0x1604($s0)
    ctx->pc = 0x1eee38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5636), bits); }
    // 0x1eee3c: 0xe6011610  swc1        $f1, 0x1610($s0)
    ctx->pc = 0x1eee3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5648), bits); }
    // 0x1eee40: 0xe6041614  swc1        $f4, 0x1614($s0)
    ctx->pc = 0x1eee40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5652), bits); }
    // 0x1eee44: 0xe60315f4  swc1        $f3, 0x15F4($s0)
    ctx->pc = 0x1eee44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5620), bits); }
    // 0x1eee48: 0xe60115fc  swc1        $f1, 0x15FC($s0)
    ctx->pc = 0x1eee48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5628), bits); }
    // 0x1eee4c: 0xe6011600  swc1        $f1, 0x1600($s0)
    ctx->pc = 0x1eee4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5632), bits); }
    // 0x1eee50: 0xe6011608  swc1        $f1, 0x1608($s0)
    ctx->pc = 0x1eee50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5640), bits); }
    // 0x1eee54: 0xe601160c  swc1        $f1, 0x160C($s0)
    ctx->pc = 0x1eee54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5644), bits); }
    // 0x1eee58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eee58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eee5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eee5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eee60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eee64: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE64u;
        // 0x1eee68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEE6Cu;
    // 0x1eee6c: 0x0  nop
    ctx->pc = 0x1eee6cu;
    // NOP
    ctx->pc = 0x1eee70u;
}
