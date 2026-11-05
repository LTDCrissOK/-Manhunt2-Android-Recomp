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

// Function: sub_001BF0D0
// Address: 0x1bf0d0 - 0x1bf2d8
void sub_001BF0D0_0x1bf0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF0D0_0x1bf0d0");
#endif

    switch (ctx->pc) {
        case 0x1bf14cu: goto label_1bf14c;
        case 0x1bf164u: goto label_1bf164;
        case 0x1bf1d0u: goto label_1bf1d0;
        case 0x1bf1e8u: goto label_1bf1e8;
        default: break;
    }

    ctx->pc = 0x1bf0d0u;

    // 0x1bf0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bf0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf0d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf0dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bf0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bf0e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf0e8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bf0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bf0ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF0ECu;
    {
        const bool branch_taken_0x1bf0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf0ec) {
            ctx->pc = 0x1BF108u;
            goto label_1bf108;
        }
    }
    ctx->pc = 0x1BF0F4u;
    // 0x1bf0f4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1bf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bf0f8: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1bf0fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bf0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1bf100: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BF100u;
    {
        const bool branch_taken_0x1bf100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF100u;
        // 0x1bf104: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf100) {
            ctx->pc = 0x1BF12Cu;
            goto label_1bf12c;
        }
    }
    ctx->pc = 0x1BF108u;
label_1bf108:
    // 0x1bf108: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF108u;
    {
        const bool branch_taken_0x1bf108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF108u;
        // 0x1bf10c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf108) {
            ctx->pc = 0x1BF124u;
            goto label_1bf124;
        }
    }
    ctx->pc = 0x1BF110u;
    // 0x1bf110: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf114: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF114u;
    {
        const bool branch_taken_0x1bf114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF114u;
        // 0x1bf118: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf114) {
            ctx->pc = 0x1BF124u;
            goto label_1bf124;
        }
    }
    ctx->pc = 0x1BF11Cu;
    // 0x1bf11c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF11Cu;
    {
        const bool branch_taken_0x1bf11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF11Cu;
        // 0x1bf120: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf11c) {
            ctx->pc = 0x1BF12Cu;
            goto label_1bf12c;
        }
    }
    ctx->pc = 0x1BF124u;
label_1bf124:
    // 0x1bf124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf128: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bf128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf12c:
    // 0x1bf12c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1BF12Cu;
    {
        const bool branch_taken_0x1bf12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf12c) {
            ctx->pc = 0x1BF130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF12Cu;
            // 0x1bf130: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF168u;
            goto label_1bf168;
        }
    }
    ctx->pc = 0x1BF134u;
    // 0x1bf134: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf138: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1bf138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bf13c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF13Cu;
    {
        const bool branch_taken_0x1bf13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF13Cu;
        // 0x1bf140: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf13c) {
            ctx->pc = 0x1BF154u;
            goto label_1bf154;
        }
    }
    ctx->pc = 0x1BF144u;
    // 0x1bf144: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1BF144u;
    SET_GPR_U32(ctx, 31, 0x1BF14Cu);
    ctx->pc = 0x1BF148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF144u;
    // 0x1bf148: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BF144u, 0x1BF14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF14Cu;
label_1bf14c:
    // 0x1bf14c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF14Cu;
    {
        const bool branch_taken_0x1bf14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF14Cu;
        // 0x1bf150: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf14c) {
            ctx->pc = 0x1BF168u;
            goto label_1bf168;
        }
    }
    ctx->pc = 0x1BF154u;
label_1bf154:
    // 0x1bf154: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF154u;
    {
        const bool branch_taken_0x1bf154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf154) {
            ctx->pc = 0x1BF158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF154u;
            // 0x1bf158: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF168u;
            goto label_1bf168;
        }
    }
    ctx->pc = 0x1BF15Cu;
    // 0x1bf15c: 0xc06fb1e  jal         func_1BEC78
    ctx->pc = 0x1BF15Cu;
    SET_GPR_U32(ctx, 31, 0x1BF164u);
    ctx->pc = 0x1BF160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF15Cu;
    // 0x1bf160: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x1BF15Cu, 0x1BF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF164u;
label_1bf164:
    // 0x1bf164: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bf164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bf168:
    // 0x1bf168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf16c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bf16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bf170: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF170u;
    {
        const bool branch_taken_0x1bf170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf170) {
            ctx->pc = 0x1BF18Cu;
            goto label_1bf18c;
        }
    }
    ctx->pc = 0x1BF178u;
    // 0x1bf178: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1bf178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bf17c: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bf17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1bf180: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bf180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1bf184: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BF184u;
    {
        const bool branch_taken_0x1bf184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF184u;
        // 0x1bf188: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf184) {
            ctx->pc = 0x1BF1B0u;
            goto label_1bf1b0;
        }
    }
    ctx->pc = 0x1BF18Cu;
