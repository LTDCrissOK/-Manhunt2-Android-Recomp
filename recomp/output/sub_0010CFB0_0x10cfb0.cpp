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

// Function: sub_0010CFB0
// Address: 0x10cfb0 - 0x10d128
void sub_0010CFB0_0x10cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CFB0_0x10cfb0");
#endif

    switch (ctx->pc) {
        case 0x10cfd0u: goto label_10cfd0;
        case 0x10cfe0u: goto label_10cfe0;
        case 0x10cfe8u: goto label_10cfe8;
        case 0x10cff8u: goto label_10cff8;
        case 0x10d000u: goto label_10d000;
        case 0x10d010u: goto label_10d010;
        case 0x10d018u: goto label_10d018;
        case 0x10d028u: goto label_10d028;
        case 0x10d030u: goto label_10d030;
        case 0x10d048u: goto label_10d048;
        case 0x10d050u: goto label_10d050;
        case 0x10d080u: goto label_10d080;
        case 0x10d08cu: goto label_10d08c;
        case 0x10d094u: goto label_10d094;
        case 0x10d0b8u: goto label_10d0b8;
        case 0x10d0c0u: goto label_10d0c0;
        case 0x10d0d4u: goto label_10d0d4;
        case 0x10d0e0u: goto label_10d0e0;
        case 0x10d0e8u: goto label_10d0e8;
        case 0x10d104u: goto label_10d104;
        case 0x10d110u: goto label_10d110;
        default: break;
    }

    ctx->pc = 0x10cfb0u;

    // 0x10cfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10cfb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cfb8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10cfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cfc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cfc8: 0xc046002  jal         func_118008
    ctx->pc = 0x10CFC8u;
    SET_GPR_U32(ctx, 31, 0x10CFD0u);
    ctx->pc = 0x10CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFC8u;
    // 0x10cfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x10CFC8u, 0x10CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFD0u;
label_10cfd0:
    // 0x10cfd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CFD0u;
    {
        const bool branch_taken_0x10cfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFD0u;
        // 0x10cfd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfd0) {
            ctx->pc = 0x10CFE0u;
            goto label_10cfe0;
        }
    }
    ctx->pc = 0x10CFD8u;
    // 0x10cfd8: 0xc05a61a  jal         func_169868
    ctx->pc = 0x10CFD8u;
    SET_GPR_U32(ctx, 31, 0x10CFE0u);
    ctx->pc = 0x10CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFD8u;
    // 0x10cfdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169868u, 0x10CFD8u, 0x10CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFE0u;
label_10cfe0:
    // 0x10cfe0: 0xc046086  jal         func_118218
    ctx->pc = 0x10CFE0u;
    SET_GPR_U32(ctx, 31, 0x10CFE8u);
    ctx->pc = 0x10CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFE0u;
    // 0x10cfe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x10CFE0u, 0x10CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFE8u;
label_10cfe8:
    // 0x10cfe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CFE8u;
    {
        const bool branch_taken_0x10cfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CFE8u;
        // 0x10cfec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfe8) {
            ctx->pc = 0x10CFF8u;
            goto label_10cff8;
        }
    }
    ctx->pc = 0x10CFF0u;
    // 0x10cff0: 0xc05a61e  jal         func_169878
    ctx->pc = 0x10CFF0u;
    SET_GPR_U32(ctx, 31, 0x10CFF8u);
    ctx->pc = 0x10CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFF0u;
    // 0x10cff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x10CFF0u, 0x10CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFF8u;
label_10cff8:
    // 0x10cff8: 0xc045fd2  jal         func_117F48
    ctx->pc = 0x10CFF8u;
    SET_GPR_U32(ctx, 31, 0x10D000u);
    ctx->pc = 0x10CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFF8u;
    // 0x10cffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F48u, 0x10CFF8u, 0x10D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D000u;
label_10d000:
    // 0x10d000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D000u;
    {
        const bool branch_taken_0x10d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D000u;
        // 0x10d004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d000) {
            ctx->pc = 0x10D010u;
            goto label_10d010;
        }
    }
    ctx->pc = 0x10D008u;
    // 0x10d008: 0xc05a62c  jal         func_1698B0
    ctx->pc = 0x10D008u;
    SET_GPR_U32(ctx, 31, 0x10D010u);
    ctx->pc = 0x10D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D008u;
    // 0x10d00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698B0u, 0x10D008u, 0x10D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D010u;
label_10d010:
    // 0x10d010: 0xc04623e  jal         func_1188F8
    ctx->pc = 0x10D010u;
    SET_GPR_U32(ctx, 31, 0x10D018u);
    ctx->pc = 0x10D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D010u;
    // 0x10d014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1188F8u, 0x10D010u, 0x10D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D018u;
label_10d018:
    // 0x10d018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D018u;
    {
        const bool branch_taken_0x10d018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D018u;
        // 0x10d01c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d018) {
            ctx->pc = 0x10D028u;
            goto label_10d028;
        }
    }
    ctx->pc = 0x10D020u;
    // 0x10d020: 0xc05a630  jal         func_1698C0
    ctx->pc = 0x10D020u;
    SET_GPR_U32(ctx, 31, 0x10D028u);
    ctx->pc = 0x10D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D020u;
    // 0x10d024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C0u, 0x10D020u, 0x10D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D028u;
label_10d028:
    // 0x10d028: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x10D028u;
    SET_GPR_U32(ctx, 31, 0x10D030u);
    ctx->pc = 0x10D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D028u;
    // 0x10d02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x10D028u, 0x10D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D030u;
label_10d030:
    // 0x10d030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d034: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x10d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x10d038: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D038u;
    {
        const bool branch_taken_0x10d038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10d038) {
            ctx->pc = 0x10D048u;
            goto label_10d048;
        }
    }
    ctx->pc = 0x10D040u;
    // 0x10d040: 0xc05a634  jal         func_1698D0
    ctx->pc = 0x10D040u;
    SET_GPR_U32(ctx, 31, 0x10D048u);
    ctx->pc = 0x10D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D040u;
    // 0x10d044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698D0u, 0x10D040u, 0x10D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D048u;
label_10d048:
    // 0x10d048: 0xc05a602  jal         func_169808
    ctx->pc = 0x10D048u;
    SET_GPR_U32(ctx, 31, 0x10D050u);
    ctx->pc = 0x10D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D048u;
    // 0x10d04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x10D048u, 0x10D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D050u;
label_10d050:
    // 0x10d050: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d054: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x10d054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x10d058: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10D058u;
    {
        const bool branch_taken_0x10d058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D058u;
        // 0x10d05c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d058) {
            ctx->pc = 0x10D08Cu;
            goto label_10d08c;
        }
    }
    ctx->pc = 0x10D060u;
    // 0x10d060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10d060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10d064: 0x2442a740  addiu       $v0, $v0, -0x58C0
    ctx->pc = 0x10d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
    // 0x10d068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d06c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d070: 0x800008  jr          $a0
    ctx->pc = 0x10D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10D078u: goto label_10d078;
            case 0x10D08Cu: goto label_10d08c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10D078u;
label_10d078:
    // 0x10d078: 0xc046272  jal         func_1189C8
    ctx->pc = 0x10D078u;
    SET_GPR_U32(ctx, 31, 0x10D080u);
    ctx->pc = 0x10D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D078u;
    // 0x10d07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x10D078u, 0x10D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D080u;
label_10d080:
    // 0x10d080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d084: 0xc05a638  jal         func_1698E0
    ctx->pc = 0x10D084u;
    SET_GPR_U32(ctx, 31, 0x10D08Cu);
    ctx->pc = 0x10D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D084u;
    // 0x10d088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698E0u, 0x10D084u, 0x10D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D08Cu;
label_10d08c:
    // 0x10d08c: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x10D08Cu;
    SET_GPR_U32(ctx, 31, 0x10D094u);
    ctx->pc = 0x10D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D08Cu;
    // 0x10d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x10D08Cu, 0x10D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D094u;