label_1bf18c:
    // 0x1bf18c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF18Cu;
    {
        const bool branch_taken_0x1bf18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF18Cu;
        // 0x1bf190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf18c) {
            ctx->pc = 0x1BF1A8u;
            goto label_1bf1a8;
        }
    }
    ctx->pc = 0x1BF194u;
    // 0x1bf194: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf198: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF198u;
    {
        const bool branch_taken_0x1bf198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF198u;
        // 0x1bf19c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf198) {
            ctx->pc = 0x1BF1A8u;
            goto label_1bf1a8;
        }
    }
    ctx->pc = 0x1BF1A0u;
    // 0x1bf1a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF1A0u;
    {
        const bool branch_taken_0x1bf1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A0u;
        // 0x1bf1a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1a0) {
            ctx->pc = 0x1BF1B0u;
            goto label_1bf1b0;
        }
    }
    ctx->pc = 0x1BF1A8u;
label_1bf1a8:
    // 0x1bf1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf1ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bf1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf1b0:
    // 0x1bf1b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BF1B0u;
    {
        const bool branch_taken_0x1bf1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B0u;
        // 0x1bf1b4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1b0) {
            ctx->pc = 0x1BF1ECu;
            goto label_1bf1ec;
        }
    }
    ctx->pc = 0x1BF1B8u;
    // 0x1bf1b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bf1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf1bc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1bf1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bf1c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF1C0u;
    {
        const bool branch_taken_0x1bf1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1C0u;
        // 0x1bf1c4: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1c0) {
            ctx->pc = 0x1BF1D8u;
            goto label_1bf1d8;
        }
    }
    ctx->pc = 0x1BF1C8u;
    // 0x1bf1c8: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1BF1C8u;
    SET_GPR_U32(ctx, 31, 0x1BF1D0u);
    ctx->pc = 0x1BF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1C8u;
    // 0x1bf1cc: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BF1C8u, 0x1BF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1D0u;
label_1bf1d0:
    // 0x1bf1d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF1D0u;
    {
        const bool branch_taken_0x1bf1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1D0u;
        // 0x1bf1d4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1d0) {
            ctx->pc = 0x1BF1ECu;
            goto label_1bf1ec;
        }
    }
    ctx->pc = 0x1BF1D8u;
label_1bf1d8:
    // 0x1bf1d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF1D8u;
    {
        const bool branch_taken_0x1bf1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1d8) {
            ctx->pc = 0x1BF1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF1D8u;
            // 0x1bf1dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF1ECu;
            goto label_1bf1ec;
        }
    }
    ctx->pc = 0x1BF1E0u;
    // 0x1bf1e0: 0xc06fb1e  jal         func_1BEC78
    ctx->pc = 0x1BF1E0u;
    SET_GPR_U32(ctx, 31, 0x1BF1E8u);
    ctx->pc = 0x1BF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1E0u;
    // 0x1bf1e4: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x1BF1E0u, 0x1BF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1E8u;
label_1bf1e8:
    // 0x1bf1e8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1bf1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1bf1ec:
    // 0x1bf1ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bf1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bf1f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bf1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bf1f4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1bf1f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf1f8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1bf1f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf1fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bf1fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf200: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1bf200u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf204: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1bf204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf208: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1bf208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bf20c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1bf20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bf210: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bf210u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1bf214: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bf214u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1bf218: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1bf218u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1bf21c: 0x46000004  c1          0x4
    ctx->pc = 0x1bf21cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bf220: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1bf220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1bf224: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1bf224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1bf228: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bf228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bf22c: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1bf22cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf230: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1bf230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1bf234: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1bf234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf238: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1bf238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bf23c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1bf23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bf240: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bf240u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1bf244: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bf244u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1bf248: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1bf248u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1bf24c: 0x46050144  c1          0x50144
    ctx->pc = 0x1bf24cu;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bf250: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1bf250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf254: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1bf254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf258: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1bf258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf25c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1bf25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf260: 0xe6050034  swc1        $f5, 0x34($s0)
    ctx->pc = 0x1bf260u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1bf264: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1BF264u;
    {
        const bool branch_taken_0x1bf264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF264u;
        // 0x1bf268: 0xe6010038  swc1        $f1, 0x38($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf264) {
            ctx->pc = 0x1BF2C0u;
            goto label_1bf2c0;
        }
    }
    ctx->pc = 0x1BF26Cu;
    // 0x1bf26c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bf26cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bf270: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1bf270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf274: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1bf274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf278: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1bf278u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf27c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1bf27cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf280: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf280u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf284: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1bf284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf288: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1bf288u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf28c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1bf28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf290: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1bf290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf294: 0x0  nop
    ctx->pc = 0x1bf294u;
    // NOP
    // 0x1bf298: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1BF298u;
    {
        const bool branch_taken_0x1bf298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf298) {
            ctx->pc = 0x1BF29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF298u;
            // 0x1bf29c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF2C4u;
            goto label_1bf2c4;
        }
    }
    ctx->pc = 0x1BF2A0u;
    // 0x1bf2a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1bf2a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf2a4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1bf2a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf2a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1bf2a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf2ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1bf2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1bf2b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1bf2b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1bf2b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1bf2b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1bf2b8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1bf2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bf2bc: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1bf2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bf2c0:
    // 0x1bf2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf2c4:
    // 0x1bf2c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bf2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C8u;
        // 0x1bf2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF2D0u;
    // 0x1bf2d0: 0x0  nop
    ctx->pc = 0x1bf2d0u;
    // NOP
    // 0x1bf2d4: 0x0  nop
    ctx->pc = 0x1bf2d4u;
    // NOP
    ctx->pc = 0x1bf2d8u;
}