label_10d094:
    // 0x10d094: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10d094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10d098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d09c: 0x0  nop
    ctx->pc = 0x10d09cu;
    // NOP
    // 0x10d0a0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x10d0a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d0a4: 0x0  nop
    ctx->pc = 0x10d0a4u;
    // NOP
    // 0x10d0a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x10D0A8u;
    {
        const bool branch_taken_0x10d0a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d0a8) {
            ctx->pc = 0x10D0B8u;
            goto label_10d0b8;
        }
    }
    ctx->pc = 0x10D0B0u;
    // 0x10d0b0: 0xc05a63c  jal         func_1698F0
    ctx->pc = 0x10D0B0u;
    SET_GPR_U32(ctx, 31, 0x10D0B8u);
    ctx->pc = 0x10D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0B0u;
    // 0x10d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698F0u, 0x10D0B0u, 0x10D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0B8u;
label_10d0b8:
    // 0x10d0b8: 0xc05a602  jal         func_169808
    ctx->pc = 0x10D0B8u;
    SET_GPR_U32(ctx, 31, 0x10D0C0u);
    ctx->pc = 0x10D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0B8u;
    // 0x10d0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x10D0B8u, 0x10D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0C0u;
label_10d0c0:
    // 0x10d0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d0c4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D0C4u;
    {
        const bool branch_taken_0x10d0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d0c4) {
            ctx->pc = 0x10D0E0u;
            goto label_10d0e0;
        }
    }
    ctx->pc = 0x10D0CCu;
    // 0x10d0cc: 0xc04611e  jal         func_118478
    ctx->pc = 0x10D0CCu;
    SET_GPR_U32(ctx, 31, 0x10D0D4u);
    ctx->pc = 0x10D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0CCu;
    // 0x10d0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x10D0CCu, 0x10D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0D4u;
label_10d0d4:
    // 0x10d0d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0d8: 0xc05a644  jal         func_169910
    ctx->pc = 0x10D0D8u;
    SET_GPR_U32(ctx, 31, 0x10D0E0u);
    ctx->pc = 0x10D0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0D8u;
    // 0x10d0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169910u, 0x10D0D8u, 0x10D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0E0u;
label_10d0e0:
    // 0x10d0e0: 0xc05a602  jal         func_169808
    ctx->pc = 0x10D0E0u;
    SET_GPR_U32(ctx, 31, 0x10D0E8u);
    ctx->pc = 0x10D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0E0u;
    // 0x10d0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x10D0E0u, 0x10D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D0E8u;
label_10d0e8:
    // 0x10d0e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d0e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D0ECu;
    {
        const bool branch_taken_0x10d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0ECu;
        // 0x10d0f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0ec) {
            ctx->pc = 0x10D0FCu;
            goto label_10d0fc;
        }
    }
    ctx->pc = 0x10D0F4u;
    // 0x10d0f4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D0F4u;
    {
        const bool branch_taken_0x10d0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d0f4) {
            ctx->pc = 0x10D0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D0F4u;
            // 0x10d0f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D114u;
            goto label_10d114;
        }
    }
    ctx->pc = 0x10D0FCu;
label_10d0fc:
    // 0x10d0fc: 0xc0460e4  jal         func_118390
    ctx->pc = 0x10D0FCu;
    SET_GPR_U32(ctx, 31, 0x10D104u);
    ctx->pc = 0x10D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0FCu;
    // 0x10d100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x10D0FCu, 0x10D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D104u;
label_10d104:
    // 0x10d104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d108: 0xc05a640  jal         func_169900
    ctx->pc = 0x10D108u;
    SET_GPR_U32(ctx, 31, 0x10D110u);
    ctx->pc = 0x10D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D108u;
    // 0x10d10c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169900u, 0x10D108u, 0x10D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D110u;
label_10d110:
    // 0x10d110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10d114:
    // 0x10d114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D11Cu;
        // 0x10d120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D124u;
    // 0x10d124: 0x0  nop
    ctx->pc = 0x10d124u;
    // NOP
    ctx->pc = 0x10d128u;
}
